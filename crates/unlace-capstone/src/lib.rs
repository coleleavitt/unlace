use std::ffi::{c_char, c_int, c_void};
use std::sync::Once;

use capstone_sys::cs_err::CS_ERR_OK;
use capstone_sys::{cs_opt_mem, cs_opt_type, cs_option, va_list};

static INIT: Once = Once::new();

unsafe extern "C" {
    fn malloc(size: usize) -> *mut c_void;
    fn calloc(nmemb: usize, size: usize) -> *mut c_void;
    fn realloc(ptr: *mut c_void, size: usize) -> *mut c_void;
    fn free(ptr: *mut c_void);
    fn vsnprintf(str_: *mut c_char, size: usize, format: *const c_char, ap: *mut va_list) -> c_int;
}

pub fn ensure_memory_callbacks() {
    INIT.call_once(|| {
        let mem = cs_opt_mem {
            malloc: Some(malloc),
            calloc: Some(calloc),
            realloc: Some(realloc),
            free: Some(free),
            vsnprintf: Some(vsnprintf),
        };
        // SAFETY: `CS_OPT_MEM` accepts a null handle and copies process-lifetime C runtime callbacks.
        let err = unsafe {
            cs_option(
                0,
                cs_opt_type::CS_OPT_MEM,
                &mem as *const cs_opt_mem as usize,
            )
        };
        assert_eq!(
            err, CS_ERR_OK,
            "failed to initialize Capstone memory callbacks"
        );
    });
}

#[cfg(test)]
mod tests {
    use super::ensure_memory_callbacks;
    use capstone_sys::cs_arch;
    use capstone_sys::cs_err::CS_ERR_OK;
    use capstone_sys::{cs_close, cs_mode, cs_open, csh};

    #[test]
    fn initializes_callbacks_before_open() {
        ensure_memory_callbacks();

        let mut handle: csh = 0;
        // SAFETY: `handle` is a valid out-pointer and is closed on success.
        let err = unsafe { cs_open(cs_arch::CS_ARCH_ARM64, cs_mode::CS_MODE_ARM, &mut handle) };
        assert_eq!(err, CS_ERR_OK);
        assert_ne!(handle, 0);

        // SAFETY: `handle` was returned by `cs_open` above.
        let close_err = unsafe { cs_close(&mut handle) };
        assert_eq!(close_err, CS_ERR_OK);
    }
}
