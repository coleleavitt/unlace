unsigned __int64 __fastcall sub_2257B10(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rsi

  if ( *(char *)(a1 + 15) < 0 )
    return ((unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) << 32) | a2 | 0x8000000000000000LL;
  if ( *(char *)(a1 + 11) < 0 )
    return ((unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) << 32) | a2 | 0x8000000000000000LL;
  result = a2;
  if ( *(char *)(a1 + 7) < 0 )
  {
    v3 = ((unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) << 32) | a2;
    return ((unsigned __int64)(HIBYTE(v3) | 0x80u) << 56) | v3 & 0xFFFFFFFFFFFFFFLL;
  }
  return result;
}
