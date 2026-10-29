unsigned __int64 __fastcall sub_558C90(__int64 a1)
{
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  void *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  void *v8; // rdi
  __int64 v9; // rbp
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  void *v21; // rdi
  __m128i v22; // xmm1
  __int64 v23; // r13
  __int64 v24; // rax
  __m128i v25; // xmm1
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v29; // rax
  __m128i v30[20]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v31; // [rsp+148h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7B60);
  v31 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 304;
  memset(&v30[1], 0, 0x130u);
  v30[1] = si128;
  v30[2].m128i_i64[0] = -2;
  v30[3].m128i_i64[0] = -1;
  v30[11].m128i_i64[0] = 1;
  v30[11].m128i_i32[2] = -1;
  v30[14].m128i_i64[1] = -1;
  v30[15].m128i_i32[0] = -1;
  v30[15].m128i_i64[1] = -1;
  copy_tinfo_t(a1 + 8);
  v3 = _mm_loadu_si128((const __m128i *)&v30[3].m128i_u64[1]);
  v4 = *(void **)(a1 + 64);
  v5 = v30[5].m128i_i64[0];
  v30[5].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 16) = v30[2].m128i_i64[0];
  v6 = v30[2].m128i_i64[1];
  *(__m128i *)(a1 + 40) = v3;
  v7 = _mm_loadu_si128((const __m128i *)&v30[5].m128i_u64[1]);
  *(_QWORD *)(a1 + 24) = v6;
  *(__m128i *)((char *)&v30[5] + 8) = 0;
  *(_QWORD *)(a1 + 32) = v30[3].m128i_i64[0];
  *(_QWORD *)(a1 + 56) = v30[4].m128i_i64[1];
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v30[0] = v7;
    qfree(v4);
    v7 = _mm_load_si128(v30);
  }
  v8 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 64) = v5;
  *(__m128i *)(a1 + 72) = v7;
  v9 = v30[6].m128i_i64[1];
  v10 = _mm_load_si128(&v30[7]);
  v30[6].m128i_i64[1] = 0;
  v30[7] = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v30[0] = v10;
    qfree(v8);
    v10 = _mm_load_si128(v30);
  }
  *(_QWORD *)(a1 + 88) = v9;
  *(__m128i *)(a1 + 96) = v10;
  copy_tinfo_t(a1 + 112);
  v11 = _mm_loadu_si128((const __m128i *)&v30[8].m128i_u64[1]);
  v12 = *(void **)(a1 + 240);
  v13 = v30[16].m128i_i64[0];
  v30[16].m128i_i64[0] = 0;
  *(_DWORD *)(a1 + 168) = v30[11].m128i_i32[2];
  v14 = v30[12].m128i_i64[0];
  *(__m128i *)(a1 + 120) = v11;
  v15 = _mm_loadu_si128((const __m128i *)&v30[9].m128i_u64[1]);
  *(_QWORD *)(a1 + 176) = v14;
  LOBYTE(v14) = v30[12].m128i_i8[8];
  *(__m128i *)(a1 + 136) = v15;
  v16 = _mm_loadu_si128((const __m128i *)&v30[10].m128i_u64[1]);
  *(_BYTE *)(a1 + 184) = v14;
  LODWORD(v14) = v30[15].m128i_i32[0];
  *(__m128i *)(a1 + 152) = v16;
  v17 = _mm_load_si128(&v30[13]);
  *(_DWORD *)(a1 + 224) = v14;
  v18 = v30[15].m128i_i64[1];
  *(__m128i *)(a1 + 192) = v17;
  v19 = _mm_load_si128(&v30[14]);
  *(_QWORD *)(a1 + 232) = v18;
  *(__m128i *)(a1 + 208) = v19;
  v20 = _mm_loadu_si128((const __m128i *)&v30[16].m128i_u64[1]);
  *(__m128i *)((char *)&v30[16] + 8) = 0;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    v30[0] = v20;
    qfree(v12);
    v20 = _mm_load_si128(v30);
  }
  v21 = *(void **)(a1 + 264);
  *(__m128i *)(a1 + 248) = v20;
  v22 = _mm_load_si128(&v30[18]);
  *(_QWORD *)(a1 + 240) = v13;
  v23 = v30[17].m128i_i64[1];
  v30[18] = 0;
  v30[17].m128i_i64[1] = 0;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    v30[0] = v22;
    qfree(v21);
    v24 = v30[19].m128i_i64[0];
    v25 = _mm_load_si128(v30);
    *(_QWORD *)(a1 + 264) = v23;
    v26 = (void *)v30[17].m128i_i64[1];
    *(_QWORD *)(a1 + 288) = v24;
    v27 = v30[19].m128i_i64[1];
    *(__m128i *)(a1 + 272) = v25;
    *(_QWORD *)(a1 + 296) = v27;
    if ( v26 )
    {
      v30[18].m128i_i64[0] = 0;
      qfree(v26);
    }
  }
  else
  {
    v29 = v30[19].m128i_i64[0];
    *(_QWORD *)(a1 + 264) = v23;
    *(__m128i *)(a1 + 272) = v22;
    *(_OWORD *)(a1 + 288) = __PAIR128__(v30[19].m128i_u64[1], v29);
  }
  if ( v30[16].m128i_i64[0] )
  {
    v30[16].m128i_i64[1] = 0;
    qfree((void *)v30[16].m128i_i64[0]);
  }
  clear_tinfo_t(&v30[8]);
  if ( v30[6].m128i_i64[1] )
  {
    v30[7].m128i_i64[0] = 0;
    qfree((void *)v30[6].m128i_i64[1]);
  }
  if ( v30[5].m128i_i64[0] )
  {
    v30[5].m128i_i64[1] = 0;
    qfree((void *)v30[5].m128i_i64[0]);
  }
  clear_tinfo_t(&v30[1].m128i_u64[1]);
  return v31 - __readfsqword(0x28u);
}
