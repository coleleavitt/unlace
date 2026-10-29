dyld3::MachOLoaded *__fastcall dyld4::APIs::dyld_image_header_containing_address(dyld4::APIs *this, const void *a2)
{
  dyld3::MachOLoaded *v5; // [xsp+18h] [xbp-18h] BYREF

  v5 = nullptr;
  dyld4::APIs::findImageMappedAt(this, a2, &v5, nullptr, nullptr, nullptr, nullptr, nullptr);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_image_header_containing_address(%p) =>%p\n", a2, v5);
  return v5;
}
