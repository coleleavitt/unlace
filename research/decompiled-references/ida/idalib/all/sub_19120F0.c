unsigned __int64 __fastcall sub_19120F0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128 si128; // xmm0
  __int64 v8; // rbx
  __int64 v9; // r12
  __m128 v10; // rax
  __int64 v11; // rsi
  __m128 v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __m128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v15, a2);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v15);
  v10.m128_u64[0] = v15.m128_u64[0];
  v8 = v17;
  v13 = si128;
  v9 = v18;
  v14 = v16;
  v10.m128_u64[1] = si128.m128_u64[1];
LABEL_2:
  if ( v8 == v10.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v10.m128_i8[8] & 3) == 0 )
      {
        v11 = *(_QWORD *)v10.m128_u64[0];
        if ( !*(_QWORD *)v10.m128_u64[0] )
          goto LABEL_12;
LABEL_5:
        sub_1911C50(a1, v11, v10.m128_i64[1], v4, v5, v6, si128, a4);
        goto LABEL_6;
      }
      v11 = *(_QWORD *)sub_EF2B30((__int64)&v13);
      if ( v11 )
        goto LABEL_5;
LABEL_6:
      v10.m128_u64[1] = v13.m128_u64[1];
      if ( (v13.m128_i8[8] & 3) == 0 )
      {
        v10.m128_u64[0] = v13.m128_u64[0];
LABEL_12:
        v10.m128_u64[0] += 8LL;
        v13.m128_u64[0] = v10.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v13.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v13, 1);
        v10 = v13;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v13);
      v10 = v13;
    }
    while ( v8 != v13.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v9 != v10.m128_u64[1] );
  return v10.m128_u64[0];
}
