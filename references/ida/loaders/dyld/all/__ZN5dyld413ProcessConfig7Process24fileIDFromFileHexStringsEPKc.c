__int64 __fastcall dyld4::ProcessConfig::Process::fileIDFromFileHexStrings(
        dyld4::ProcessConfig::Process *this,
        const char *a2)
{
  __int64 v2; // x0
  __int64 v3; // x19
  char *v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = nullptr;
  v2 = hexToUInt64(a2, (const char **)&v5);
  if ( !v5 )
    return 0;
  v3 = v2;
  hexToUInt64(v5 + 1, (const char **)&v5);
  if ( v5 )
    return v3;
  else
    return 0;
}
