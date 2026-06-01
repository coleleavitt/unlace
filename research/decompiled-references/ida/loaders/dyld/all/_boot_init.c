char ***__fastcall boot_init(char **a1)
{
  __int64 i; // x9
  unsigned __int64 v2; // x12

  for ( i = 0; i != 9; ++i )
  {
    v2 = (unsigned __int64)__roots[i][2];
    if ( (v2 & 0x8000000000000000LL) != 0 )
      dyld_halt("invalid offset: %lld", __roots[i][2]);
    *(_DWORD *)((char *)__boot + v2) = -1;
  }
  __boot[0] = a1;
  return __boot;
}
