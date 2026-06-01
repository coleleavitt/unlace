__int64 __fastcall sub_1C30160(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rbx
  char v6; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v12; // rdi
  unsigned int v13; // eax

  v3 = a2 - a1;
  v4 = a1;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
  if ( v3 > 0 )
  {
    v6 = *(_BYTE *)(a3 + 12);
    do
    {
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = v5 >> 1;
          v9 = v4 + 24 * (v5 >> 1);
          if ( (int)sub_2205DB0(a3, v9) >= 0 )
          {
            v12 = v4 + 24 * (v5 >> 1);
            v13 = *(_BYTE *)(v9 + 12)
                ? (unsigned int)sub_2205DB0(v12, a3) >> 31
                : (unsigned int)sub_2205E20(v12, a3) >> 31;
            if ( (_BYTE)v13 || *(_QWORD *)(a3 + 16) >= *(_QWORD *)(v9 + 16) )
              break;
          }
          v5 >>= 1;
          if ( !v8 )
            return v4;
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = v5 >> 1;
          v9 = v4 + 24 * (v5 >> 1);
          if ( (int)sub_2205E20(a3, v9) >= 0 )
          {
            v10 = *(_BYTE *)(v9 + 12)
                ? (unsigned int)sub_2205DB0(v4 + 24 * (v5 >> 1), a3) >> 31
                : (unsigned int)sub_2205E20(v4 + 24 * (v5 >> 1), a3) >> 31;
            if ( (_BYTE)v10 || *(_QWORD *)(a3 + 16) >= *(_QWORD *)(v9 + 16) )
              break;
          }
          v5 >>= 1;
          if ( !v8 )
            return v4;
        }
      }
      v4 = v9 + 24;
      v5 = v5 - v8 - 1;
    }
    while ( v5 > 0 );
  }
  return v4;
}
