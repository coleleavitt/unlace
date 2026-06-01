unsigned __int64 __fastcall sub_864820(_BYTE *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int16 v5; // r14

  v3 = *(_QWORD *)(a3 + 216);
  v4 = v3 + 16LL * *(unsigned __int16 *)(a3 + 208);
  v5 = *a1 & 0x7F | ((unsigned __int8)a1[a2 - 1] << 7);
  if ( v3 >= v4 )
    return 0;
  while ( *(unsigned __int16 *)(v3 + 12) != a2
       || (*(_WORD *)(v3 + 14) & 0x7FFF) != v5
       || (unsigned int)sub_89AB60(a1, *(_QWORD *)v3, a2) )
  {
    v3 += 16LL;
    if ( v3 >= v4 )
      return 0;
  }
  return v3;
}
