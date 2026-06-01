__int64 __fastcall sub_160DC40(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __m128i si128; // xmm0
  __int64 v4; // rbx
  __int64 v5; // r12
  __m128i v6; // rax
  __int64 v7; // rsi
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __m128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v11, a2);
  si128 = _mm_load_si128((const __m128i *)&v11);
  v6.m128i_i64[0] = v11.m128_u64[0];
  v4 = v13;
  v9 = si128;
  v5 = v14;
  v10 = v12;
  v6.m128i_i64[1] = si128.m128i_i64[1];
LABEL_2:
  if ( v4 == v6.m128i_i64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v6.m128i_i8[8] & 3) == 0 )
      {
        v7 = *(_QWORD *)v6.m128i_i64[0];
        if ( !*(_QWORD *)v6.m128i_i64[0] )
          goto LABEL_12;
LABEL_5:
        sub_160D770(a1, v7, *(double *)si128.m128i_i64, v6.m128i_i64[1], v2);
        goto LABEL_6;
      }
      v7 = *(_QWORD *)sub_EF2B30((__int64)&v9);
      if ( v7 )
        goto LABEL_5;
LABEL_6:
      v6.m128i_i64[1] = v9.m128i_i64[1];
      if ( (v9.m128i_i8[8] & 3) == 0 )
      {
        v6.m128i_i64[0] = v9.m128i_i64[0];
LABEL_12:
        v6.m128i_i64[0] += 8;
        v9.m128i_i64[0] = v6.m128i_i64[0];
        goto LABEL_2;
      }
      if ( (v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v9, 1);
        v6 = v9;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v9);
      v6 = v9;
    }
    while ( v4 != v9.m128i_i64[0] );
LABEL_9:
    ;
  }
  while ( v5 != v6.m128i_i64[1] );
  return v6.m128i_i64[0];
}
