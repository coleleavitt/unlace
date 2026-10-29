__int64 __fastcall sub_12535E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int8 v5; // al
  __m128i v6; // rax
  __m128i v7; // xmm0
  __int64 result; // rax
  __m128i v9[2]; // [rsp+8h] [rbp-70h] BYREF
  __m128i v10; // [rsp+30h] [rbp-48h] BYREF
  __m128 v11; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 384);
  v2 = *(_QWORD *)(a1 + 256);
  v3 = **(char **)(a1 + 272);
  v4 = std::use_facet<std::ctype<char>>(v1);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, v3);
  v10.m128i_i64[0] = v1;
  v10.m128i_i8[8] = v5;
  v11 = _mm_loadh_ps((const double *)off_2C77FA8);
  v6.m128i_i64[0] = sub_1252B20(v2, &v10);
  v6.m128i_i64[1] = *(_QWORD *)(a1 + 256);
  v9[0] = v6;
  v7 = _mm_loadl_epi64(v9);
  v9[1] = _mm_unpacklo_epi64(v7, v7);
  sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v9[0].m128i_u64[1]);
  result = v11.m128_u64[0];
  if ( v11.m128_u64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128_u64[0])(&v10, &v10, 3);
  return result;
}
