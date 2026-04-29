__int64 __fastcall dyld4::APIs::dyld_get_base_platform(dyld4::APIs *this, int a2)
{
  __int64 v4; // x0
  __int64 v5; // x20

  v4 = dyld3::MachOFile::basePlatform(a2);
  v5 = v4;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_base_platform(%d) => %d\n", a2, v4);
  return v5;
}
