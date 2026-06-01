unsigned __int64 __fastcall sub_197020(__int64 *a1, const char *a2, __int64 a3, int a4, const void *a5)
{
  __int64 v8; // rbx
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  char *v20; // rsi
  unsigned __int64 v21; // rdx
  void **v22; // rcx
  __int64 v23; // r8
  unsigned __int64 i; // r13
  __int64 *v25; // rbp
  size_t v26; // rax
  size_t v27; // rbx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  unsigned __int64 v31; // rax
  void **v32; // rax
  size_t v33; // rbp
  bool v34; // zf
  void *v35; // r15
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // rax
  void *v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  void *v46; // rdi
  size_t v47; // r13
  __int64 v48; // rax
  void *v49; // rax
  char *v50; // rbp
  size_t v51; // r14
  unsigned __int64 v52; // rbp
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  void *v59; // rax
  void **v60; // r14
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __m128i v68; // [rsp+8h] [rbp-70h] BYREF
  __int64 v69; // [rsp+18h] [rbp-60h]
  void *v70; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+38h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v8 = a1[1];
  *(_OWORD *)n = 0;
  v70 = nullptr;
  if ( a2 )
  {
    v68.m128i_i64[1] = (__int64)a2;
    v9 = strlen(a2);
    v68.m128i_i64[0] = v9 + 1;
    v70 = (void *)qvector_reserve(&v70, 0, v9 + 1, 1);
    n[0] = v9 + 1;
    memmove(v70, a2, v9);
    *((_BYTE *)v70 + v9) = 0;
    v10 = a1[1];
  }
  else
  {
    v10 = v8;
  }
  v11 = *a1;
  v12 = a1[2];
  v13 = v10 + 1;
  if ( (unsigned __int64)&v70 < *a1 || (v14 = v11 + 24 * v12, (unsigned __int64)&v70 >= v14) )
  {
    if ( v12 < v13 )
    {
      v55 = qvector_reserve(a1, v11, v10 + 1, 24);
      *a1 = v55;
      v11 = v55;
      v10 = a1[1];
    }
    v15 = _mm_loadu_si128((const __m128i *)n);
    v16 = v11 + 24 * v10;
    *(_QWORD *)v16 = v70;
    *(__m128i *)(v16 + 8) = v15;
    ++a1[1];
    goto LABEL_8;
  }
  v35 = v70;
  v36 = _mm_loadl_epi64((const __m128i *)n);
  v70 = nullptr;
  v37 = _mm_loadl_epi64((const __m128i *)&n[1]);
  *(_OWORD *)n = 0;
  if ( v12 < v13 )
  {
    v68.m128i_i64[1] = v37.m128i_i64[0];
    v68.m128i_i64[0] = v36.m128i_i64[0];
    v57 = qvector_reserve(a1, v11, v10 + 1, 24);
    *a1 = v57;
    v11 = v57;
    v37 = _mm_loadl_epi64((const __m128i *)&v68.m128i_u64[1]);
    v10 = a1[1];
    v36 = _mm_loadl_epi64(&v68);
  }
  v38 = v11 + 24 * v10;
  *(_QWORD *)v38 = v35;
  *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64(v36, v37);
  v39 = v70;
  ++a1[1];
  if ( !v39 )
  {
LABEL_8:
    v17 = v8 + 1;
    if ( (int)a3 < 0 )
      goto LABEL_9;
    goto LABEL_35;
  }
  n[0] = 0;
  v17 = v8 + 1;
  qfree(v39, v11, v12, v14, a5);
  if ( (int)a3 < 0 )
    goto LABEL_9;
LABEL_35:
  v40 = a1[7];
  v41 = a1[6];
  BYTE4(v70) = 0;
  LODWORD(v70) = -1;
  if ( v17 < v40 )
  {
LABEL_41:
    a1[7] = v17;
    goto LABEL_42;
  }
  if ( v40 < v17 )
  {
    v42 = a1[8];
    v43 = a1 + 6;
    if ( (unsigned __int64)&v70 < v41 || (unsigned __int64)&v70 >= v41 + 8 * v42 )
    {
      if ( v42 >= v17 || (v65 = qvector_reserve(v43, v41, v17, 8), a1[6] = v65, v41 = v65, v40 = a1[7], v40 < v17) )
      {
        do
        {
          *(_QWORD *)(v41 + 8 * v40) = v70;
          v61 = v40;
          v41 = a1[6];
          ++v40;
        }
        while ( v8 != v61 );
      }
    }
    else if ( v42 >= v17 || (v66 = qvector_reserve(v43, v41, v17, 8), a1[6] = v66, v41 = v66, v40 = a1[7], v40 < v17) )
    {
      do
      {
        v44 = v41 + 8 * v40;
        *(_DWORD *)v44 = -1;
        *(_BYTE *)(v44 + 4) = 0;
        v45 = v40;
        v41 = a1[6];
        ++v40;
      }
      while ( v8 != v45 );
    }
    goto LABEL_41;
  }
LABEL_42:
  v69 = a3;
  *(_DWORD *)(v41 + 8 * v8) = a3;
  *(_BYTE *)(v41 + 8 * v8 + 4) = BYTE4(v69);
LABEL_9:
  v18 = a1[10];
  LODWORD(v70) = 0;
  v19 = a1[9];
  if ( v17 >= v18 )
  {
    if ( v18 >= v17 )
      goto LABEL_11;
    v29 = a1[11];
    v30 = a1 + 9;
    if ( (unsigned __int64)&v70 < v19 || (unsigned __int64)&v70 >= v19 + 4 * v29 )
    {
      if ( v29 >= v17 || (v62 = qvector_reserve(v30, v19, v17, 4), v18 = a1[10], a1[9] = v62, v19 = v62, v18 < v17) )
      {
        do
        {
          v31 = v18;
          *(_DWORD *)(v19 + 4 * v18++) = 0;
          v19 = a1[9];
        }
        while ( v8 != v31 );
      }
    }
    else if ( v29 >= v17 || (v63 = qvector_reserve(v30, v19, v17, 4), v18 = a1[10], a1[9] = v63, v19 = v63, v18 < v17) )
    {
      do
      {
        v56 = v18;
        *(_DWORD *)(v19 + 4 * v18++) = 0;
        v19 = a1[9];
      }
      while ( v8 != v56 );
    }
  }
  a1[10] = v17;
LABEL_11:
  *(_DWORD *)(v19 + 4 * v8) = a4;
  v20 = nullptr;
  *(_OWORD *)n = 0;
  v70 = nullptr;
  v70 = (void *)qvector_reserve(&v70, 0, 1, 1);
  n[0] = 1;
  *(_BYTE *)v70 = 0;
  i = a1[4];
  if ( v17 < i )
  {
    v52 = v17;
    do
    {
      v21 = a1[3];
      v53 = (__int64 *)(v21 + 24 * v52);
      v54 = *v53;
      if ( *v53 )
      {
        v53[1] = 0;
        qfree(v54, 0, v21, v22, v23);
      }
      ++v52;
    }
    while ( v52 < i );
    a1[4] = v17;
    goto LABEL_13;
  }
  if ( i >= v17 )
    goto LABEL_13;
  v32 = (void **)a1[3];
  v21 = a1[5];
  v20 = (char *)v32;
  if ( &v70 < v32 || (v22 = &v32[3 * v21], &v70 >= v22) )
  {
    if ( v21 >= v17 || (v48 = qvector_reserve(a1 + 3, v32, v17, 24), i = a1[4], a1[3] = v48, v20 = (char *)v48, i < v17) )
    {
      while ( 1 )
      {
        v50 = &v20[24 * i];
        *(_QWORD *)v50 = 0;
        *(_OWORD *)(v50 + 8) = 0;
        v51 = n[0];
        if ( n[0] )
        {
          v49 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)v50 = v49;
          *((_QWORD *)v50 + 2) = v51;
          v20 = (char *)v70;
          memcpy(v49, v70, v51);
          *((_QWORD *)v50 + 1) = v51;
        }
        if ( ++i >= v17 )
          break;
        v20 = (char *)a1[3];
      }
    }
    a1[4] = v17;
    goto LABEL_13;
  }
  v33 = n[0];
  if ( n[0] )
  {
    v64 = (void *)qalloc_or_throw(n[0]);
    v20 = (char *)v70;
    v68.m128i_i64[0] = (__int64)v64;
    memcpy(v64, v70, v33);
    if ( a1[5] >= v17 )
      goto LABEL_28;
    v32 = (void **)a1[3];
  }
  else
  {
    v68.m128i_i64[0] = 0;
    if ( v21 >= v17 )
      goto LABEL_65;
  }
  v20 = (char *)v32;
  a1[3] = qvector_reserve(a1 + 3, v32, v17, 24);
LABEL_28:
  for ( i = a1[4]; i < v17; ++i )
  {
    v32 = (void **)a1[3];
LABEL_65:
    v21 = 3 * i;
    v60 = &v32[3 * i];
    *v60 = nullptr;
    *(_OWORD *)(v60 + 1) = 0;
    if ( v33 )
    {
      v59 = (void *)qalloc_or_throw(v33);
      *v60 = v59;
      v20 = (char *)v68.m128i_i64[0];
      v60[2] = (void *)v33;
      memcpy(v59, v20, v33);
      v60[1] = (void *)v33;
    }
  }
  v34 = v68.m128i_i64[0] == 0;
  a1[4] = v17;
  if ( !v34 )
    qfree(v68.m128i_i64[0], v20, v21, v22, v23);
LABEL_13:
  if ( v70 )
  {
    n[0] = 0;
    qfree(v70, v20, v21, v22, v23);
  }
  v25 = (__int64 *)(a1[3] + 24 * v8);
  if ( a5 && (v26 = strlen((const char *)a5), (v27 = v26) != 0) )
  {
    v46 = (void *)*v25;
    v47 = v26 + 1;
    if ( v25[2] < v26 + 1 )
    {
      v58 = qvector_reserve(v25, *v25, v26 + 1, 1);
      *v25 = v58;
      v46 = (void *)v58;
    }
    v25[1] = v47;
    memmove(v46, a5, v27);
    *(_BYTE *)(*v25 + v27) = 0;
  }
  else
  {
    v25[1] = 0;
  }
  return v72 - __readfsqword(0x28u);
}
