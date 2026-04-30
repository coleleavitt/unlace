__int64 __fastcall refresh_watch_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 33 )
    return 4 * (unsigned int)(v2 != 32) + 2;
  result = 2;
  if ( !*(_BYTE *)(a1 + 12) )
    return 6;
  return result;
}
