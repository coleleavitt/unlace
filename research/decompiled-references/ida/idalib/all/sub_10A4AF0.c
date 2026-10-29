_QWORD *__fastcall sub_10A4AF0(_QWORD *a1)
{
  __m128i v1; // xmm2
  __m128i si128; // xmm3
  __m128i v3; // xmm4
  __m128i v4; // xmm5
  __m128i v5; // xmm6
  __int64 v6; // rdx
  __m128i v7; // xmm7
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  void *v12; // [rsp+8h] [rbp-B0h] BYREF
  __m128 v13; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v14; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v15[24]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v16; // [rsp+48h] [rbp-70h]
  __m128i v17; // [rsp+50h] [rbp-68h] BYREF
  __m128 v18; // [rsp+60h] [rbp-58h] BYREF
  __m128i v19; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v21; // [rsp+98h] [rbp-20h]
  __m128i v22; // [rsp+A0h] [rbp-18h] BYREF

  v12 = &unk_259E940;
  v14.m128i_i64[1] = (__int64)"__builtin_rvv_";
  v17.m128i_i64[0] = (__int64)"__builtin_rvv_";
  v13 = _mm_loadh_ps((const double *)&v12);
  v12 = &unk_259DCE0;
  v19.m128i_i64[1] = (__int64)"__builtin_rvv_";
  v14.m128i_i64[0] = 3267;
  *(_QWORD *)v15 = 14;
  *(__m128 *)&v15[8] = _mm_loadh_ps((const double *)&v12);
  v12 = &unk_259D3C0;
  v16 = 84;
  v17.m128i_i64[1] = 14;
  v19.m128i_i64[0] = 60;
  v18 = _mm_loadh_ps((const double *)&v12);
  v12 = &unk_259C5E0;
  *(_QWORD *)v20 = 14;
  v21 = 68;
  *(__m128 *)&v20[8] = _mm_loadh_ps((const double *)&v12);
  v22.m128i_i64[0] = (__int64)&byte_22F0C30;
  a1[1] = 0x100000000LL;
  *a1 = a1 + 2;
  v22.m128i_i64[1] = 0;
  sub_2237220(a1, a1 + 2, 4, 40);
  v1 = _mm_load_si128(&v14);
  si128 = _mm_load_si128((const __m128i *)v15);
  v3 = _mm_load_si128((const __m128i *)&v15[16]);
  v4 = _mm_load_si128(&v17);
  v5 = _mm_load_si128((const __m128i *)&v18);
  v6 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  v7 = _mm_load_si128(&v19);
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&v13);
  v9 = _mm_load_si128((const __m128i *)v20);
  *(__m128i *)(v6 + 16) = v1;
  v10 = _mm_load_si128((const __m128i *)&v20[16]);
  *(__m128i *)(v6 + 32) = si128;
  v11 = _mm_load_si128(&v22);
  *(__m128i *)(v6 + 48) = v3;
  *(__m128i *)(v6 + 64) = v4;
  *(__m128i *)(v6 + 80) = v5;
  *(__m128i *)(v6 + 96) = v7;
  *(__m128i *)(v6 + 112) = v9;
  *(__m128i *)(v6 + 128) = v10;
  *(__m128i *)(v6 + 144) = v11;
  *((_DWORD *)a1 + 2) += 4;
  return a1;
}
