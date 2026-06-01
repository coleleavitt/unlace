__int64 __fastcall sub_17A13F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i si128; // xmm0
  __int64 v6; // rbx
  __int64 v7; // r12
  __m128i v8; // rax
  unsigned __int64 v9; // rsi
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  __m128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v13, a2);
  si128 = _mm_load_si128((const __m128i *)&v13);
  v8.m128i_i64[0] = v13.m128_u64[0];
  v6 = v15;
  v11 = si128;
  v7 = v16;
  v12 = v14;
  v8.m128i_i64[1] = si128.m128i_i64[1];
LABEL_2:
  if ( v6 == v8.m128i_i64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v8.m128i_i8[8] & 3) == 0 )
      {
        v9 = *(_QWORD *)v8.m128i_i64[0];
        if ( !*(_QWORD *)v8.m128i_i64[0] )
          goto LABEL_12;
LABEL_5:
        sub_17A0E80(a1, v9, *(double *)si128.m128i_i64, v8.m128i_i64[1], v2, v3, v4);
        goto LABEL_6;
      }
      v9 = *(_QWORD *)sub_EF2B30((__int64)&v11);
      if ( v9 )
        goto LABEL_5;
LABEL_6:
      v8.m128i_i64[1] = v11.m128i_i64[1];
      if ( (v11.m128i_i8[8] & 3) == 0 )
      {
        v8.m128i_i64[0] = v11.m128i_i64[0];
LABEL_12:
        v8.m128i_i64[0] += 8;
        v11.m128i_i64[0] = v8.m128i_i64[0];
        goto LABEL_2;
      }
      if ( (v11.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v11, 1);
        v8 = v11;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v11);
      v8 = v11;
    }
    while ( v6 != v11.m128i_i64[0] );
LABEL_9:
    ;
  }
  while ( v7 != v8.m128i_i64[1] );
  return v8.m128i_i64[0];
}
