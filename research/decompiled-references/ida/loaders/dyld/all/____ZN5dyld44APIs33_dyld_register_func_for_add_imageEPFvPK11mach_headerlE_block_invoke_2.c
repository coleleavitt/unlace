__int64 __fastcall ___ZN5dyld44APIs33_dyld_register_func_for_add_imageEPFvPK11mach_headerlE_block_invoke_2(__int64 a1)
{
  return dyld4::RuntimeState::addNotifyAddFunc(
           *(dyld4::RuntimeState **)(a1 + 32),
           *(const dyld4::Loader **)(a1 + 40),
           *(void (__fastcall **)(const mach_header *, __int64))(a1 + 48));
}
