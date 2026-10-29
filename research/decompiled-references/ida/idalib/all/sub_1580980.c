__int64 __fastcall sub_1580980(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // r8
  __m128i v4; // xmm1
  __m128 v5; // rax
  _WORD *v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // [rsp+0h] [rbp-148h]
  __int64 v13; // [rsp+10h] [rbp-138h]
  __m128 v14; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v15; // [rsp+108h] [rbp-40h] BYREF
  __int64 v16; // [rsp+118h] [rbp-30h]

  v1 = a1;
  sub_EE9E50(&v14, a1);
  v4 = _mm_loadu_si128(&v15);
  v12 = v4;
  v13 = v16;
  v5 = v14;
LABEL_2:
  if ( v4.m128i_i64[0] == v5.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v5.m128_i8[8] & 3) != 0 )
      {
        v6 = *(_WORD **)sub_EF2B30((__int64)&v14);
        if ( !v6 )
          goto LABEL_6;
      }
      else
      {
        v6 = *(_WORD **)v5.m128_u64[0];
        if ( !*(_QWORD *)v5.m128_u64[0] )
          goto LABEL_12;
      }
      if ( ((*v6 + 509) & 0x1FFu) <= 0x7E
        && ((int)sub_C00A40((unsigned __int64)v6, v1, v5.m128_i64[1], v2, v3) < 0
         || (unsigned __int8)sub_1580980(v6, v1, v8, v9, v10, v11, v12.m128i_i64[0], v12.m128i_i64[1], v13)) )
      {
        return 1;
      }
LABEL_6:
      v5.m128_u64[1] = v14.m128_u64[1];
      if ( (v14.m128_i8[8] & 3) == 0 )
      {
        v5.m128_u64[0] = v14.m128_u64[0];
LABEL_12:
        v5.m128_u64[0] += 8LL;
        v14.m128_u64[0] = v5.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v14.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v1 = 1;
        sub_EF2750((unsigned __int64 *)&v14, 1);
        v5 = v14;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v14);
      v5 = v14;
    }
    while ( v4.m128i_i64[0] != v14.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v4.m128i_i64[1] != v5.m128_u64[1] );
  return 0;
}
