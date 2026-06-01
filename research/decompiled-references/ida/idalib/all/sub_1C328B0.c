__int64 __fastcall sub_1C328B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __m128i v4; // rax
  __int64 v5; // rsi
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  __m128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v9, a2);
  v4.m128i_i64[0] = v9.m128_u64[0];
  v2 = v11;
  si128 = _mm_load_si128((const __m128i *)&v9);
  v3 = v12;
  v8 = v10;
  v4.m128i_i64[1] = si128.m128i_i64[1];
LABEL_2:
  if ( v2 == v4.m128i_i64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v4.m128i_i8[8] & 3) == 0 )
      {
        v5 = *(_QWORD *)v4.m128i_i64[0];
        if ( !*(_QWORD *)v4.m128i_i64[0] )
          goto LABEL_12;
LABEL_5:
        sub_1C31860(a1, v5);
        goto LABEL_6;
      }
      v5 = *(_QWORD *)sub_EF2B30((__int64)&si128);
      if ( v5 )
        goto LABEL_5;
LABEL_6:
      v4.m128i_i64[1] = si128.m128i_i64[1];
      if ( (si128.m128i_i8[8] & 3) == 0 )
      {
        v4.m128i_i64[0] = si128.m128i_i64[0];
LABEL_12:
        v4.m128i_i64[0] += 8;
        si128.m128i_i64[0] = v4.m128i_i64[0];
        goto LABEL_2;
      }
      if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&si128, 1);
        v4 = si128;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&si128);
      v4 = si128;
    }
    while ( v2 != si128.m128i_i64[0] );
LABEL_9:
    ;
  }
  while ( v3 != v4.m128i_i64[1] );
  return v4.m128i_i64[0];
}
