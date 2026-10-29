unsigned __int64 __fastcall sub_840EA0(_BYTE *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int16 v6; // r14

  v4 = *(_QWORD *)(a3 + 216);
  v5 = v4 + 16LL * *(unsigned __int16 *)(a3 + 208);
  v6 = *a1 & 0x7F | ((unsigned __int8)a1[a2 - 1] << 7);
  if ( v4 >= v5 )
    return 0;
  while ( *(unsigned __int16 *)(v4 + 12) != a2
       || (*(_WORD *)(v4 + 14) & 0x7FFF) != v6
       || (unsigned int)sub_8771E0(a1, *(_QWORD *)v4, a2, a4) )
  {
    v4 += 16LL;
    if ( v4 >= v5 )
      return 0;
  }
  return v4;
}

