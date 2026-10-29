_QWORD *__fastcall sub_10BACF0(_QWORD *a1)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm1
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  __m128i v5; // xmm4
  __m128i si128; // xmm5
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __int64 v9; // rdx
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  void *v16; // [rsp+8h] [rbp-B0h] BYREF
  __m128i v17; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v18; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-70h]
  __m128i v21; // [rsp+50h] [rbp-68h] BYREF
  __m128i v22; // [rsp+60h] [rbp-58h] BYREF
  __m128i v23; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v24[24]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v25; // [rsp+98h] [rbp-20h]
  __m128i v26; // [rsp+A0h] [rbp-18h] BYREF

  *a1 = a1 + 2;
  v16 = &unk_25E3820;
  v18.m128i_i64[1] = (__int64)&byte_22F0C30;
  v23.m128i_i64[1] = (__int64)&byte_22F0C30;
  v18.m128i_i64[0] = 42;
  v1 = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_25DA0C0;
  v21.m128i_i64[0] = (__int64)"__builtin_ia32_";
  v26.m128i_i64[0] = (__int64)"__builtin_ia32_";
  v2 = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_25D9020;
  *(__m128 *)&v19[8] = v2;
  a1[1] = 0x100000000LL;
  v3 = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_25D81C0;
  v17 = (__m128i)v1;
  *(_QWORD *)v19 = 0;
  v4 = _mm_loadh_ps((const double *)&v16);
  v22 = (__m128i)v3;
  v20 = 1937;
  v21.m128i_i64[1] = 15;
  v23.m128i_i64[0] = 10;
  *(_QWORD *)v24 = 0;
  *(__m128 *)&v24[8] = v4;
  v25 = 183;
  v26.m128i_i64[1] = 15;
  sub_2237220(a1, a1 + 2, 4, 40);
  v5 = _mm_load_si128(&v18);
  si128 = _mm_load_si128((const __m128i *)v19);
  v7 = _mm_load_si128((const __m128i *)&v19[16]);
  v8 = _mm_load_si128(&v21);
  v9 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  *(__m128i *)v9 = _mm_load_si128(&v17);
  v11 = _mm_load_si128(&v22);
  *(__m128i *)(v9 + 16) = v5;
  v12 = _mm_load_si128(&v23);
  *(__m128i *)(v9 + 32) = si128;
  v13 = _mm_load_si128((const __m128i *)v24);
  *(__m128i *)(v9 + 48) = v7;
  v14 = _mm_load_si128((const __m128i *)&v24[16]);
  *(__m128i *)(v9 + 64) = v8;
  v15 = _mm_load_si128(&v26);
  *(__m128i *)(v9 + 80) = v11;
  *(__m128i *)(v9 + 96) = v12;
  *(__m128i *)(v9 + 112) = v13;
  *(__m128i *)(v9 + 128) = v14;
  *(__m128i *)(v9 + 144) = v15;
  *((_DWORD *)a1 + 2) += 4;
  return a1;
}
