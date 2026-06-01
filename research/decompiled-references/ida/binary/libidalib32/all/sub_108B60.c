unsigned __int64 __fastcall sub_108B60(__int64 a1)
{
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __m128i v21; // xmm1
  __int64 v22; // r13
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v28; // rax
  __m128i v29[19]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v30; // [rsp+138h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2490);
  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 288;
  memset(&v29[1], 0, 0x120u);
  v29[1] = si128;
  v29[2].m128i_i64[0] = -2;
  v29[3].m128i_i64[0] = -1;
  v29[10].m128i_i64[0] = 1;
  v29[10].m128i_i32[2] = -1;
  v29[13].m128i_i64[1] = -1;
  v29[14].m128i_i32[0] = -1;
  v29[14].m128i_i64[1] = -1;
  copy_tinfo_t();
  v3 = _mm_loadu_si128((const __m128i *)&v29[3].m128i_u64[1]);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = v29[5].m128i_i64[0];
  v29[5].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 16) = v29[2].m128i_i64[0];
  v6 = v29[2].m128i_i64[1];
  *(__m128i *)(a1 + 40) = v3;
  v7 = _mm_loadu_si128((const __m128i *)&v29[5].m128i_u64[1]);
  *(_QWORD *)(a1 + 24) = v6;
  *(__m128i *)((char *)&v29[5] + 8) = 0;
  *(_QWORD *)(a1 + 32) = v29[3].m128i_i64[0];
  *(_QWORD *)(a1 + 56) = v29[4].m128i_i64[1];
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v29[0] = v7;
    qfree();
    v7 = _mm_load_si128(v29);
  }
  v8 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 64) = v5;
  *(__m128i *)(a1 + 72) = v7;
  v9 = v29[6].m128i_i64[1];
  v10 = _mm_load_si128(&v29[7]);
  v29[6].m128i_i64[1] = 0;
  v29[7] = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v29[0] = v10;
    qfree();
    v10 = _mm_load_si128(v29);
  }
  *(_QWORD *)(a1 + 88) = v9;
  *(__m128i *)(a1 + 96) = v10;
  copy_tinfo_t();
  v11 = *(_QWORD *)(a1 + 224);
  v12 = _mm_loadu_si128((const __m128i *)&v29[8].m128i_u64[1]);
  v13 = v29[15].m128i_i64[0];
  v29[15].m128i_i64[0] = 0;
  *(_DWORD *)(a1 + 152) = v29[10].m128i_i32[2];
  v14 = v29[11].m128i_i64[0];
  *(__m128i *)(a1 + 120) = v12;
  v15 = _mm_loadu_si128((const __m128i *)&v29[9].m128i_u64[1]);
  *(_QWORD *)(a1 + 160) = v14;
  LOBYTE(v14) = v29[11].m128i_i8[8];
  *(__m128i *)(a1 + 136) = v15;
  v16 = _mm_load_si128(&v29[12]);
  *(_BYTE *)(a1 + 168) = v14;
  LODWORD(v14) = v29[14].m128i_i32[0];
  *(__m128i *)(a1 + 176) = v16;
  v17 = _mm_load_si128(&v29[13]);
  *(_DWORD *)(a1 + 208) = v14;
  v18 = v29[14].m128i_i64[1];
  *(__m128i *)(a1 + 192) = v17;
  v19 = _mm_loadu_si128((const __m128i *)&v29[15].m128i_u64[1]);
  *(_QWORD *)(a1 + 216) = v18;
  *(__m128i *)((char *)&v29[15] + 8) = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    v29[0] = v19;
    qfree();
    v19 = _mm_load_si128(v29);
  }
  v20 = *(_QWORD *)(a1 + 248);
  *(__m128i *)(a1 + 232) = v19;
  v21 = _mm_load_si128(&v29[17]);
  *(_QWORD *)(a1 + 224) = v13;
  v22 = v29[16].m128i_i64[1];
  v29[17] = 0;
  v29[16].m128i_i64[1] = 0;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v29[0] = v21;
    qfree();
    v23 = v29[18].m128i_i64[0];
    v24 = _mm_load_si128(v29);
    *(_QWORD *)(a1 + 248) = v22;
    v25 = v29[16].m128i_i64[1];
    *(_QWORD *)(a1 + 272) = v23;
    v26 = v29[18].m128i_i64[1];
    *(__m128i *)(a1 + 256) = v24;
    *(_QWORD *)(a1 + 280) = v26;
    if ( v25 )
    {
      v29[17].m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v28 = v29[18].m128i_i64[0];
    *(_QWORD *)(a1 + 248) = v22;
    *(__m128i *)(a1 + 256) = v21;
    *(_OWORD *)(a1 + 272) = __PAIR128__(v29[18].m128i_u64[1], v28);
  }
  if ( v29[15].m128i_i64[0] )
  {
    v29[15].m128i_i64[1] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v29[6].m128i_i64[1] )
  {
    v29[7].m128i_i64[0] = 0;
    qfree();
  }
  if ( v29[5].m128i_i64[0] )
  {
    v29[5].m128i_i64[1] = 0;
    qfree();
  }
  clear_tinfo_t();
  return v30 - __readfsqword(0x28u);
}

