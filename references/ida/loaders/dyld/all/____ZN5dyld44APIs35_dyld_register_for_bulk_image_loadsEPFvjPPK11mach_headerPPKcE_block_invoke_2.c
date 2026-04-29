__int64 __fastcall ___ZN5dyld44APIs35_dyld_register_for_bulk_image_loadsEPFvjPPK11mach_headerPPKcE_block_invoke_2(
        __int64 a1)
{
  return dyld4::RuntimeState::addNotifyBulkLoadImage(
           *(dyld4::RuntimeState **)(a1 + 32),
           *(const dyld4::Loader **)(a1 + 40),
           *(void (__fastcall **)(unsigned int, const mach_header **, const char **))(a1 + 48));
}
