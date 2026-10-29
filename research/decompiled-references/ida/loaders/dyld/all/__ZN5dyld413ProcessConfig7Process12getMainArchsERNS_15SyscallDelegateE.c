__int64 __fastcall dyld4::ProcessConfig::Process::getMainArchs(dyld3::MachOFile **this, dyld4::SyscallDelegate *a2)
{
  const char *v4; // x0
  const char *v5; // x0
  _BOOL8 v6; // x21
  const char *v7; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = dyld3::MachOFile::archName(*this);
  if ( _platform_strcmp(v4, "arm64") )
  {
    v5 = (const char *)_simple_getenv((int)*(this + 14), "ptrauth_disabled");
    if ( v5 )
      v6 = _platform_strcmp(v5, "1") == 0;
    else
      v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  v7 = dyld3::MachOFile::archName(*this);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::SyscallDelegate::getGradedArchs(a2, v7, (dyld3::GradedArchs *)v6, 0);
}
