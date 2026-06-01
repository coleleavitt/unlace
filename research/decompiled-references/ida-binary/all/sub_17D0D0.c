unsigned __int64 __fastcall sub_17D0D0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __m128i v30; // xmm1
  __int64 v31; // r13
  __int64 v32; // rax
  __m128i v33; // xmm1
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __m128i v41[20]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v42; // [rsp+148h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC340);
  v42 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 304;
  memset(&v41[1], 0, 0x130u);
  v41[1] = si128;
  v41[2].m128i_i64[0] = -2;
  v41[3].m128i_i64[0] = -1;
  v41[11].m128i_i64[0] = 1;
  v41[11].m128i_i32[2] = -1;
  v41[14].m128i_i64[1] = -1;
  v41[15].m128i_i32[0] = -1;
  v41[15].m128i_i64[1] = -1;
  copy_tinfo_t(a1 + 8, &v41[1].m128i_u64[1], a3);
  v8 = _mm_loadu_si128((const __m128i *)&v41[3].m128i_u64[1]);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = v41[5].m128i_i64[0];
  v41[5].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 16) = v41[2].m128i_i64[0];
  v11 = v41[2].m128i_i64[1];
  *(__m128i *)(a1 + 40) = v8;
  v12 = _mm_loadu_si128((const __m128i *)&v41[5].m128i_u64[1]);
  *(_QWORD *)(a1 + 24) = v11;
  *(__m128i *)((char *)&v41[5] + 8) = 0;
  *(_QWORD *)(a1 + 32) = v41[3].m128i_i64[0];
  *(_QWORD *)(a1 + 56) = v41[4].m128i_i64[1];
  if ( v9 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v41[0] = v12;
    qfree(v9, &v41[1].m128i_u64[1], v5, v6, v7);
    v12 = _mm_load_si128(v41);
  }
  v13 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 64) = v10;
  *(__m128i *)(a1 + 72) = v12;
  v14 = v41[6].m128i_i64[1];
  v15 = _mm_load_si128(&v41[7]);
  v41[6].m128i_i64[1] = 0;
  v41[7] = 0;
  if ( v13 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v41[0] = v15;
    qfree(v13, &v41[1].m128i_u64[1], v5, v6, v7);
    v15 = _mm_load_si128(v41);
  }
  *(_QWORD *)(a1 + 88) = v14;
  *(__m128i *)(a1 + 96) = v15;
  copy_tinfo_t(a1 + 112, &v41[8], v5);
  v19 = _mm_loadu_si128((const __m128i *)&v41[8].m128i_u64[1]);
  v20 = *(_QWORD *)(a1 + 240);
  v21 = v41[16].m128i_i64[0];
  v41[16].m128i_i64[0] = 0;
  *(_DWORD *)(a1 + 168) = v41[11].m128i_i32[2];
  v22 = v41[12].m128i_i64[0];
  *(__m128i *)(a1 + 120) = v19;
  v23 = _mm_loadu_si128((const __m128i *)&v41[9].m128i_u64[1]);
  *(_QWORD *)(a1 + 176) = v22;
  LOBYTE(v22) = v41[12].m128i_i8[8];
  *(__m128i *)(a1 + 136) = v23;
  v24 = _mm_loadu_si128((const __m128i *)&v41[10].m128i_u64[1]);
  *(_BYTE *)(a1 + 184) = v22;
  LODWORD(v22) = v41[15].m128i_i32[0];
  *(__m128i *)(a1 + 152) = v24;
  v25 = _mm_load_si128(&v41[13]);
  *(_DWORD *)(a1 + 224) = v22;
  v26 = v41[15].m128i_i64[1];
  *(__m128i *)(a1 + 192) = v25;
  v27 = _mm_load_si128(&v41[14]);
  *(_QWORD *)(a1 + 232) = v26;
  *(__m128i *)(a1 + 208) = v27;
  v28 = _mm_loadu_si128((const __m128i *)&v41[16].m128i_u64[1]);
  *(__m128i *)((char *)&v41[16] + 8) = 0;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    v41[0] = v28;
    qfree(v20, &v41[8], v16, v17, v18);
    v28 = _mm_load_si128(v41);
  }
  v29 = *(_QWORD *)(a1 + 264);
  *(__m128i *)(a1 + 248) = v28;
  v30 = _mm_load_si128(&v41[18]);
  *(_QWORD *)(a1 + 240) = v21;
  v31 = v41[17].m128i_i64[1];
  v41[18] = 0;
  v41[17].m128i_i64[1] = 0;
  if ( v29 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    v41[0] = v30;
    qfree(v29, &v41[8], v16, v17, v18);
    v32 = v41[19].m128i_i64[0];
    v33 = _mm_load_si128(v41);
    *(_QWORD *)(a1 + 264) = v31;
    v34 = v41[17].m128i_i64[1];
    *(_QWORD *)(a1 + 288) = v32;
    v35 = v41[19].m128i_i64[1];
    *(__m128i *)(a1 + 272) = v33;
    *(_QWORD *)(a1 + 296) = v35;
    if ( v34 )
    {
      v41[18].m128i_i64[0] = 0;
      qfree(v34, &v41[8], v16, v17, v18);
    }
  }
  else
  {
    v40 = v41[19].m128i_i64[0];
    *(_QWORD *)(a1 + 264) = v31;
    *(__m128i *)(a1 + 272) = v30;
    *(_OWORD *)(a1 + 288) = __PAIR128__(v41[19].m128i_u64[1], v40);
  }
  if ( v41[16].m128i_i64[0] )
  {
    v41[16].m128i_i64[1] = 0;
    qfree(v41[16].m128i_i64[0], &v41[8], v16, v17, v18);
  }
  clear_tinfo_t(&v41[8]);
  if ( v41[6].m128i_i64[1] )
  {
    v41[7].m128i_i64[0] = 0;
    qfree(v41[6].m128i_i64[1], &v41[8], v36, v37, v38);
  }
  if ( v41[5].m128i_i64[0] )
  {
    v41[5].m128i_i64[1] = 0;
    qfree(v41[5].m128i_i64[0], &v41[8], v36, v37, v38);
  }
  clear_tinfo_t(&v41[1].m128i_u64[1]);
  return v42 - __readfsqword(0x28u);
}
