__int64 __fastcall vdlog(int a1, char *a2)
{
  __int64 result; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( !__g )
    dyld_halt("logging not yet initialized");
  result = __getpid();
  if ( (int)result <= 1 )
  {
    if ( a1 < 0 )
    {
      a1 = dword_A81B4;
      if ( dword_A81B4 < 0 )
        a1 = _open_console();
    }
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return _simple_vdprintf(a1, a2);
  }
  return result;
}
