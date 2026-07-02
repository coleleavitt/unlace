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

use crate::{
    ida_bytes, ida_funcs, ida_hexrays, ida_name, ida_segment, ida_typeinf, ida_xref, idaapi,
    idautils, idc,
};

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
#[pyo3(name = "XrefsTo", signature = (ea, flags=0))]
fn xrefs_to(ea: u64, flags: u64) -> Vec<u64> {
    let _ = flags;
    with_session(|s| idautils::xrefs_to(s, ea)).unwrap_or_default()
}

#[pyfunction]
#[pyo3(name = "XrefsFrom", signature = (ea, flags=0))]
fn xrefs_from(ea: u64, flags: u64) -> Vec<u64> {
    let _ = flags;
    with_session(|s| idautils::xrefs_from(s, ea)).unwrap_or_default()
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

#[pyfunction]
#[pyo3(name = "set_cmt")]
fn set_cmt(ea: u64, comment: &str, repeatable: bool) -> bool {
    with_session(|s| idc::set_cmt(s, ea, comment, repeatable).is_ok()).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "get_cmt")]
fn get_cmt(ea: u64, repeatable: bool) -> Option<String> {
    with_session(|s| idc::get_cmt(s, ea, repeatable)).flatten()
}

#[pyfunction]
#[pyo3(name = "SetType")]
fn set_type(ea: u64, declaration: &str) -> bool {
    with_session(|s| idc::set_type(s, ea, declaration).is_ok()).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "get_inf_attr")]
fn get_inf_attr(attr: &str) -> Option<u64> {
    with_session(|s| idc::get_inf_attr(s, attr)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_byte")]
fn ida_bytes_get_byte(ea: u64) -> Option<u8> {
    with_session(|s| ida_bytes::get_byte(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_word")]
fn ida_bytes_get_word(ea: u64) -> Option<u16> {
    with_session(|s| ida_bytes::get_word(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_dword")]
fn ida_bytes_get_dword(ea: u64) -> Option<u32> {
    with_session(|s| ida_bytes::get_dword(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_qword")]
fn ida_bytes_get_qword(ea: u64) -> Option<u64> {
    with_session(|s| ida_bytes::get_qword(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_bytes")]
fn ida_bytes_get_bytes(ea: u64, length: usize) -> Option<Vec<u8>> {
    with_session(|s| ida_bytes::get_bytes(s, ea, length)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_strlit_contents", signature = (ea, max_length, strtype=0))]
fn get_strlit_contents(ea: u64, max_length: usize, strtype: u32) -> Option<String> {
    let _ = strtype;
    with_session(|s| ida_bytes::get_strlit_contents(s, ea, max_length)).flatten()
}

#[pyfunction]
#[pyo3(name = "is_loaded")]
fn is_loaded(ea: u64) -> bool {
    with_session(|s| ida_bytes::is_loaded(s, ea)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "is_code")]
fn is_code(ea: u64) -> bool {
    with_session(|s| ida_bytes::is_code(s, ea)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "is_data")]
fn is_data(ea: u64) -> bool {
    with_session(|s| ida_bytes::is_data(s, ea)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "next_head", signature = (ea, maxea=u64::MAX))]
fn next_head(ea: u64, maxea: u64) -> Option<u64> {
    with_session(|s| ida_bytes::next_head(s, ea, maxea)).flatten()
}

#[pyfunction]
#[pyo3(name = "prev_head", signature = (ea, minea=0))]
fn prev_head(ea: u64, minea: u64) -> Option<u64> {
    with_session(|s| ida_bytes::prev_head(s, ea, minea)).flatten()
}

#[pyclass(name = "segment_t", skip_from_py_object)]
#[derive(Clone)]
struct PySegment {
    start_ea: u64,
    end_ea: u64,
    name: String,
    readable: bool,
    writable: bool,
    executable: bool,
}

#[pymethods]
impl PySegment {
    #[getter]
    fn start_ea(&self) -> u64 {
        self.start_ea
    }

    #[getter]
    fn end_ea(&self) -> u64 {
        self.end_ea
    }

    #[getter]
    fn name(&self) -> String {
        self.name.clone()
    }

    #[getter]
    fn readable(&self) -> bool {
        self.readable
    }

    #[getter]
    fn writable(&self) -> bool {
        self.writable
    }

    #[getter]
    fn executable(&self) -> bool {
        self.executable
    }
}

impl From<ida_segment::Segment> for PySegment {
    fn from(segment: ida_segment::Segment) -> Self {
        Self {
            start_ea: segment.start_ea,
            end_ea: segment.end_ea,
            name: segment.name,
            readable: segment.readable,
            writable: segment.writable,
            executable: segment.executable,
        }
    }
}

#[pyfunction]
#[pyo3(name = "getseg")]
fn getseg(ea: u64) -> Option<PySegment> {
    with_session(|s| ida_segment::getseg(s, ea).map(PySegment::from)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_segm_name")]
fn ida_segment_get_segm_name(segment: &Bound<'_, PyAny>) -> PyResult<String> {
    Ok(segment.getattr("name")?.extract()?)
}

#[pyclass(name = "tinfo_t", skip_from_py_object)]
#[derive(Clone)]
struct PyTInfo {
    declaration: String,
}

#[pymethods]
impl PyTInfo {
    fn get_type_str(&self) -> String {
        self.declaration.clone()
    }
}

impl From<ida_typeinf::TInfo> for PyTInfo {
    fn from(tinfo: ida_typeinf::TInfo) -> Self {
        Self {
            declaration: tinfo.declaration,
        }
    }
}

#[pyfunction]
#[pyo3(name = "parse_decl")]
fn parse_decl(decl: &str) -> Option<PyTInfo> {
    ida_typeinf::parse_decl(decl).map(PyTInfo::from)
}

#[pyfunction]
#[pyo3(name = "apply_tinfo")]
fn apply_tinfo(ea: u64, tinfo: &Bound<'_, PyAny>) -> PyResult<bool> {
    let declaration = tinfo.call_method0("get_type_str")?.extract::<String>()?;
    Ok(with_session(|s| {
        ida_typeinf::apply_tinfo(s, ea, &ida_typeinf::TInfo::from_decl(&declaration))
    })
    .unwrap_or(false))
}

#[pyfunction]
#[pyo3(name = "get_first_cref_to")]
fn get_first_cref_to(ea: u64) -> Option<u64> {
    with_session(|s| ida_xref::get_first_cref_to(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_next_cref_to")]
fn get_next_cref_to(ea: u64, prev: u64) -> Option<u64> {
    with_session(|s| ida_xref::get_next_cref_to(s, ea, prev)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_first_cref_from")]
fn get_first_cref_from(ea: u64) -> Option<u64> {
    with_session(|s| ida_xref::get_first_cref_from(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_first_dref_to")]
fn get_first_dref_to(ea: u64) -> Option<u64> {
    with_session(|s| ida_xref::get_first_dref_to(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_name")]
fn ida_name_get_name(ea: u64) -> String {
    with_session(|s| ida_name::get_name(s, ea)).unwrap_or_default()
}

#[pyfunction]
#[pyo3(name = "set_name")]
fn ida_name_set_name(ea: u64, name: &str) -> bool {
    with_session(|s| ida_name::set_name(s, ea, name)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "has_name")]
fn has_name(ea: u64) -> bool {
    with_session(|s| ida_name::has_name(s, ea)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "get_name_ea")]
fn get_name_ea(from: u64, name: &str) -> Option<u64> {
    let _ = from;
    with_session(|s| ida_name::get_name_ea(s, name)).flatten()
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

#[pyfunction]
#[pyo3(name = "getn_func")]
fn getn_func(idx: usize) -> Option<u64> {
    with_session(|s| ida_funcs::getn_func(s, idx)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_func_name")]
fn ida_funcs_get_func_name(ea: u64) -> Option<String> {
    with_session(|s| ida_funcs::get_func_name(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_func_end")]
fn get_func_end(ea: u64) -> Option<u64> {
    with_session(|s| ida_funcs::get_func_end(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "func_contains")]
fn func_contains(func_ea: u64, ea: u64) -> bool {
    with_session(|s| ida_funcs::func_contains(s, func_ea, ea)).unwrap_or(false)
}

#[pyfunction]
#[pyo3(name = "get_next_func")]
fn get_next_func(ea: u64) -> Option<u64> {
    with_session(|s| ida_funcs::get_next_func(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_prev_func")]
fn get_prev_func(ea: u64) -> Option<u64> {
    with_session(|s| ida_funcs::get_prev_func(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "decompile")]
fn idaapi_decompile(ea: u64) -> Option<String> {
    with_session(|s| idaapi::decompile(s, ea)).flatten()
}

#[pyfunction]
#[pyo3(name = "get_imagebase")]
fn get_imagebase() -> Option<u64> {
    with_session(idaapi::get_imagebase).flatten()
}

#[pyfunction]
#[pyo3(name = "get_imagename")]
fn get_imagename() -> Option<String> {
    with_session(idaapi::get_imagename).flatten()
}

#[pyfunction]
#[pyo3(name = "next_addr")]
fn next_addr(ea: u64) -> u64 {
    with_session(|s| idaapi::next_addr(s, ea)).unwrap_or_else(|| ea.saturating_add(1))
}

#[pyfunction]
#[pyo3(name = "prev_addr")]
fn prev_addr(ea: u64) -> u64 {
    with_session(|s| idaapi::prev_addr(s, ea)).unwrap_or_else(|| ea.saturating_sub(1))
}

#[pyfunction]
#[pyo3(name = "init_hexrays_plugin")]
fn init_hexrays_plugin() -> bool {
    ida_hexrays::init_hexrays_plugin()
}

#[pyclass(name = "cfunc_t", skip_from_py_object)]
#[derive(Clone)]
struct PyCFunc {
    entry_ea: u64,
    name: String,
    text: String,
    pseudocode: Vec<String>,
}

#[pymethods]
impl PyCFunc {
    #[getter]
    fn entry_ea(&self) -> u64 {
        self.entry_ea
    }

    #[getter]
    fn name(&self) -> String {
        self.name.clone()
    }

    fn as_text(&self) -> String {
        self.text.clone()
    }

    fn get_pseudocode(&self) -> Vec<String> {
        self.pseudocode.clone()
    }

    fn __str__(&self) -> String {
        self.text.clone()
    }
}

#[pyfunction]
#[pyo3(name = "decompile")]
fn hexrays_decompile(ea: u64) -> Option<PyCFunc> {
    with_session(|s| {
        ida_hexrays::decompile(s, ea).map(|cfunc| {
            let text = cfunc.as_text();
            PyCFunc {
                entry_ea: cfunc.entry_ea,
                name: cfunc.name,
                text,
                pseudocode: cfunc.pseudocode,
            }
        })
    })
    .flatten()
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
    idautils_mod.add_function(wrap_pyfunction!(xrefs_from, &idautils_mod)?)?;
    m.add_submodule(&idautils_mod)?;

    // idc
    let idc_mod = PyModule::new(py, "idc")?;
    idc_mod.add_function(wrap_pyfunction!(get_func_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_segm_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(set_name, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_bytes, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(set_cmt, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_cmt, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(set_type, &idc_mod)?)?;
    idc_mod.add_function(wrap_pyfunction!(get_inf_attr, &idc_mod)?)?;
    m.add_submodule(&idc_mod)?;

    let bytes_mod = PyModule::new(py, "ida_bytes")?;
    bytes_mod.add_function(wrap_pyfunction!(ida_bytes_get_byte, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(ida_bytes_get_word, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(ida_bytes_get_dword, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(ida_bytes_get_qword, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(ida_bytes_get_bytes, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(get_strlit_contents, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(is_loaded, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(is_code, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(is_data, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(next_head, &bytes_mod)?)?;
    bytes_mod.add_function(wrap_pyfunction!(prev_head, &bytes_mod)?)?;
    m.add_submodule(&bytes_mod)?;

    let segment_mod = PyModule::new(py, "ida_segment")?;
    segment_mod.add_class::<PySegment>()?;
    segment_mod.add_function(wrap_pyfunction!(getseg, &segment_mod)?)?;
    segment_mod.add_function(wrap_pyfunction!(ida_segment_get_segm_name, &segment_mod)?)?;
    m.add_submodule(&segment_mod)?;

    let typeinf_mod = PyModule::new(py, "ida_typeinf")?;
    typeinf_mod.add_class::<PyTInfo>()?;
    typeinf_mod.add_function(wrap_pyfunction!(parse_decl, &typeinf_mod)?)?;
    typeinf_mod.add_function(wrap_pyfunction!(apply_tinfo, &typeinf_mod)?)?;
    m.add_submodule(&typeinf_mod)?;

    let xref_mod = PyModule::new(py, "ida_xref")?;
    xref_mod.add_function(wrap_pyfunction!(get_first_cref_to, &xref_mod)?)?;
    xref_mod.add_function(wrap_pyfunction!(get_next_cref_to, &xref_mod)?)?;
    xref_mod.add_function(wrap_pyfunction!(get_first_cref_from, &xref_mod)?)?;
    xref_mod.add_function(wrap_pyfunction!(get_first_dref_to, &xref_mod)?)?;
    m.add_submodule(&xref_mod)?;

    let name_mod = PyModule::new(py, "ida_name")?;
    name_mod.add_function(wrap_pyfunction!(ida_name_get_name, &name_mod)?)?;
    name_mod.add_function(wrap_pyfunction!(ida_name_set_name, &name_mod)?)?;
    name_mod.add_function(wrap_pyfunction!(has_name, &name_mod)?)?;
    name_mod.add_function(wrap_pyfunction!(get_name_ea, &name_mod)?)?;
    m.add_submodule(&name_mod)?;

    // ida_funcs
    let funcs_mod = PyModule::new(py, "ida_funcs")?;
    funcs_mod.add_function(wrap_pyfunction!(get_func, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(get_func_qty, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(getn_func, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(ida_funcs_get_func_name, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(get_func_end, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(func_contains, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(get_next_func, &funcs_mod)?)?;
    funcs_mod.add_function(wrap_pyfunction!(get_prev_func, &funcs_mod)?)?;
    m.add_submodule(&funcs_mod)?;

    let idaapi_mod = PyModule::new(py, "idaapi")?;
    idaapi_mod.add_function(wrap_pyfunction!(get_imagebase, &idaapi_mod)?)?;
    idaapi_mod.add_function(wrap_pyfunction!(get_imagename, &idaapi_mod)?)?;
    idaapi_mod.add_function(wrap_pyfunction!(next_addr, &idaapi_mod)?)?;
    idaapi_mod.add_function(wrap_pyfunction!(prev_addr, &idaapi_mod)?)?;
    idaapi_mod.add_function(wrap_pyfunction!(idaapi_decompile, &idaapi_mod)?)?;
    m.add_submodule(&idaapi_mod)?;

    let hexrays_mod = PyModule::new(py, "ida_hexrays")?;
    hexrays_mod.add_class::<PyCFunc>()?;
    hexrays_mod.add_function(wrap_pyfunction!(init_hexrays_plugin, &hexrays_mod)?)?;
    hexrays_mod.add_function(wrap_pyfunction!(hexrays_decompile, &hexrays_mod)?)?;
    m.add_submodule(&hexrays_mod)?;

    Ok(())
}

/// Run a Python script with the IDAPython shim modules pre-imported.
pub fn run_script(session: Session, source: &str) -> PyResult<()> {
    Python::initialize();
    set_current_session(session);
    Python::attach(|py| {
        // Build the unlace_ida module + register it in sys.modules so the
        // script's `import idc` / `import idautils` resolve to our shim.
        let m = PyModule::new(py, "unlace_ida")?;
        unlace_ida(py, &m)?;
        let sys_modules_obj = py.import("sys")?.getattr("modules")?;
        let sys_modules: &Bound<'_, PyDict> = sys_modules_obj.cast()?;
        m.setattr("__path__", Vec::<String>::new())?;
        sys_modules.set_item("unlace_ida", &m)?;
        for sub in [
            "idautils",
            "idc",
            "ida_bytes",
            "ida_segment",
            "ida_typeinf",
            "ida_xref",
            "ida_name",
            "ida_funcs",
            "idaapi",
            "ida_hexrays",
        ] {
            let module = m.getattr(sub)?;
            sys_modules.set_item(sub, &module)?;
            sys_modules.set_item(format!("unlace_ida.{sub}"), module)?;
        }
        let src = std::ffi::CString::new(source)
            .map_err(|_| pyo3::exceptions::PyValueError::new_err("source contained NUL byte"))?;
        py.run(&src, None, None)
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
    use unlace_loader::image::{ArchId, BinaryImage, Endian, RelocKind, Relocation};

    #[test]
    fn run_script_exposes_xrefs_from() {
        let session = Session::new();
        session.add_instruction_xref(0x1000, 0x2000);

        run_script(
            session,
            "import idautils\nassert idautils.XrefsFrom(0x1000) == [0x2000]\nassert idautils.XrefsFrom(0x1000, 0) == [0x2000]\nassert idautils.XrefsFrom(0x1004) == []\n",
        )
        .expect("script should see XrefsFrom");
    }

    #[test]
    fn run_script_exposes_xrefs_to_flags_arg() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.relocations.push(Relocation {
            addr: 0x4010,
            sym_name: "printf".into(),
            kind: RelocKind::PltJumpSlot,
        });
        let session = Session::new();
        session.set_binary(image);

        run_script(
            session,
            "import idautils\nassert idautils.XrefsTo(0x4010) == [0x4010]\nassert idautils.XrefsTo(0x4010, 0) == [0x4010]\n",
        )
        .expect("script should see XrefsTo flags arg");
    }

    #[test]
    fn run_script_reads_ir_instruction_xrefs() {
        let mut function = Function::new("caller", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::without_output(
            IrOp::Call,
            vec![Varnode::constant(0x2000, 8)],
            0x1010,
        ));
        function.insert_block(block);

        let session = Session::new();
        session.add_instruction_xrefs(unlace_ir::xref::build_instruction_xrefs(
            &std::collections::BTreeMap::from([(0x1000, function)]),
        ));

        run_script(
            session,
            "import idautils\nassert idautils.XrefsFrom(0x1010, 0) == [0x2000]\n",
        )
        .expect("script should see IR-produced XrefsFrom");
    }

    #[test]
    fn run_script_exposes_decompile_text() {
        let session = Session::new();
        session.set_decompiled_function(0x1000, 0x20, "main".into(), "int main(void) {}".into());

        run_script(
            session,
            "import idaapi, ida_hexrays\nassert idaapi.decompile(0x1010) == 'int main(void) {}'\ncfunc = ida_hexrays.decompile(0x1010)\nassert isinstance(cfunc, ida_hexrays.cfunc_t)\nassert cfunc.entry_ea == 0x1000\nassert cfunc.name == 'main'\nassert str(cfunc) == 'int main(void) {}'\nassert cfunc.as_text() == 'int main(void) {}'\nassert cfunc.get_pseudocode() == ['int main(void) {}']\nassert not isinstance(cfunc, str)\n",
        )
        .expect("script should see decompile text");
    }

    #[test]
    fn run_script_exposes_idaapi_image_helpers() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = Session::new();
        session.load_binary(&binary).expect("load fixture");

        run_script(
            session,
            "import idaapi\nassert isinstance(idaapi.get_imagebase(), int)\nassert idaapi.get_imagename() == 'hello_world.elf'\n",
        )
        .expect("script should see image helpers");
    }

    #[test]
    fn run_script_exposes_idaapi_next_prev_addr() {
        let session = Session::new();

        run_script(
            session,
            "import idaapi\nassert idaapi.next_addr(0x1000) == 0x1001\nassert idaapi.prev_addr(0x1000) == 0x0fff\nassert idaapi.prev_addr(0) == 0\n",
        )
        .expect("script should see next/prev addr helpers");
    }

    #[test]
    fn run_script_exposes_ida_funcs_index_and_name_helpers() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = Session::new();
        session.load_binary(&binary).expect("load fixture");

        run_script(
            session,
            "import ida_funcs\nqty = ida_funcs.get_func_qty()\nassert qty > 0\nfirst = ida_funcs.getn_func(0)\nassert isinstance(first, int)\nassert ida_funcs.getn_func(qty) is None\nname = ida_funcs.get_func_name(first)\nassert isinstance(name, str) and name\n",
        )
        .expect("script should see indexed function helpers");
    }

    #[test]
    fn run_script_exposes_ida_funcs_navigation_helpers() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = Session::new();
        session.load_binary(&binary).expect("load fixture");

        run_script(
            session,
            "import ida_funcs\nqty = ida_funcs.get_func_qty()\nassert qty > 1\nfirst = ida_funcs.getn_func(0)\nsecond = ida_funcs.getn_func(1)\nlast = ida_funcs.getn_func(qty - 1)\nassert ida_funcs.get_func_end(first) >= first\nassert ida_funcs.func_contains(first, first)\nassert ida_funcs.get_next_func(first) == second\nassert ida_funcs.get_prev_func(second) == first\nassert ida_funcs.get_prev_func(first) is None\nassert ida_funcs.get_next_func(last) is None\nassert ida_funcs.get_next_func(0xffffffffffffffff) is None\n",
        )
        .expect("script should see function navigation helpers");
    }

    #[test]
    fn run_script_exposes_ida_name_module() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = Session::new();
        session.load_binary(&binary).expect("load fixture");

        run_script(
            session,
            "import ida_funcs, ida_name\nfirst = ida_funcs.getn_func(0)\nname = ida_name.get_name(first)\nassert name\nassert ida_name.has_name(first)\nassert ida_name.get_name_ea(0, name) == first\nassert ida_name.set_name(0x3333, 'user_label')\nassert ida_name.get_name(0x3333) == 'user_label'\nassert ida_name.has_name(0x3333)\nassert ida_name.get_name_ea(0, 'user_label') == 0x3333\nassert ida_name.get_name(0x4444) == ''\n",
        )
        .expect("script should see ida_name module");
    }

    #[test]
    fn run_script_exposes_ida_bytes_module() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(unlace_loader::Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: 0x10,
            data: b"\x01\x02\x03\x04hello\0xx".to_vec(),
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::EXEC,
        });
        image.sections.push(unlace_loader::Section {
            name: ".data".into(),
            vaddr: 0x2000,
            size: 0x04,
            data: vec![0xaa, 0xbb, 0xcc, 0xdd],
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::WRITE,
        });
        image.symbols.insert(
            0x1000,
            unlace_loader::Symbol {
                name: "func".into(),
                addr: 0x1000,
                size: 0x10,
                kind: unlace_loader::SymbolKind::Function,
            },
        );
        image.symbols.insert(
            0x2000,
            unlace_loader::Symbol {
                name: "data".into(),
                addr: 0x2000,
                size: 0x04,
                kind: unlace_loader::SymbolKind::Object,
            },
        );
        let session = Session::new();
        session.set_binary(image);

        run_script(
            session,
            "import ida_bytes\nassert ida_bytes.get_byte(0x1000) == 1\nassert ida_bytes.get_word(0x1000) == 0x0201\nassert ida_bytes.get_dword(0x1000) == 0x04030201\nassert ida_bytes.get_qword(0x1000) == 0x6c6c656804030201\nassert ida_bytes.get_bytes(0x1004, 5) == b'hello'\nassert ida_bytes.get_strlit_contents(0x1004, 8, 0) == 'hello'\nassert ida_bytes.get_byte(0x9999) is None\nassert ida_bytes.is_loaded(0x1000)\nassert ida_bytes.is_code(0x1000)\nassert not ida_bytes.is_data(0x1000)\nassert ida_bytes.is_data(0x2000)\nassert not ida_bytes.is_code(0x2000)\nassert not ida_bytes.is_loaded(0x9999)\nassert ida_bytes.next_head(0x1000, 0xffffffffffffffff) == 0x2000\nassert ida_bytes.prev_head(0x2000, 0) == 0x1000\n",
        )
        .expect("script should see ida_bytes module");
    }

    #[test]
    fn run_script_exposes_ida_segment_module() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(unlace_loader::Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: 0x10,
            data: vec![0xcc; 0x10],
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::EXEC,
        });
        image.sections.push(unlace_loader::Section {
            name: ".data".into(),
            vaddr: 0x2000,
            size: 0x08,
            data: vec![0; 0x08],
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::WRITE,
        });
        let session = Session::new();
        session.set_binary(image);

        run_script(
            session,
            "import ida_segment\nseg = ida_segment.getseg(0x1004)\nassert isinstance(seg, ida_segment.segment_t)\nassert seg.start_ea == 0x1000\nassert seg.end_ea == 0x1010\nassert seg.name == '.text'\nassert seg.readable\nassert seg.executable\nassert not seg.writable\nassert ida_segment.get_segm_name(seg) == '.text'\ndata = ida_segment.getseg(0x2000)\nassert data.writable and not data.executable\nassert ida_segment.getseg(0x9999) is None\n",
        )
        .expect("script should see ida_segment module");
    }

    #[test]
    fn run_script_exposes_ida_typeinf_module() {
        let session = Session::new();

        run_script(
            session.clone(),
            "import ida_typeinf\ntif = ida_typeinf.parse_decl('int main(int)')\nassert isinstance(tif, ida_typeinf.tinfo_t)\nassert tif.get_type_str() == 'int main(int)'\nassert ida_typeinf.parse_decl('') is None\nassert ida_typeinf.apply_tinfo(0x401000, tif)\n",
        )
        .expect("script should see ida_typeinf module");

        assert_eq!(session.annotations().types.len(), 1);
        assert_eq!(
            session.annotations().types[&0x401000].declaration,
            "int main(int)"
        );
    }

    #[test]
    fn run_script_exposes_ida_xref_module() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.relocations.push(Relocation {
            addr: 0x4010,
            sym_name: "printf".into(),
            kind: RelocKind::PltJumpSlot,
        });
        image.relocations.push(Relocation {
            addr: 0x4020,
            sym_name: "stdout".into(),
            kind: RelocKind::GlobDat,
        });
        let session = Session::new();
        session.set_binary(image);
        session.add_instruction_xref(0x1000, 0x2000);

        run_script(
            session,
            "import ida_xref\nassert ida_xref.get_first_cref_to(0x4010) == 0x4010\nassert ida_xref.get_next_cref_to(0x4010, 0x400f) == 0x4010\nassert ida_xref.get_next_cref_to(0x4010, 0x4010) is None\nassert ida_xref.get_first_dref_to(0x4020) == 0x4020\nassert ida_xref.get_first_cref_from(0x1000) == 0x2000\nassert ida_xref.get_first_cref_to(0x9999) is None\nassert ida_xref.get_first_dref_to(0x9999) is None\nassert ida_xref.get_first_cref_from(0x9999) is None\n",
        )
        .expect("script should see ida_xref module");
    }

    #[test]
    fn run_script_exposes_idc_comment_type_and_inf_helpers() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.entry = 0x401080;
        image.image_base = Some(0x400000);
        image.sections.push(unlace_loader::Section {
            name: ".text".into(),
            vaddr: 0x401000,
            size: 0x100,
            data: vec![0; 0x100],
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::EXEC,
        });
        let session = Session::new();
        session.set_binary(image);

        run_script(
            session.clone(),
            "import idaapi, idc\nassert idc.set_cmt(0x401000, 'hello', False)\nassert idc.get_cmt(0x401000, False) == 'hello'\nassert idc.get_cmt(0x401000, True) is None\nassert idc.set_cmt(0x401008, 'repeat', True)\nassert idc.get_cmt(0x401008, True) == 'repeat'\nassert idc.SetType(0x401000, 'int main(int)')\nassert idc.get_inf_attr('INF_IMAGE_BASE') == 0x400000\nassert idc.get_inf_attr('INF_IMAGE_BASE') == idaapi.get_imagebase()\nassert idc.get_inf_attr('min_ea') == 0x401000\nassert idc.get_inf_attr('max_ea') == 0x401100\nassert idc.get_inf_attr('unknown') is None\n",
        )
        .expect("script should see idc helper functions");

        let annotations = session.annotations();
        assert_eq!(annotations.comments[&0x401000].text, "hello");
        assert!(!annotations.comments[&0x401000].repeatable);
        assert_eq!(annotations.comments[&0x401008].text, "repeat");
        assert!(annotations.comments[&0x401008].repeatable);
        assert_eq!(annotations.types[&0x401000].declaration, "int main(int)");
    }

    #[test]
    fn run_script_exposes_package_style_unlace_ida_imports() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(unlace_loader::Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: 0x10,
            data: vec![0xcc; 0x10],
            flags: unlace_loader::SectionFlags::READ | unlace_loader::SectionFlags::EXEC,
        });
        image.symbols.insert(
            0x1000,
            unlace_loader::Symbol {
                name: "func".into(),
                addr: 0x1000,
                size: 0x10,
                kind: unlace_loader::SymbolKind::Function,
            },
        );
        let session = Session::new();
        session.set_binary(image);

        run_script(
            session,
            "import unlace_ida\nfrom unlace_ida import ida_bytes, ida_funcs\nimport unlace_ida.ida_segment as ida_segment_pkg\nassert unlace_ida.ida_bytes is ida_bytes\nassert ida_funcs.get_func_qty() == 1\nassert ida_bytes.is_loaded(0x1000)\nseg = ida_segment_pkg.getseg(0x1000)\nassert seg.name == '.text'\n",
        )
        .expect("script should see package-style unlace_ida imports");
    }

    #[test]
    fn run_script_exposes_hexrays_init_plugin() {
        let session = Session::new();

        run_script(
            session,
            "import ida_hexrays\nassert ida_hexrays.init_hexrays_plugin() is True\n",
        )
        .expect("script should see init_hexrays_plugin");
    }
}
