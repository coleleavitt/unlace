_QWORD *__fastcall sub_1061020(_QWORD *a1)
{
  __m128i v1; // xmm2
  __m128i si128; // xmm3
  __m128i v3; // xmm4
  __m128i v4; // xmm5
  __m128i v5; // xmm6
  __int64 v6; // rax
  __m128i v7; // xmm7
  __int64 v8; // rdx
  void *v10; // [rsp+8h] [rbp-90h] BYREF
  __m128 v11; // [rsp+10h] [rbp-88h] BYREF
  __m128i v12; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+48h] [rbp-50h]
  __m128i v15; // [rsp+50h] [rbp-48h] BYREF
  __m128 v16; // [rsp+60h] [rbp-38h] BYREF
  __m128i v17; // [rsp+70h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp-18h]

  *a1 = a1 + 2;
  v10 = &unk_2559780;
  v12.m128i_i64[1] = (__int64)&byte_22CD811;
  v15.m128i_i64[0] = (__int64)&byte_22CD811;
  v11 = _mm_loadh_ps((const double *)&v10);
  v10 = &unk_2555F40;
  v17.m128i_i64[1] = (__int64)&byte_22CD811;
  a1[1] = 0x100000000LL;
  v12.m128i_i64[0] = 39;
  *(__m128 *)&v13[8] = _mm_loadh_ps((const double *)&v10);
  v10 = &unk_25416E0;
  *(_QWORD *)v13 = 0;
  v14 = 720;
  v15.m128i_i64[1] = 0;
  v16 = _mm_loadh_ps((const double *)&v10);
  v17.m128i_i64[0] = 740;
  v18 = 0;
  sub_22134E0(a1, a1 + 2, 3, 40);
  v1 = _mm_load_si128(&v12);
  si128 = _mm_load_si128((const __m128i *)v13);
  v3 = _mm_load_si128((const __m128i *)&v13[16]);
  v4 = _mm_load_si128(&v15);
  v5 = _mm_load_si128((const __m128i *)&v16);
  v6 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  v7 = _mm_load_si128(&v17);
  v8 = v18;
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&v11);
  *(__m128i *)(v6 + 16) = v1;
  *(__m128i *)(v6 + 32) = si128;
  *(__m128i *)(v6 + 48) = v3;
  *(__m128i *)(v6 + 64) = v4;
  *(__m128i *)(v6 + 80) = v5;
  *(__m128i *)(v6 + 96) = v7;
  *(_QWORD *)(v6 + 112) = v8;
  *((_DWORD *)a1 + 2) += 3;
  return a1;
}

