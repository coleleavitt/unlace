__int64 __fastcall sub_186F790(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r12
  __m128i v7; // rax
  unsigned __int64 v8; // rsi
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v12, a2);
  v7.m128i_i64[0] = v12.m128_u64[0];
  v5 = v14;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v6 = v15;
  v11 = v13;
  v7.m128i_i64[1] = si128.m128i_i64[1];
LABEL_2:
  if ( v5 == v7.m128i_i64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v7.m128i_i8[8] & 3) == 0 )
      {
        v8 = *(_QWORD *)v7.m128i_i64[0];
        if ( !*(_QWORD *)v7.m128i_i64[0] )
          goto LABEL_12;
LABEL_5:
        sub_186F230(a1, v8, v7.m128i_i64[1], v2, v3, v4);
        goto LABEL_6;
      }
      v8 = *(_QWORD *)sub_EF2B30((__int64)&si128);
      if ( v8 )
        goto LABEL_5;
LABEL_6:
      v7.m128i_i64[1] = si128.m128i_i64[1];
      if ( (si128.m128i_i8[8] & 3) == 0 )
      {
        v7.m128i_i64[0] = si128.m128i_i64[0];
LABEL_12:
        v7.m128i_i64[0] += 8;
        si128.m128i_i64[0] = v7.m128i_i64[0];
        goto LABEL_2;
      }
      if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&si128, 1);
        v7 = si128;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&si128);
      v7 = si128;
    }
    while ( v5 != si128.m128i_i64[0] );
LABEL_9:
    ;
  }
  while ( v6 != v7.m128i_i64[1] );
  return v7.m128i_i64[0];
}
