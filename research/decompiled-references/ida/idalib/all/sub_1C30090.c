__int64 __fastcall sub_1C30090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax

  v3 = a2 - a1;
  v4 = a1;
  v6 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
  if ( v3 <= 0 )
    return v4;
  do
  {
    while ( 1 )
    {
      v7 = v6 >> 1;
      v8 = v4 + 24 * (v6 >> 1);
      v9 = *(_BYTE *)(v8 + 12) ? (unsigned int)sub_2205DB0(v8, a3) >> 31 : (unsigned int)sub_2205E20(v8, a3) >> 31;
      if ( !(_BYTE)v9 )
      {
        v10 = v4 + 24 * (v6 >> 1);
        v11 = *(_BYTE *)(a3 + 12) ? (unsigned int)sub_2205DB0(a3, v10) >> 31 : (unsigned int)sub_2205E20(a3, v10) >> 31;
        if ( (_BYTE)v11 || *(_QWORD *)(v8 + 16) >= *(_QWORD *)(a3 + 16) )
          break;
      }
      v4 = v8 + 24;
      v6 = v6 - v7 - 1;
      if ( v6 <= 0 )
        return v4;
    }
    v6 >>= 1;
  }
  while ( v7 );
  return v4;
}
