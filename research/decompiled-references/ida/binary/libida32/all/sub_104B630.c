_QWORD *__fastcall sub_104B630(_QWORD *a1)
{
  __m128 v1; // xmm0
  __m128i v2; // xmm2
  __m128i si128; // xmm3
  __m128i v4; // xmm4
  __m128i v5; // xmm5
  __m128i v6; // xmm6
  __int64 v7; // rdx
  __m128i v8; // xmm7
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  void *v16; // [rsp+8h] [rbp-E0h] BYREF
  __m128 v17; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v18; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h]
  __m128i v21; // [rsp+50h] [rbp-98h] BYREF
  __m128 v22; // [rsp+60h] [rbp-88h] BYREF
  __m128i v23; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v24[24]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v25; // [rsp+98h] [rbp-50h]
  __m128i v26; // [rsp+A0h] [rbp-48h] BYREF
  __m128i v27; // [rsp+B0h] [rbp-38h] BYREF
  __m128i v28; // [rsp+C0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-18h]

  v16 = &unk_25264C0;
  v18.m128i_i64[1] = (__int64)"__builtin_neon_";
  v21.m128i_i64[0] = (__int64)"__builtin_neon_";
  v18.m128i_i64[0] = 1110;
  v17 = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_25258A0;
  *(_QWORD *)v19 = 15;
  v20 = 89;
  v21.m128i_i64[1] = 15;
  *(__m128 *)&v19[8] = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_250CBE0;
  v23.m128i_i64[1] = (__int64)"__builtin_arm_mve_";
  v23.m128i_i64[0] = 2968;
  v22 = _mm_loadh_ps((const double *)&v16);
  v16 = &unk_250B740;
  *(_QWORD *)v24 = 18;
  v25 = 156;
  *(__m128 *)&v24[8] = _mm_loadh_ps((const double *)&v16);
  v26.m128i_i64[0] = (__int64)"__builtin_arm_cde_";
  v16 = &unk_2508160;
  v28.m128i_i64[1] = (__int64)&byte_22CD811;
  a1[1] = 0x100000000LL;
  *a1 = a1 + 2;
  v1 = _mm_loadh_ps((const double *)&v16);
  v26.m128i_i64[1] = 18;
  v27 = (__m128i)v1;
  v28.m128i_i64[0] = 260;
  v29 = 0;
  sub_22134E0(a1, a1 + 2, 5, 40);
  v2 = _mm_load_si128(&v18);
  si128 = _mm_load_si128((const __m128i *)v19);
  v4 = _mm_load_si128((const __m128i *)&v19[16]);
  v5 = _mm_load_si128(&v21);
  v6 = _mm_load_si128((const __m128i *)&v22);
  v7 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  v8 = _mm_load_si128(&v23);
  v9 = v29;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&v17);
  v10 = _mm_load_si128((const __m128i *)v24);
  *(__m128i *)(v7 + 16) = v2;
  v11 = _mm_load_si128((const __m128i *)&v24[16]);
  *(__m128i *)(v7 + 32) = si128;
  v12 = _mm_load_si128(&v26);
  *(__m128i *)(v7 + 48) = v4;
  v13 = _mm_load_si128(&v27);
  *(__m128i *)(v7 + 64) = v5;
  v14 = _mm_load_si128(&v28);
  *(_QWORD *)(v7 + 192) = v9;
  *(__m128i *)(v7 + 80) = v6;
  *(__m128i *)(v7 + 96) = v8;
  *(__m128i *)(v7 + 112) = v10;
  *(__m128i *)(v7 + 128) = v11;
  *(__m128i *)(v7 + 144) = v12;
  *(__m128i *)(v7 + 160) = v13;
  *(__m128i *)(v7 + 176) = v14;
  *((_DWORD *)a1 + 2) += 5;
  return a1;
}

