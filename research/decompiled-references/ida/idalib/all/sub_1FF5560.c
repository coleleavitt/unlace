__int64 __fastcall sub_1FF5560(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // r13
  __m128i v5; // rax
  __m128i *v6; // rsi
  __m128i *v7; // rsi
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10[4]; // [rsp+10h] [rbp-48h] BYREF

  v1 = sub_2245450(a1 + 104);
  v3 = v2;
  v4 = v1;
  v5.m128i_i64[0] = sub_2245450(a1 + 104);
  v9.m128i_i64[0] = v4;
  v6 = *(__m128i **)(a1 + 144);
  v9.m128i_i64[1] = v3;
  v10[0] = v5;
  if ( v6 == *(__m128i **)(a1 + 152) )
    return sub_9C4BB0(a1 + 136, v6, &v9);
  v6->m128i_i64[0] = v4;
  v7 = v6 + 2;
  v7[-2].m128i_i64[1] = v3;
  v7[-1] = _mm_load_si128(v10);
  *(_QWORD *)(a1 + 144) = v7;
  return v5.m128i_i64[0];
}
