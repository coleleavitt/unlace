__int64 __fastcall ___ZN5dyld44APIs36_dyld_register_func_for_remove_imageEPFvPK11mach_headerlE_block_invoke(__int64 a1)
{
  return dyld4::RuntimeState::addNotifyRemoveFunc(
           *(dyld4::RuntimeState **)(a1 + 32),
           *(const dyld4::Loader **)(a1 + 40),
           *(void (__fastcall **)(const mach_header *, __int64))(a1 + 48));
}
