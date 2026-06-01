void __fastcall __noreturn dyld4::PrebuiltObjC::make(
        dyld4::PrebuiltObjC *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3)
{
  __assert_rtn(
    "getPreoptimizedHeaderRWIndex",
    "OptimizerObjC.h",
    858,
    "hinfoRW->entsize == sizeof(header_info_rw<PointerType>)");
}
