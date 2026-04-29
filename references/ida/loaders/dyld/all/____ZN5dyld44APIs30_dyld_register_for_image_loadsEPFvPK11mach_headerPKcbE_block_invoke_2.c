__int64 __fastcall ___ZN5dyld44APIs30_dyld_register_for_image_loadsEPFvPK11mach_headerPKcbE_block_invoke_2(__int64 a1)
{
  return dyld4::RuntimeState::addNotifyLoadImage(
           *(dyld4::RuntimeState **)(a1 + 32),
           *(const dyld4::Loader **)(a1 + 40),
           *(void (__fastcall **)(const mach_header *, const char *, bool))(a1 + 48));
}
