use super::*;
use crate::loader::noreturn::{name_matches, parse_list};

/// The vendored upstream list carries the Win32 API exits unlace's merged
/// PE/Mach-O list never named — the whole point of the widening.
#[test]
fn win32_list_names_the_api_exits() {
    let (exact, wildcard) = parse_list(PE_WIN32_NORETURN_LIST);
    for want in [
        "ExitProcess",
        "ExitThread",
        "FreeLibraryAndExitThread",
        "KeBugCheck",
        "KeBugCheckEx",
        "RpcRaiseException",
        "longjmp",
        "__crtExitProcess",
    ] {
        assert!(name_matches(want, &exact, &wildcard), "missing {want}");
    }
}

/// The #28 additions: the MSVC CRT /GS reporters, the Microsoft STL `_X*`
/// throwers in both decorations and demangled, MFC, comdef and ntdll exits.
#[test]
fn win32_list_names_the_crt_and_framework_exits() {
    let (exact, wildcard) = parse_list(PE_WIN32_NORETURN_LIST);
    for want in [
        "__report_gsfailure",
        "__report_securityfailure",
        "__report_securityfailureEx",
        "_amsg_exit",
        "?_Xlength_error@std@@YAXPBD@Z",
        "?_Xlength_error@std@@YAXPEBD@Z",
        "?_Xinvalid_argument@std@@YAXPEBD@Z",
        "?_XGetLastError@std@@YAXXZ",
        "std::_Xout_of_range",
        "?unexpected@@YAXXZ",
        "?AfxThrowMemoryException@@YGXXZ",
        "?AfxThrowFileException@@YAXHJPEB_W@Z",
        "AfxThrowInvalidArgException",
        "?_com_raise_error@@YGXJPAUIErrorInfo@@@Z",
        "RtlExitUserProcess",
        "RtlExitUserThread",
        "RtlRestoreContext",
    ] {
        assert!(name_matches(want, &exact, &wildcard), "missing {want}");
    }
    for nope in [
        "_com_issue_error",
        "?_com_issue_error@@YGXJ@Z",
        "FatalAppExitA",
    ] {
        assert!(
            !name_matches(nope, &exact, &wildcard),
            "{nope} must not be no-return"
        );
    }
}

/// Windows API names that DO return must not be in the set (the list is
/// upstream's, so this guards a bad hand-edit of the vendored file).
#[test]
fn win32_list_omits_returning_apis() {
    let (exact, wildcard) = parse_list(PE_WIN32_NORETURN_LIST);
    for nope in [
        "CreateThread",
        "GetTickCount",
        "HeapFree",
        "GetProcessHeap",
        "TerminateProcess",
    ] {
        assert!(
            !name_matches(nope, &exact, &wildcard),
            "{nope} must not be no-return"
        );
    }
}
