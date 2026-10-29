unsigned __int64 __fastcall sub_3AC140(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rbx
  _WORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __m128i v11; // xmm0
  bool v12; // cc
  void *v14; // r13
  size_t v15; // rbp
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r13
  __m128i *v23; // rbx
  __int64 v24; // r13
  __m128i *v25; // rbp
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __m128i v29; // xmm0
  void *v30; // rdi
  void *v31; // rdi
  __int64 v33; // rdi
  __m128i v34; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-1B0h]
  _BYTE v36[360]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v37[8]; // [rsp+188h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v37[0] = __readfsqword(0x28u);
  if ( v5 < v4 + 1 )
  {
    v20 = qvector_reserve(a2, 0, v4 + 1, 432);
    v21 = *(_QWORD *)(a2 + 16);
    v22 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v5;
    v34.m128i_i64[0] = v20;
    v23 = *(__m128i **)a2;
    v35 = v21;
    v24 = v22 - 1;
    if ( v24 >= 0 )
    {
      v25 = (__m128i *)v20;
      do
      {
        v25->m128i_i64[0] = v23->m128i_i64[0];
        v26 = v23->m128i_i64[1];
        v27 = _mm_loadu_si128(v23 + 1);
        v23->m128i_i64[1] = 0;
        v25->m128i_i64[1] = v26;
        v25[1] = v27;
        LODWORD(v26) = v23[2].m128i_i32[0];
        v23[1] = 0;
        v25[2].m128i_i32[0] = v26;
        v28 = v23[2].m128i_i64[1];
        v29 = _mm_loadu_si128(v23 + 3);
        v23[2].m128i_i64[1] = 0;
        v25[2].m128i_i64[1] = v28;
        v25[3] = v29;
        LOBYTE(v28) = v23[26].m128i_i8[8];
        v23[3].m128i_i64[1] = 0;
        qmemcpy(&v25[4], &v23[4], 0x168u);
        v25[26].m128i_i8[8] = v28;
        v25[26].m128i_i32[3] = v23[26].m128i_i32[3];
        v30 = (void *)v23[2].m128i_i64[1];
        if ( v30 )
        {
          v23[3].m128i_i64[0] = 0;
          qfree(v30);
        }
        v31 = (void *)v23->m128i_i64[1];
        if ( v31 )
        {
          v23[1].m128i_i64[0] = 0;
          qfree(v31);
        }
        v23 += 27;
        v25 += 27;
      }
      while ( v24-- != 0 );
      v23 = *(__m128i **)a2;
    }
    qfree(v23);
    *(_QWORD *)a2 = v34.m128i_i64[0];
    *(_QWORD *)(a2 + 16) = v35;
    v4 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v34.m128i_i64[0] = *(_QWORD *)a2;
  }
  v7 = 432 * v4 + v34.m128i_i64[0];
  *(_OWORD *)(v7 + 16) = 0;
  v8 = (_WORD *)(v7 + 104);
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 80) = -1;
  *(_QWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  *(_OWORD *)(v7 + 64) = -1;
  do
  {
    v9 = 0;
    *v8 = 0;
    v8 += 20;
    *(v8 - 19) = 0;
    *(v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *(v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( (_WORD *)(v7 + 424) != v8 );
  ++*(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  v11 = _mm_loadu_si128((const __m128i *)(v7 + 16));
  *(_QWORD *)(v7 + 8) = *a3;
  *(_QWORD *)(v7 + 16) = a3[1];
  *(_QWORD *)(v7 + 24) = a3[2];
  *a3 = v10;
  *(__m128i *)(a3 + 1) = v11;
  v12 = *(_QWORD *)(v7 + 16) <= 1u;
  *(_QWORD *)v7 = *(_QWORD *)a1;
  if ( !v12 )
  {
    v14 = nullptr;
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v7 + 428) = *(_DWORD *)(a1 + 36);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    if ( v15 )
    {
      v33 = *(_QWORD *)(a1 + 16);
      v34 = v16;
      v14 = (void *)qalloc_or_throw(v33);
      memcpy(v14, *(const void **)(a1 + 8), v15);
      v16 = _mm_load_si128(&v34);
    }
    v17 = *(void **)(v7 + 40);
    if ( v17 )
    {
      *(_QWORD *)(v7 + 48) = 0;
      v34 = v16;
      qfree(v17);
      v16 = _mm_load_si128(&v34);
    }
    *(_QWORD *)(v7 + 40) = v14;
    *(_BYTE *)(v7 + 424) = 0;
    v18 = dbg;
    *(_QWORD *)(v7 + 80) = -1;
    *(__m128i *)(v7 + 48) = v16;
    if ( v18 )
    {
      if ( (*(_QWORD *)(v18 + 32) & 0x8000000010LL) == 0 )
      {
        v19 = &v36[40];
        *(_QWORD *)&v36[24] = 0;
        *(_QWORD *)&v36[32] = 0;
        memset(v36, 255, 24);
        do
        {
          *(_WORD *)v19 = 0;
          v19 += 5;
          *((_WORD *)v19 - 19) = 0;
          *((_WORD *)v19 - 18) = 0;
          *((_DWORD *)v19 - 2) = 0;
          *((_WORD *)v19 - 17) = 0;
          *((_OWORD *)v19 - 2) = 0;
          *(v19 - 2) = 0;
        }
        while ( v37 != v19 );
        if ( (int)decode_insn(v36, *(_QWORD *)v7, v37, 0, 0, v9, 0.0) > 0 )
          qmemcpy((void *)(v7 + 64), v36, 0x168u);
      }
    }
  }
  return v37[0] - __readfsqword(0x28u);
}
