void __fastcall sub_1648A0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int32 v4; // edx
  __int32 v5; // eax
  __int64 *v6; // rsi
  const __m128i *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0

  v4 = *(_DWORD *)(a2 + 24);
  v5 = a1[51].m128i_i32[0];
  v6 = (__int64 *)(a2 + 32);
  v7 = a1 + 10;
  v7[41].m128i_i32[0] = v4;
  v8 = *(v6 - 4);
  *((_DWORD *)v6 - 2) = v5;
  v9 = v7[39].m128i_i64[1];
  v7[39].m128i_i64[1] = v8;
  v10 = _mm_loadu_si128(v7 + 40);
  v7[40].m128i_i64[0] = *(v6 - 3);
  v7[40].m128i_i64[1] = *(v6 - 2);
  *(v6 - 4) = v9;
  *(__m128i *)(v6 - 3) = v10;
  v2 = v7[1].m128i_i64[1];
  v3 = _mm_loadu_si128(v7 + 2);
  v7[1].m128i_i64[1] = *v6;
  v7[2].m128i_i64[0] = v6[1];
  v7[2].m128i_i64[1] = v6[2];
  *v6 = v2;
  *(__m128i *)(v6 + 1) = v3;
  if ( v7[3].m128i_i64[0] )
    nullsub_39();
  else
    nullsub_129();
}

