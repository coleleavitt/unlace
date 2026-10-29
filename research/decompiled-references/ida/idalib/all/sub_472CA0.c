__int64 *__fastcall sub_472CA0(__int64 *a1, int *a2, __int16 a3)
{
  int v4; // eax
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdx
  char *v9; // rsi
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // rax
  void *v15; // rdi
  void *v17; // r14
  void **v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  void **v23; // rax
  void *v24; // rdi
  _BYTE *v25; // rax
  unsigned __int64 v26; // rdi
  void **v27; // rax
  void *v28; // r14
  char *v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  char *v34; // rax
  _WORD *v35; // rax
  __int64 v36; // rax
  char *v37; // rsi
  unsigned __int64 v38; // rdi
  void *v39; // r13
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  char *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  char *v45; // rsi
  unsigned __int64 v46; // rdi
  void *v47; // r13
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  char *v50; // rax
  __int64 v51; // rdx
  char *v52; // rsi
  char *v53; // rdi
  __m128i v54; // xmm0
  char *v55; // rax
  __m128i v56; // xmm0
  char *v57; // rax
  __m128i v58; // xmm0
  char *v59; // rax
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  void **v62; // rax
  __m128i v63; // [rsp+0h] [rbp-78h] BYREF
  void *v64; // [rsp+10h] [rbp-68h] BYREF
  __int128 v65; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __m128i v67; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v68; // [rsp+48h] [rbp-30h]

  v4 = *a2;
  v68 = __readfsqword(0x28u);
  v65 = 0;
  v64 = nullptr;
  LOBYTE(v6) = v4;
  v7 = v4 & 3;
  if ( v7 == 2 )
  {
    if ( (a3 & 0xC000) == 0x8000 )
      goto LABEL_4;
    v67 = 0;
    ptr = nullptr;
    v25 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
    ptr = v25;
    v67.m128i_i64[0] = 10;
    *(_QWORD *)v25 = 0x6D616E796D6D7564LL;
    v18 = (void **)v64;
    v25[8] = 101;
    v17 = ptr;
    *((_BYTE *)ptr + 9) = 0;
    v19 = v65;
    v26 = v65 + 1;
    if ( &ptr >= v18 && &ptr < &v18[3 * *((_QWORD *)&v65 + 1)] )
    {
      v60 = _mm_loadl_epi64(&v67);
      v61 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
      ptr = nullptr;
      v67 = 0;
      if ( *((_QWORD *)&v65 + 1) < v26 )
      {
        v63.m128i_i64[1] = v61.m128i_i64[0];
        v63.m128i_i64[0] = v60.m128i_i64[0];
        v64 = (void *)qvector_reserve(&v64, v18, v65 + 1, 24);
        v18 = (void **)v64;
        v61 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
        v19 = v65;
        v60 = _mm_loadl_epi64(&v63);
      }
      v62 = &v18[3 * v19];
      *v62 = v17;
      *(__m128i *)(v62 + 1) = _mm_unpacklo_epi64(v60, v61);
      v24 = ptr;
      *(_QWORD *)&v65 = v65 + 1;
      if ( ptr )
        goto LABEL_25;
      goto LABEL_31;
    }
    if ( *((_QWORD *)&v65 + 1) < v26 )
      goto LABEL_66;
    goto LABEL_30;
  }
  if ( v7 != 3 || (~a3 & 0xC000) == 0 )
  {
    if ( (v4 & 4) != 0 )
      goto LABEL_4;
    goto LABEL_33;
  }
  v67 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v67.m128i_i64[0] = 9;
  strcpy((char *)ptr, "autoname");
  v17 = ptr;
  v18 = (void **)v64;
  v19 = v65;
  v20 = v65 + 1;
  if ( &ptr < v64 || &ptr >= (void **)((char *)v64 + 24 * *((_QWORD *)&v65 + 1)) )
  {
    if ( *((_QWORD *)&v65 + 1) < v20 )
    {
LABEL_66:
      v64 = (void *)qvector_reserve(&v64, v18, v65 + 1, 24);
      v18 = (void **)v64;
      v17 = ptr;
      v19 = v65;
    }
LABEL_30:
    v27 = &v18[3 * v19];
    *v27 = v17;
    *(__m128i *)(v27 + 1) = _mm_loadu_si128(&v67);
    *(_QWORD *)&v65 = v65 + 1;
    goto LABEL_31;
  }
  v21 = _mm_loadl_epi64(&v67);
  v22 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
  ptr = nullptr;
  v67 = 0;
  if ( *((_QWORD *)&v65 + 1) < v20 )
  {
    v63.m128i_i64[1] = v22.m128i_i64[0];
    v63.m128i_i64[0] = v21.m128i_i64[0];
    v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
    v18 = (void **)v64;
    v22 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
    v19 = v65;
    v21 = _mm_loadl_epi64(&v63);
  }
  v23 = &v18[3 * v19];
  *v23 = v17;
  *(__m128i *)(v23 + 1) = _mm_unpacklo_epi64(v21, v22);
  v24 = ptr;
  *(_QWORD *)&v65 = v65 + 1;
  if ( ptr )
  {
LABEL_25:
    v67.m128i_i64[0] = 0;
    qfree(v24);
  }
LABEL_31:
  v4 = *a2;
  LOBYTE(v6) = *a2;
  if ( (v6 & 4) != 0 || (*a2 & 3) == 2 )
  {
LABEL_4:
    if ( (v6 & 8) != 0 )
      goto LABEL_42;
    goto LABEL_5;
  }
LABEL_33:
  LOBYTE(v6) = v4;
  if ( (v4 & 0x20) != 0 )
    goto LABEL_4;
  v67 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 16, 1);
  v67.m128i_i64[0] = 16;
  strcpy((char *)ptr, "not_in_namelist");
  v28 = ptr;
  v29 = (char *)v64;
  v30 = v65;
  v31 = v65 + 1;
  if ( &ptr < v64 || &ptr >= (void **)((char *)v64 + 24 * *((_QWORD *)&v65 + 1)) )
  {
    if ( *((_QWORD *)&v65 + 1) < v31 )
    {
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v29 = (char *)v64;
      v28 = ptr;
      v30 = v65;
    }
    v58 = _mm_loadu_si128(&v67);
    v59 = &v29[24 * v30];
    *(_QWORD *)v59 = v28;
    *(__m128i *)(v59 + 8) = v58;
    v6 = *a2;
    *(_QWORD *)&v65 = v65 + 1;
  }
  else
  {
    v32 = _mm_loadl_epi64(&v67);
    v33 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
    ptr = nullptr;
    v67 = 0;
    if ( *((_QWORD *)&v65 + 1) < v31 )
    {
      v63.m128i_i64[1] = v33.m128i_i64[0];
      v63.m128i_i64[0] = v32.m128i_i64[0];
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v29 = (char *)v64;
      v33 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
      v30 = v65;
      v32 = _mm_loadl_epi64(&v63);
    }
    v34 = &v29[24 * v30];
    *(_QWORD *)v34 = v28;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
    *(_QWORD *)&v65 = v65 + 1;
    if ( ptr )
    {
      v67.m128i_i64[0] = 0;
      qfree(ptr);
    }
    v6 = *a2;
  }
  if ( (v6 & 8) != 0 )
  {
LABEL_42:
    v67 = 0;
    ptr = nullptr;
    v35 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
    ptr = v35;
    v67.m128i_i64[0] = 7;
    *(_DWORD *)v35 = 1818391920;
    v35[2] = 25449;
    *((_BYTE *)ptr + 6) = 0;
    v36 = v65;
    v37 = (char *)v64;
    v38 = v65 + 1;
    if ( &ptr < v64 || &ptr >= (void **)((char *)v64 + 24 * *((_QWORD *)&v65 + 1)) )
    {
      if ( *((_QWORD *)&v65 + 1) < v38 )
      {
        v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
        v37 = (char *)v64;
        v36 = v65;
      }
      v56 = _mm_loadu_si128(&v67);
      v57 = &v37[24 * v36];
      *(_QWORD *)v57 = ptr;
      *(__m128i *)(v57 + 8) = v56;
      v43 = *a2;
      *(_QWORD *)&v65 = v65 + 1;
    }
    else
    {
      v39 = ptr;
      v40 = _mm_loadl_epi64(&v67);
      ptr = nullptr;
      v41 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
      v67 = 0;
      if ( *((_QWORD *)&v65 + 1) < v38 )
      {
        v63.m128i_i64[1] = v41.m128i_i64[0];
        v63.m128i_i64[0] = v40.m128i_i64[0];
        v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
        v37 = (char *)v64;
        v41 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
        v36 = v65;
        v40 = _mm_loadl_epi64(&v63);
      }
      v42 = &v37[24 * v36];
      *(_QWORD *)v42 = v39;
      *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(v40, v41);
      *(_QWORD *)&v65 = v65 + 1;
      if ( ptr )
      {
        v67.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v43 = *a2;
    }
    if ( (v43 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_50;
  }
LABEL_5:
  if ( (v6 & 0x10) == 0 )
    goto LABEL_6;
LABEL_50:
  v67 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v67.m128i_i64[0] = 5;
  strcpy((char *)ptr, "weak");
  v44 = v65;
  v45 = (char *)v64;
  v46 = v65 + 1;
  if ( &ptr < v64 || &ptr >= (void **)((char *)v64 + 24 * *((_QWORD *)&v65 + 1)) )
  {
    if ( *((_QWORD *)&v65 + 1) < v46 )
    {
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v45 = (char *)v64;
      v44 = v65;
    }
    v54 = _mm_loadu_si128(&v67);
    v55 = &v45[24 * v44];
    *(_QWORD *)v55 = ptr;
    *(__m128i *)(v55 + 8) = v54;
    *(_QWORD *)&v65 = v65 + 1;
  }
  else
  {
    v47 = ptr;
    v48 = _mm_loadl_epi64(&v67);
    ptr = nullptr;
    v49 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
    v67 = 0;
    if ( *((_QWORD *)&v65 + 1) < v46 )
    {
      v63.m128i_i64[1] = v49.m128i_i64[0];
      v63.m128i_i64[0] = v48.m128i_i64[0];
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v45 = (char *)v64;
      v49 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
      v44 = v65;
      v48 = _mm_loadl_epi64(&v63);
    }
    v50 = &v45[24 * v44];
    *(_QWORD *)v50 = v47;
    *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64(v48, v49);
    *(_QWORD *)&v65 = v65 + 1;
    if ( ptr )
    {
      v67.m128i_i64[0] = 0;
      qfree(ptr);
      if ( *((_QWORD *)a2 + 2) <= 1u )
        goto LABEL_7;
      goto LABEL_56;
    }
  }
LABEL_6:
  if ( *((_QWORD *)a2 + 2) <= 1u )
    goto LABEL_7;
LABEL_56:
  v51 = v65;
  v52 = (char *)v64;
  if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
  {
    v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
    v51 = v65;
    v52 = (char *)v64;
  }
  v53 = &v52[24 * v51];
  *(_QWORD *)v53 = 0;
  *(_OWORD *)(v53 + 8) = 0;
  *(_QWORD *)&v65 = v65 + 1;
  sub_35A790((char **)v53);
LABEL_7:
  if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    v8 = v65;
    v9 = (char *)v64;
    if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
    {
      v64 = (void *)qvector_reserve(&v64, v64, v65 + 1, 24);
      v8 = v65;
      v9 = (char *)v64;
    }
    v10 = &v9[24 * v8];
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    *(_QWORD *)&v65 = v65 + 1;
    sub_35A790((char **)v10);
  }
  sub_421D60(a1, (__int64 *)&v64, " ");
  v11 = (char *)v64;
  if ( v64 )
  {
    v12 = v65;
    if ( (_QWORD)v65 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[24 * v13];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          qfree(v15);
          v11 = (char *)v64;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v65 = 0;
    qfree(v11);
  }
  return a1;
}
