unsigned __int64 __fastcall sub_450480(__int64 a1, __int64 *a2)
{
  void *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  void *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // rax
  _BYTE *v31; // rax
  void *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // rax
  void *v43; // rdi
  void *v44; // r12
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // rax
  void *v48; // rdi
  void *v49; // r12
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  __int64 v52; // rax
  void *v53; // rdi
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // rax
  void *v57; // rdi
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
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v74.m128i_i64[0] = 9;
  strcpy((char *)ptr, "location");
  v3 = ptr;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v58 = _mm_loadl_epi64(&v74);
    v59 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    ptr = nullptr;
    v74 = 0;
    if ( v6 < v7 )
    {
      v72.m128i_i64[1] = v59.m128i_i64[0];
      v72.m128i_i64[0] = v58.m128i_i64[0];
      v67 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v67;
      v5 = v67;
      v4 = a2[1];
      v59 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v58 = _mm_loadl_epi64(&v72);
    }
    v60 = v5 + 24 * v4;
    *(_QWORD *)v60 = v3;
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
    if ( v6 < v7 )
    {
      v66 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v66;
      v5 = v66;
      v3 = ptr;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v74);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = v3;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v74.m128i_i64[0] = 9;
  strcpy((char *)ptr, "hardware");
  v10 = ptr;
  v11 = a2[1];
  v12 = *a2;
  v13 = a2[2];
  v14 = v11 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v12 + 24 * v13 )
  {
    v54 = _mm_loadl_epi64(&v74);
    v55 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    ptr = nullptr;
    v74 = 0;
    if ( v13 < v14 )
    {
      v72.m128i_i64[1] = v55.m128i_i64[0];
      v72.m128i_i64[0] = v54.m128i_i64[0];
      v68 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v68;
      v12 = v68;
      v11 = a2[1];
      v55 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v54 = _mm_loadl_epi64(&v72);
    }
    v56 = v12 + 24 * v11;
    *(_QWORD *)v56 = v10;
    *(__m128i *)(v56 + 8) = _mm_unpacklo_epi64(v54, v55);
    v57 = ptr;
    ++a2[1];
    if ( v57 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v57);
    }
  }
  else
  {
    if ( v13 < v14 )
    {
      v65 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v65;
      v12 = v65;
      v10 = ptr;
      v11 = a2[1];
    }
    v15 = _mm_loadu_si128(&v74);
    v16 = v12 + 24 * v11;
    *(_QWORD *)v16 = v10;
    *(__m128i *)(v16 + 8) = v15;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v17 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v17;
  v74.m128i_i64[0] = 6;
  *(_DWORD *)v17 = 1952543859;
  v17[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  v18 = a2[1];
  v19 = *a2;
  v20 = a2[2];
  v21 = v18 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v19 + 24 * v20 )
  {
    v49 = ptr;
    v50 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v51 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v20 < v21 )
    {
      v72.m128i_i64[1] = v51.m128i_i64[0];
      v72.m128i_i64[0] = v50.m128i_i64[0];
      v69 = qvector_reserve(a2, v19, v18 + 1, 24);
      *a2 = v69;
      v19 = v69;
      v18 = a2[1];
      v51 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v50 = _mm_loadl_epi64(&v72);
    }
    v52 = v19 + 24 * v18;
    *(_QWORD *)v52 = v49;
    *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64(v50, v51);
    v53 = ptr;
    ++a2[1];
    if ( v53 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v53);
    }
  }
  else
  {
    if ( v20 < v21 )
    {
      v64 = qvector_reserve(a2, v19, v18 + 1, 24);
      *a2 = v64;
      v19 = v64;
      v18 = a2[1];
    }
    v22 = _mm_loadu_si128(&v74);
    v23 = v19 + 24 * v18;
    *(_QWORD *)v23 = ptr;
    *(__m128i *)(v23 + 8) = v22;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v24 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
  ptr = v24;
  v74.m128i_i64[0] = 8;
  *v24 = 1769235297;
  *(_DWORD *)((char *)v24 + 3) = 1936617321;
  *((_BYTE *)ptr + 7) = 0;
  v25 = a2[1];
  v26 = *a2;
  v27 = a2[2];
  v28 = v25 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v26 + 24 * v27 )
  {
    v44 = ptr;
    v45 = _mm_loadl_epi64(&v74);
    ptr = nullptr;
    v46 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v27 < v28 )
    {
      v72.m128i_i64[1] = v46.m128i_i64[0];
      v72.m128i_i64[0] = v45.m128i_i64[0];
      v70 = qvector_reserve(a2, v26, v25 + 1, 24);
      *a2 = v70;
      v26 = v70;
      v25 = a2[1];
      v46 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v45 = _mm_loadl_epi64(&v72);
    }
    v47 = v26 + 24 * v25;
    *(_QWORD *)v47 = v44;
    *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v45, v46);
    v48 = ptr;
    ++a2[1];
    if ( v48 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v48);
    }
  }
  else
  {
    if ( v27 < v28 )
    {
      v63 = qvector_reserve(a2, v26, v25 + 1, 24);
      *a2 = v63;
      v26 = v63;
      v25 = a2[1];
    }
    v29 = _mm_loadu_si128(&v74);
    v30 = v26 + 24 * v25;
    *(_QWORD *)v30 = ptr;
    *(__m128i *)(v30 + 8) = v29;
    ++a2[1];
  }
  v74 = 0;
  ptr = nullptr;
  v31 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
  ptr = v31;
  v74.m128i_i64[0] = 10;
  *(_QWORD *)v31 = 0x6F697469646E6F63LL;
  v31[8] = 110;
  v32 = ptr;
  *((_BYTE *)ptr + 9) = 0;
  v33 = a2[1];
  v34 = *a2;
  v35 = a2[2];
  v36 = v33 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v34 + 24 * v35 )
  {
    v40 = _mm_loadl_epi64(&v74);
    v41 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    ptr = nullptr;
    v74 = 0;
    if ( v35 < v36 )
    {
      v72.m128i_i64[1] = v41.m128i_i64[0];
      v72.m128i_i64[0] = v40.m128i_i64[0];
      v71 = qvector_reserve(a2, v34, v33 + 1, 24);
      *a2 = v71;
      v34 = v71;
      v33 = a2[1];
      v41 = _mm_loadl_epi64((const __m128i *)&v72.m128i_u64[1]);
      v40 = _mm_loadl_epi64(&v72);
    }
    v42 = v34 + 24 * v33;
    *(_QWORD *)v42 = v32;
    *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(v40, v41);
    v43 = ptr;
    ++a2[1];
    if ( v43 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v43);
    }
  }
  else
  {
    if ( v35 < v36 )
    {
      v62 = qvector_reserve(a2, v34, v33 + 1, 24);
      *a2 = v62;
      v34 = v62;
      v32 = ptr;
      v33 = a2[1];
    }
    v37 = _mm_loadu_si128(&v74);
    v38 = v34 + 24 * v33;
    *(_QWORD *)v38 = v32;
    *(__m128i *)(v38 + 8) = v37;
    ++a2[1];
  }
  return v75 - __readfsqword(0x28u);
}

