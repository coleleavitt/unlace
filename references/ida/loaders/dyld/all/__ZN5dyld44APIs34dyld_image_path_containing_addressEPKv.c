char *__fastcall dyld4::APIs::dyld_image_path_containing_address(dyld4::APIs *this, DyldSharedCache *a2)
{
  char *v5; // [xsp+18h] [xbp-28h] BYREF
  bool v6; // [xsp+27h] [xbp-19h] BYREF
  dyld3::MachOLoaded *v7; // [xsp+28h] [xbp-18h] BYREF

  v7 = nullptr;
  v6 = 0;
  v5 = nullptr;
  dyld4::APIs::findImageMappedAt(this, a2, &v7, &v6, (const char **)&v5, nullptr, nullptr, nullptr);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_image_path_containing_address(%p) => '%s'\n", a2, v5);
  return v5;
}
