unsigned __int64 __fastcall sub_4650F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rax
  _BYTE *v22; // rax
  void *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rax
  _WORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __m128i v35; // xmm0
  __int64 v36; // rax
  void *v38; // rbp
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rax
  void *v42; // rdi
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __int64 v45; // rax
  void *v46; // rdi
  void *v47; // r12
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  void *v51; // rdi
  void *v52; // r12
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rax
  void *v56; // rdi
  void *v57; // r12
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  __int64 v60; // rax
  void *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __m128i v72; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v74; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v75; // [rsp+28h] [rbp-20h]

  v75 = __readfsqword(0x28u);
  v74 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v74.m128i_i64[0] = 5;
  strcpy((char *)ptr, "Code");
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v6 = v3 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v4 + 24 * v5 )
  {
    v57 = ptr;
    v58 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v59 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v5 < v6 )
    {
      v72.m128i_i64[1] = v59.m128i_i64[0];
      v72.m128i_i64[0] = v58.m128i_i64[0];
      v67 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v67;
      v4 = v67;
      v3 = a2[1];
      v59 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v58 = _mm_loadl_epi64(&v72);
    }
    v60 = v4 + 24 * v3;
    *(_QWORD *)v60 = v57;
    *(__m128i *)(v60 + 8) = _mm_unpacklo_epi64(v58, v59);
    v61 = ptr;
    ++a2[1];
    if ( v61 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v61);
    }
  }
  else
  {
    if ( v5 < v6 )
    {
      v66 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v66;
      v4 = v66;
      v3 = a2[1];
    }
    v7 = _mm_loadu_si128(&v74);
    v8 = v4 + 24 * v3;
    *(_QWORD *)v8 = ptr;
    *(__m128i *)(v8 + 8) = v7;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v74.m128i_i64[0] = 5;
  strcpy((char *)ptr, "Name");
  v9 = a2[1];
  v10 = *a2;
  v11 = a2[2];
  v12 = v9 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v10 + 24 * v11 )
  {
    v52 = ptr;
    v53 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v54 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v11 < v12 )
    {
      v72.m128i_i64[1] = v54.m128i_i64[0];
      v72.m128i_i64[0] = v53.m128i_i64[0];
      v68 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v68;
      v10 = v68;
      v9 = a2[1];
      v54 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v53 = _mm_loadl_epi64(&v72);
    }
    v55 = v10 + 24 * v9;
    *(_QWORD *)v55 = v52;
    *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64(v53, v54);
    v56 = ptr;
    ++a2[1];
    if ( v56 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v56);
    }
  }
  else
  {
    if ( v11 < v12 )
    {
      v65 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v65;
      v10 = v65;
      v9 = a2[1];
    }
    v13 = _mm_loadu_si128(&v74);
    v14 = v10 + 24 * v9;
    *(_QWORD *)v14 = ptr;
    *(__m128i *)(v14 + 8) = v13;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v15 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
  ptr = v15;
  v74.m128i_i64[0] = 8;
  *v15 = 1886614867;
  *(_DWORD *)((char *)v15 + 3) = 1684956528;
  *((_BYTE *)ptr + 7) = 0;
  v16 = a2[1];
  v17 = *a2;
  v18 = a2[2];
  v19 = v16 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v17 + 24 * v18 )
  {
    v47 = ptr;
    v48 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v49 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v18 < v19 )
    {
      v72.m128i_i64[1] = v49.m128i_i64[0];
      v72.m128i_i64[0] = v48.m128i_i64[0];
      v69 = qvector_reserve(a2, v17, v16 + 1, 24);
      *a2 = v69;
      v17 = v69;
      v16 = a2[1];
      v49 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v48 = _mm_loadl_epi64(&v72);
    }
    v50 = v17 + 24 * v16;
    *(_QWORD *)v50 = v47;
    *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64(v48, v49);
    v51 = ptr;
    ++a2[1];
    if ( v51 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v51);
    }
  }
  else
  {
    if ( v18 < v19 )
    {
      v64 = qvector_reserve(a2, v17, v16 + 1, 24);
      *a2 = v64;
      v17 = v64;
      v16 = a2[1];
    }
    v20 = _mm_loadu_si128(&v74);
    v21 = v17 + 24 * v16;
    *(_QWORD *)v21 = ptr;
    *(__m128i *)(v21 + 8) = v20;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v22 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
  ptr = v22;
  v74.m128i_i64[0] = 10;
  *(_QWORD *)v22 = 0x7420646573736150LL;
  v22[8] = 111;
  v23 = ptr;
  *((_BYTE *)ptr + 9) = 0;
  v24 = a2[1];
  v25 = *a2;
  v26 = a2[2];
  v27 = v24 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v25 + 24 * v26 )
  {
    v43 = _mm_loadl_epi64(&v74);
    v44 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    ptr = nullptr;
    v74 = 0;
    if ( v26 < v27 )
    {
      v72.m128i_i64[1] = v44.m128i_i64[0];
      v72.m128i_i64[0] = v43.m128i_i64[0];
      v70 = qvector_reserve(a2, v25, v24 + 1, 24);
      *a2 = v70;
      v25 = v70;
      v24 = a2[1];
      v44 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v43 = _mm_loadl_epi64(&v72);
    }
    v45 = v25 + 24 * v24;
    *(_QWORD *)v45 = v23;
    *(__m128i *)(v45 + 8) = _mm_unpacklo_epi64(v43, v44);
    v46 = ptr;
    ++a2[1];
    if ( v46 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v46);
    }
  }
  else
  {
    if ( v26 < v27 )
    {
      v63 = qvector_reserve(a2, v25, v24 + 1, 24);
      *a2 = v63;
      v25 = v63;
      v23 = ptr;
      v24 = a2[1];
    }
    v28 = _mm_loadu_si128(&v74);
    v29 = v25 + 24 * v24;
    *(_QWORD *)v29 = v23;
    *(__m128i *)(v29 + 8) = v28;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v30 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  ptr = v30;
  v74.m128i_i64[0] = 7;
  *(_DWORD *)v30 = 1869636946;
  v30[2] = 29810;
  *((_BYTE *)ptr + 6) = 0;
  v31 = a2[1];
  v32 = *a2;
  v33 = a2[2];
  v34 = v31 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v32 + 24 * v33 )
  {
    v38 = ptr;
    v39 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v40 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v33 < v34 )
    {
      v72.m128i_i64[1] = v40.m128i_i64[0];
      v72.m128i_i64[0] = v39.m128i_i64[0];
      v71 = qvector_reserve(a2, v32, v31 + 1, 24);
      *a2 = v71;
      v32 = v71;
      v31 = a2[1];
      v40 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v39 = _mm_loadl_epi64(&v72);
    }
    v41 = v32 + 24 * v31;
    *(_QWORD *)v41 = v38;
    *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64(v39, v40);
    v42 = ptr;
    ++a2[1];
    if ( v42 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v42);
    }
  }
  else
  {
    if ( v33 < v34 )
    {
      v62 = qvector_reserve(a2, v32, v31 + 1, 24);
      *a2 = v62;
      v32 = v62;
      v31 = a2[1];
    }
    v35 = _mm_loadu_si128(&v74);
    v36 = v32 + 24 * v31;
    *(_QWORD *)v36 = ptr;
    *(__m128i *)(v36 + 8) = v35;
    ++a2[1];
  }
  return v75 - __readfsqword(0x28u);
}
