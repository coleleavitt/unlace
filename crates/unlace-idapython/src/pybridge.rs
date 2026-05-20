//! pyo3 bridge that exposes the IDAPython compat layer to Python.
//!
//! Enables `unlace py <script.py>` to run real IDA-style scripts:
//!
//! ```python
//! import idautils, idc
//! for ea in idautils.Functions():
//!     print(hex(ea), idc.get_func_name(ea))
//! ```
//!
//! Gated behind the `python` cargo feature so a stock `cargo check`
//! doesn't pull in libpython at build time.

#![cfg(feature = "python")]

use pyo3::prelude::*;
use pyo3::types::PyDict;
use unlace_session::Session;

use crate::{ida_funcs, idautils, idc};

thread_local! {
    static CURRENT_SESSION: std::cell::RefCell<Option<Session>> =
        const { std::cell::RefCell::new(None) };
}

/// Set the session that the IDAPython shim should query for the
/// duration of the current Python script execution.
pub fn set_current_session(session: Session) {
    CURRENT_SESSION.with(|cell| *cell.borrow_mut() = Some(session));
}

fn with_session<R>(f: impl FnOnce(&Session) -> R) -> Option<R> {
    CURRENT_SESSION.with(|cell| cell.borrow().as_ref().map(f))
}

// -------------- idautils submodule --------------

#[pyfunction]
#[pyo3(name = "Functions", signature = (start=None, end=None))]
fn functions(start: Option<u64>, end: Option<u64>) -> Vec<u64> {
    with_session(|s| idautils::functions(s, start, end)).unwrap_or_default()
}

#[pyfunction]
#[pyo3(name = "Segments")]
fn segments() -> Vec<u64> {
    with_session(idautils::segments).unwrap_or_default()
}

#[pyfunction]
#[pyo3(name = "XrefsTo")]
fn xrefs_to(ea: u64) -> Vec<u64> {
    with_session(|s| idautils::xrefs_to(s, ea)).unwrap_or_default()
}

// -------------- idc submodule --------------

#[pyfunction]
#[pyo3(name = "get_func_name")]
fn get_func_name(ea: u64) -> Option<String> {
    with_session(|s| idc::get_func_name(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_segm_name")]
fn get_segm_name(ea: u64) -> Option<String> {
    with_session(|s| idc::get_segm_name(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "set_name")]
fn set_name(ea: u64, name: &str) -> bool {
    with_session(|s| idc::set_name(s, ea, name)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "get_bytes")]
fn get_bytes(ea: u64, size: usize) -> Option<Vec<u8>> {
    with_session(|s| idc::get_bytes(s, ea, size)).flatten()
}

// -------------- ida_funcs submodule --------------

#[pyfunction]
#[pyo3(name = "get_func")]
fn get_func(ea: u64) -> Option<u64> {
    with_session(|s| ida_funcs::get_func(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_func_qty")]
fn get_func_qty() -> usize {
    with_session(ida_funcs::get_func_qty).unwrap_or(0)
}

/// The Python module entry point. Builds a multi-submodule package
/// matching the real IDA layout: `unlace_ida`, `unlace_ida.idc`,
/// `unlace_ida.idautils`, etc.
#[pymodule]
fn unlace_ida(py: Python<'_>, m: &Bound<'_, PyModule>) -> PyResult<()> {
    // idautils
    let idautils_mod = PyModule::new(py, "idautils")?;
    idautils_mod.add_function(wrap_pyfunction!(functions, &idautils_mod)?)?;
    idautils_mod.add_function(wrap_pyfunction!(segments, &idautils_mod)?)?;
    idautils_mod.add_function(wrap_pyfunction!(xrefs_to, &idautils_mod)?)?;
    m.add_submodule(&idautils_mod)?;

    // idc
    let idc_mod = PyModule::new(py, "idc")?;
    idc_mod.add_function(wrap_pyfunction!(get_func_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_segm_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(set_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_bytes, &idc_mod)?)?;
    m.add_submodule(&idc_mod)?;

    // ida_funcs
    let funcs_mod = PyModule::new(py, "ida_funcs")?;
    funcs_mod.add_function(wrap_pyfunction!(get_func, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(get_func_qty, &funcs_mod)?)?;
    m.add_submodule(&funcs_mod)?;

    Ok(())
}

/// Run a Python script with the IDAPython shim modules pre-imported.
pub fn run_script(session: Session, source: &str) -> PyResult<()> {
    pyo3::prepare_freethreaded_python();
    set_current_session(session);
    Python::with_gil(|py| {
        // Build the unlace_ida module + register it in sys.modules so the
        // script's `import idc` / `import idautils` resolve to our shim.
        let m = PyModule::new(py, "unlace_ida")?;
        unlace_ida(py, &m)?;
        let sys_modules_obj = py.import("sys")?.getattr("modules")?;
        let sys_modules: &Bound<'_, PyDict> = sys_modules_obj.downcast()?;
        for sub in ["idautils", "idc", "ida_funcs"] {
            sys_modules.set_item(sub, m.getattr(sub)?)?;
        }
        let src = std::ffi::CString::new(source)
            .map_err(|_| pyo3::exceptions::PyValueError::new_err("source contained NUL byte"))?;
        py.run(&src, None, None)
    })
}
