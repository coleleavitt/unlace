__int64 __fastcall sub_C03200(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __m128i v4; // xmm1
  __int128 v5; // rax
  unsigned __int64 v6; // rsi
  __int128 v8; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+108h] [rbp-40h] BYREF

  sub_EE9E50(&v8, a2);
  v4 = _mm_loadu_si128(&v9);
  v5 = v8;
LABEL_2:
  if ( v4.m128i_i64[0] == (_QWORD)v5 )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (BYTE8(v5) & 3) == 0 )
      {
        v6 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
          goto LABEL_12;
LABEL_5:
        sub_C01810(a1, v6, *((__int64 *)&v5 + 1), v2, v3);
        goto LABEL_6;
      }
      v6 = *(_QWORD *)sub_EF2B30(&v8);
      if ( v6 )
        goto LABEL_5;
LABEL_6:
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&v8 + 1);
      if ( (BYTE8(v8) & 3) == 0 )
      {
        *(_QWORD *)&v5 = v8;
LABEL_12:
        *(_QWORD *)&v5 = v5 + 8;
        *(_QWORD *)&v8 = v5;
        goto LABEL_2;
      }
      if ( (*((_QWORD *)&v8 + 1) & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750(&v8, 1);
        v5 = v8;
        goto LABEL_2;
      }
      sub_EF2960(&v8);
      v5 = v8;
    }
    while ( v4.m128i_i64[0] != (_QWORD)v8 );
LABEL_9:
    ;
  }
  while ( v4.m128i_i64[1] != *((_QWORD *)&v5 + 1) );
  return v5;
}
