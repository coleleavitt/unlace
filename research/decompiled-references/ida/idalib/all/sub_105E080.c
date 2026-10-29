_QWORD *__fastcall sub_105E080(_QWORD *a1)
{
  __m128 v1; // xmm0
  __m128i v2; // xmm2
  __m128i si128; // xmm3
  __m128i v4; // xmm4
  __m128i v5; // xmm5
  __m128i v6; // xmm6
  __int64 v7; // rdx
  __m128i v8; // xmm7
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i v15; // xmm6
  __m128i v16; // xmm7
  __m128i v17; // xmm1
  void *v18; // [rsp+8h] [rbp-100h] BYREF
  __m128 v19; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v20; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h]
  __m128i v23; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v24; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  __m128i v28; // [rsp+A0h] [rbp-68h] BYREF
  __m128 v29; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v30; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v31[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-20h]
  __m128i v33; // [rsp+F0h] [rbp-18h] BYREF

  v18 = &unk_2518940;
  v20.m128i_i64[1] = (__int64)"__builtin_neon_";
  v23.m128i_i64[0] = (__int64)"__builtin_neon_";
  v20.m128i_i64[0] = 1110;
  v19 = _mm_loadh_ps((const double *)&v18);
  v18 = &unk_2517D20;
  *(_QWORD *)v21 = 15;
  v22 = 89;
  v23.m128i_i64[1] = 15;
  *(__m128 *)&v21[8] = _mm_loadh_ps((const double *)&v18);
  v18 = &unk_24C8C40;
  v25.m128i_i64[1] = (__int64)"__builtin_sve_";
  v25.m128i_i64[0] = 8090;
  v24 = _mm_loadh_ps((const double *)&v18);
  v18 = &unk_24B9520;
  *(_QWORD *)v26 = 14;
  v27 = 36;
  *(__m128 *)&v26[8] = _mm_loadh_ps((const double *)&v18);
  v28.m128i_i64[0] = (__int64)&byte_22F0C30;
  v18 = &unk_24BBD00;
  v33.m128i_i64[0] = (__int64)&byte_22F0C30;
  a1[1] = 0x100000000LL;
  v29 = _mm_loadh_ps((const double *)&v18);
  v18 = &unk_24B82A0;
  *a1 = a1 + 2;
  v30.m128i_i64[1] = (__int64)"__builtin_sme_";
  v1 = _mm_loadh_ps((const double *)&v18);
  v28.m128i_i64[1] = 0;
  v30.m128i_i64[0] = 1087;
  *(_QWORD *)v31 = 14;
  *(__m128 *)&v31[8] = v1;
  v32 = 236;
  v33.m128i_i64[1] = 0;
  sub_2237220(a1, a1 + 2, 6, 40);
  v2 = _mm_load_si128(&v20);
  si128 = _mm_load_si128((const __m128i *)v21);
  v4 = _mm_load_si128((const __m128i *)&v21[16]);
  v5 = _mm_load_si128(&v23);
  v6 = _mm_load_si128((const __m128i *)&v24);
  v7 = *a1 + 40LL * *((unsigned int *)a1 + 2);
  v8 = _mm_load_si128(&v25);
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&v19);
  v10 = _mm_load_si128((const __m128i *)v26);
  *(__m128i *)(v7 + 16) = v2;
  v11 = _mm_load_si128((const __m128i *)&v26[16]);
  *(__m128i *)(v7 + 32) = si128;
  v12 = _mm_load_si128(&v28);
  *(__m128i *)(v7 + 48) = v4;
  v13 = _mm_load_si128((const __m128i *)&v29);
  *(__m128i *)(v7 + 64) = v5;
  v14 = _mm_load_si128(&v30);
  *(__m128i *)(v7 + 80) = v6;
  v15 = _mm_load_si128((const __m128i *)v31);
  *(__m128i *)(v7 + 96) = v8;
  v16 = _mm_load_si128((const __m128i *)&v31[16]);
  *(__m128i *)(v7 + 112) = v10;
  v17 = _mm_load_si128(&v33);
  *(__m128i *)(v7 + 128) = v11;
  *(__m128i *)(v7 + 144) = v12;
  *(__m128i *)(v7 + 160) = v13;
  *(__m128i *)(v7 + 176) = v14;
  *(__m128i *)(v7 + 192) = v15;
  *(__m128i *)(v7 + 208) = v16;
  *(__m128i *)(v7 + 224) = v17;
  *((_DWORD *)a1 + 2) += 6;
  return a1;
}
