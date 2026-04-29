__int64 __fastcall dyld4::APIs::_dyld_find_unwind_sections(
        dyld4::RuntimeState *this,
        const void *a2,
        dyld3::MachOLoaded **a3)
{
  __int64 ImageMappedAt; // x20
  dyld3::MachOLoaded *v7; // x0
  __int64 SectionContent; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x0
  unsigned __int64 v11; // x8
  unsigned __int64 v13; // [xsp+10h] [xbp-30h] BYREF
  dyld3::MachOLoaded *v14; // [xsp+18h] [xbp-28h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_find_unwind_sections(%p, %p)\n", a2, a3);
  v14 = nullptr;
  ImageMappedAt = dyld4::APIs::findImageMappedAt(this, a2, &v14, nullptr, nullptr, nullptr, nullptr, nullptr);
  if ( (_DWORD)ImageMappedAt )
  {
    v7 = v14;
    *a3 = v14;
    *(_OWORD *)(a3 + 1) = 0u;
    *(_OWORD *)(a3 + 3) = 0u;
    v13 = 0;
    SectionContent = dyld3::MachOLoaded::findSectionContent(v7, "__TEXT", "__eh_frame", &v13, 0);
    if ( SectionContent )
    {
      v9 = v13;
      a3[1] = (dyld3::MachOLoaded *)SectionContent;
      a3[2] = (dyld3::MachOLoaded *)v9;
    }
    v10 = dyld3::MachOLoaded::findSectionContent(v14, "__TEXT", "__unwind_info", &v13, 0);
    if ( v10 )
    {
      v11 = v13;
      a3[3] = (dyld3::MachOLoaded *)v10;
      a3[4] = (dyld3::MachOLoaded *)v11;
    }
  }
  return ImageMappedAt;
}
