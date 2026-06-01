__int64 __fastcall sub_2198DE0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi

  v2 = sub_2198C60(a1, a2);
  if ( *(_DWORD *)(a1 + 52) == (_DWORD)&loc_1000007 || (v2 & 0x80000000) == 0LL )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v6 = HIDWORD(v2);
    if ( (unsigned int)v5 > 0x14 )
      return (unsigned int)v6 >> 28;
    v7 = 1398784;
    v3 = v6 & 0xF;
    if ( !_bittest64(&v7, v5) )
      return (unsigned int)v6 >> 28;
  }
  else
  {
    return BYTE3(v2) & 0xF;
  }
  return v3;
}
