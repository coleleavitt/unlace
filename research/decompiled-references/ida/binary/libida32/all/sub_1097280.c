_QWORD *__fastcall sub_1097280(_QWORD *a1)
{
  __m128 v1; // xmm1
  __m128 v2; // xmm0
  __m128i v3; // xmm3
  __m128i si128; // xmm4
  __m128i v5; // xmm5
  __m128i v6; // xmm6
  __int64 v7; // rax
  void *v9; // [rsp+8h] [rbp-60h] BYREF
  __m128i v10; // [rsp+10h] [rbp-58h] BYREF
  __m128i v11; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  __m128i v14; // [rsp+50h] [rbp-18h] BYREF

  *a1 = a1 + 2;
  v9 = &unk_25BF6C0;
  v11.m128i_i64[1] = (__int64)&byte_22CD811;
  v11.m128i_i64[0] = 42;
  *(_QWORD *)v12 = 0;
  v1 = _mm_loadh_ps((const double *)&v9);
  v9 = &unk_25B5F60;
  v14.m128i_i64[0] = (__int64)"__builtin_ia32_";
  a1[1] = 0x100000000LL;
  v2 = _mm_loadh_ps((const double *)&v9);
  v10 = (__m128i)v1;
  *(__m128 *)&v12[8] = v2;
  v13 = 1937;
  v14.m128i_i64[1] = 15;
  sub_22134E0(a1, a1 + 2, 2, 40);
  v3 = _mm_load_si128(&v11);
  si128 = _mm_load_si128((const __m128i *)v12);
  v5 = _mm_load_si128((const __m128i *)&v12[16]);
  v6 = _mm_load_si128(&v14);
  v7 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  *(__m128i *)v7 = _mm_load_si128(&v10);
  *(__m128i *)(v7 + 16) = v3;
  *(__m128i *)(v7 + 32) = si128;
  *(__m128i *)(v7 + 48) = v5;
  *(__m128i *)(v7 + 64) = v6;
  *((_DWORD *)a1 + 2) += 2;
  return a1;
}

