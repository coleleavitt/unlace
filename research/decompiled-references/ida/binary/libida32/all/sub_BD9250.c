__int64 __fastcall sub_BD9250(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int128 v3; // rax
  __int64 v4; // rsi
  __int128 v6; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v7; // [rsp+108h] [rbp-40h] BYREF

  sub_EC6110(&v6, a2);
  v2 = _mm_loadu_si128(&v7);
  v3 = v6;
LABEL_2:
  if ( v2.m128i_i64[0] == (_QWORD)v3 )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (BYTE8(v3) & 3) == 0 )
      {
        v4 = *(_QWORD *)v3;
        if ( !*(_QWORD *)v3 )
          goto LABEL_12;
LABEL_5:
        sub_BD81C0(a1, v4);
        goto LABEL_6;
      }
      v4 = *(_QWORD *)sub_ECEDF0(&v6);
      if ( v4 )
        goto LABEL_5;
LABEL_6:
      *((_QWORD *)&v3 + 1) = *((_QWORD *)&v6 + 1);
      if ( (BYTE8(v6) & 3) == 0 )
      {
        *(_QWORD *)&v3 = v6;
LABEL_12:
        *(_QWORD *)&v3 = v3 + 8;
        *(_QWORD *)&v6 = v3;
        goto LABEL_2;
      }
      if ( (*((_QWORD *)&v6 + 1) & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_ECEA10(&v6, 1);
        v3 = v6;
        goto LABEL_2;
      }
      sub_ECEC20(&v6);
      v3 = v6;
    }
    while ( v2.m128i_i64[0] != (_QWORD)v6 );
LABEL_9:
    ;
  }
  while ( v2.m128i_i64[1] != *((_QWORD *)&v3 + 1) );
  return v3;
}

