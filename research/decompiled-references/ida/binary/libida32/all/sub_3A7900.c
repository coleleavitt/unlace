unsigned __int64 __fastcall sub_3A7900(unsigned int *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v10; // rcx
  __m128i *v11; // rbx
  unsigned int *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdx
  bool v17; // cc
  void *v19; // r14
  size_t v20; // r12
  __m128i v21; // xmm0
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __m128i *v28; // rbx
  __int64 v29; // r14
  __m128i *v30; // rbp
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  void *v40; // rdi
  void *v41; // rdi
  __int64 v43; // rdi
  __m128i v44; // [rsp+0h] [rbp-138h] BYREF
  __int64 v45; // [rsp+18h] [rbp-120h]
  __m128i v46; // [rsp+20h] [rbp-118h] BYREF
  __m128i v47; // [rsp+30h] [rbp-108h] BYREF
  __m128i v48; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v49; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v50; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v51; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v52; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v53; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v55; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v56; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v57; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v58; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-48h]
  _QWORD v60[8]; // [rsp+F8h] [rbp-40h] BYREF

  v6 = a2;
  v7 = a2[1];
  v8 = a2[2];
  v60[0] = __readfsqword(0x28u);
  if ( v8 < v7 + 1 )
  {
    a2 = nullptr;
    v25 = qvector_reserve(v6, 0, v7 + 1, 288);
    v26 = v6[2];
    v27 = v6[1];
    v6[2] = v8;
    v44.m128i_i64[0] = v25;
    v28 = (__m128i *)*v6;
    v45 = v26;
    v29 = v27 - 1;
    if ( v29 >= 0 )
    {
      v30 = (__m128i *)v25;
      do
      {
        v30->m128i_i32[0] = v28->m128i_i32[0];
        v31 = v28->m128i_i64[1];
        v32 = _mm_loadu_si128(v28 + 1);
        v28->m128i_i64[1] = 0;
        v30->m128i_i64[1] = v31;
        v30[1] = v32;
        LODWORD(v31) = v28[2].m128i_i32[0];
        v28[1] = 0;
        v30[2].m128i_i32[0] = v31;
        v33 = v28[2].m128i_i64[1];
        v34 = _mm_loadu_si128(v28 + 3);
        v28[2].m128i_i64[1] = 0;
        v30[2].m128i_i64[1] = v33;
        v30[3] = v34;
        v35 = _mm_loadu_si128(v28 + 4);
        v28[3].m128i_i64[1] = 0;
        v30[4] = v35;
        v30[5] = _mm_loadu_si128(v28 + 5);
        v30[6] = _mm_loadu_si128(v28 + 6);
        v30[7] = _mm_loadu_si128(v28 + 7);
        v30[8] = _mm_loadu_si128(v28 + 8);
        v30[9] = _mm_loadu_si128(v28 + 9);
        v30[10] = _mm_loadu_si128(v28 + 10);
        v30[11] = _mm_loadu_si128(v28 + 11);
        v36 = v28[17].m128i_i64[0];
        v30[12] = _mm_loadu_si128(v28 + 12);
        v37 = _mm_loadu_si128(v28 + 13);
        v30[17].m128i_i64[0] = v36;
        LOBYTE(v36) = v28[17].m128i_i8[8];
        v30[13] = v37;
        v38 = _mm_loadu_si128(v28 + 14);
        v30[17].m128i_i8[8] = v36;
        LODWORD(v36) = v28[17].m128i_i32[3];
        v30[14] = v38;
        v39 = _mm_loadu_si128(v28 + 15);
        v30[17].m128i_i32[3] = v36;
        v30[15] = v39;
        v30[16] = _mm_loadu_si128(v28 + 16);
        v40 = (void *)v28[2].m128i_i64[1];
        if ( v40 )
        {
          v28[3].m128i_i64[0] = 0;
          qfree(v40);
        }
        v41 = (void *)v28->m128i_i64[1];
        if ( v41 )
        {
          v28[1].m128i_i64[0] = 0;
          qfree(v41);
        }
        v28 += 18;
        v30 += 18;
      }
      while ( v29-- != 0 );
      v28 = (__m128i *)*v6;
    }
    qfree(v28);
    *v6 = v44.m128i_i64[0];
    v6[2] = v45;
    v7 = v6[1];
  }
  else
  {
    v10 = *a2;
    v44.m128i_i64[0] = *a2;
  }
  v11 = (__m128i *)(288 * v7 + v44.m128i_i64[0]);
  v11->m128i_i64[1] = 0;
  v11[2].m128i_i64[1] = 0;
  v11[4].m128i_i64[0] = -1;
  v11[1] = 0;
  v11[3] = 0;
  v11[5].m128i_i64[0] = 0;
  v11[4].m128i_i64[1] = 0xFFFFFFFFLL;
  v12 = &v11[5].m128i_u32[2];
  do
  {
    v13 = 0;
    *(_WORD *)v12 = 0;
    v12 += 6;
    *((_WORD *)v12 - 11) = 0;
    *((_WORD *)v12 - 10) = 0;
    *(v12 - 1) = 0;
    *((_WORD *)v12 - 9) = 0;
    *((_QWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( &v11[17].m128i_u64[1] != (unsigned __int64 *)v12 );
  ++v6[1];
  v14 = v11->m128i_i64[1];
  v15 = _mm_loadu_si128(v11 + 1);
  v11->m128i_i64[1] = *a3;
  v11[1].m128i_i64[0] = a3[1];
  v16 = a3[2];
  v11[1].m128i_i64[1] = v16;
  *a3 = v14;
  *(__m128i *)(a3 + 1) = v15;
  v17 = v11[1].m128i_i64[0] <= 1uLL;
  v11->m128i_i32[0] = *a1;
  if ( !v17 )
  {
    v19 = nullptr;
    v11[2].m128i_i32[0] = a1[8];
    v11[17].m128i_i32[3] = a1[9];
    v20 = *((_QWORD *)a1 + 2);
    v21 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
    if ( v20 )
    {
      v43 = *((_QWORD *)a1 + 2);
      v44 = v21;
      v19 = (void *)qalloc_or_throw(v43, a2, v16, v10, a5, 0);
      memcpy(v19, *((const void **)a1 + 1), v20);
      v21 = _mm_load_si128(&v44);
    }
    v22 = (void *)v11[2].m128i_i64[1];
    if ( v22 )
    {
      v11[3].m128i_i64[0] = 0;
      v44 = v21;
      qfree(v22);
      v21 = _mm_load_si128(&v44);
    }
    v11[2].m128i_i64[1] = (__int64)v19;
    v11[17].m128i_i8[8] = 0;
    v23 = dbg;
    v11[4].m128i_i32[2] = -1;
    v11[3] = v21;
    if ( v23 )
    {
      if ( (*(_QWORD *)(v23 + 32) & 0x8000000010LL) == 0 )
      {
        v46.m128i_i64[0] = -1;
        v47.m128i_i64[0] = 0;
        v46.m128i_i64[1] = 0xFFFFFFFFLL;
        v24 = &v47.m128i_i64[1];
        do
        {
          *(_WORD *)v24 = 0;
          v24 += 3;
          *((_WORD *)v24 - 11) = 0;
          *((_WORD *)v24 - 10) = 0;
          *((_DWORD *)v24 - 1) = 0;
          *((_WORD *)v24 - 9) = 0;
          *(v24 - 2) = 0;
          *((_DWORD *)v24 - 2) = 0;
        }
        while ( v60 != v24 );
        if ( (int)decode_insn(&v46, v11->m128i_u32[0], v60, 0, 0, v13) > 0 )
        {
          v11[4] = _mm_load_si128(&v46);
          v11[5] = _mm_load_si128(&v47);
          v11[6] = _mm_load_si128(&v48);
          v11[7] = _mm_load_si128(&v49);
          v11[8] = _mm_load_si128(&v50);
          v11[9] = _mm_load_si128(&v51);
          v11[10] = _mm_load_si128(&v52);
          v11[11] = _mm_load_si128(&v53);
          v11[12] = _mm_load_si128(&v54);
          v11[13] = _mm_load_si128(&v55);
          v11[14] = _mm_load_si128(&v56);
          v11[15] = _mm_load_si128(&v57);
          v11[16] = _mm_load_si128(&v58);
          v11[17].m128i_i64[0] = v59;
        }
      }
    }
  }
  return v60[0] - __readfsqword(0x28u);
}

