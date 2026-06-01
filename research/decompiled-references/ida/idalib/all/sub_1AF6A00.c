__int64 __fastcall sub_1AF6A00(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r12
  __m128i v7; // rax
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __m128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]

  sub_EE9E50(&v11, a2);
  v7.m128i_i64[0] = v11.m128_u64[0];
  v5 = v13;
  si128 = _mm_load_si128((const __m128i *)&v11);
  v6 = v14;
  v10 = v12;
  v7.m128i_i64[1] = si128.m128i_i64[1];
LABEL_2:
  if ( v5 == v7.m128i_i64[0] )
    goto LABEL_7;
  do
  {
    do
    {
      v7.m128i_i64[1] = v7.m128i_i8[8] & 3;
      if ( v7.m128i_i32[2] )
        v7.m128i_i64[0] = sub_EF2B30((__int64)&si128);
      sub_1AF6950(a1, *(_QWORD *)v7.m128i_i64[0], v7.m128i_i64[1], v2, v3, v4);
      v7.m128i_i64[1] = si128.m128i_i64[1];
      if ( (si128.m128i_i8[8] & 3) != 0 )
      {
        if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&si128);
        else
          sub_EF2750((unsigned __int64 *)&si128, 1);
        v7 = si128;
        goto LABEL_2;
      }
      v7.m128i_i64[0] = si128.m128i_i64[0] + 8;
      si128.m128i_i64[0] = v7.m128i_i64[0];
    }
    while ( v5 != v7.m128i_i64[0] );
LABEL_7:
    ;
  }
  while ( v6 != v7.m128i_i64[1] );
  return v7.m128i_i64[0];
}
