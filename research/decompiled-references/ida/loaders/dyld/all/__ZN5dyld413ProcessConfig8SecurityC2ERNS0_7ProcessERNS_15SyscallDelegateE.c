dyld4::ProcessConfig::Security *__fastcall dyld4::ProcessConfig::Security::Security(
        dyld4::ProcessConfig::Security *this,
        dyld4::ProcessConfig::Process *a2,
        dyld4::SyscallDelegate *a3)
{
  int v6; // w0
  bool v7; // w8
  const char *v8; // x0
  dyld4::ProcessConfig::Security *AMFI; // x0
  unsigned int v10; // w11

  v6 = dyld4::SyscallDelegate::internalInstall(a3);
  *(_BYTE *)this = v6;
  if ( v6 )
    v7 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_SKIP_MAIN") != 0;
  else
    v7 = 0;
  *((_BYTE *)this + 9) = v7;
  if ( *((_DWORD *)a2 + 36) == 1 )
  {
    if ( *(_BYTE *)this )
    {
      v8 = (const char *)_simple_getenv(*((_QWORD *)a2 + 14), "dyld_flags");
      if ( v8 )
        *((_DWORD *)a2 + 32) = hexToUInt64(v8, nullptr);
    }
  }
  AMFI = (dyld4::ProcessConfig::Security *)dyld4::ProcessConfig::Security::getAMFI(this, a2, a3);
  *((_BYTE *)this + 1) = (unsigned __int8)AMFI & 1;
  *((_BYTE *)this + 2) = ((unsigned __int8)AMFI & 0x10) != 0;
  *((_BYTE *)this + 3) = ((unsigned __int8)AMFI & 2) != 0;
  *((_BYTE *)this + 4) = ((unsigned __int8)AMFI & 4) != 0;
  *((_BYTE *)this + 5) = ((unsigned __int8)AMFI & 8) != 0;
  *((_BYTE *)this + 6) = ((unsigned __int8)AMFI & 0x20) != 0;
  *((_BYTE *)this + 7) = ((unsigned __int8)AMFI & 0x40) != 0;
  *((_BYTE *)this + 8) = ((unsigned __int8)AMFI & 0x80) != 0;
  v10 = *((_DWORD *)a2 + 15);
  if ( v10 <= 0xA
    && ((1 << v10) & 0x442) != 0
    && (((unsigned __int8)AMFI >> 4) & 1) == 0
    && (((unsigned __int8)AMFI >> 1) & 1) == 0
    && (((unsigned __int8)AMFI >> 2) & 1) == 0 )
  {
    dyld4::ProcessConfig::Security::pruneEnvVars(AMFI, a2);
  }
  return this;
}
