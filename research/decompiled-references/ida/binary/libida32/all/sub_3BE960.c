__int64 *__fastcall sub_3BE960(__int64 *a1, __int64 a2)
{
  bool v3; // cc
  bool v5; // zf
  __int64 v6; // r15
  __int64 v7; // r13
  char *v8; // r14
  _DWORD *v9; // rax
  unsigned __int64 v10; // rcx
  char *v11; // rax
  char *v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  char *v17; // rsi
  unsigned __int64 v18; // rdi
  void *v19; // r12
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  char *v22; // rax
  __m128i *v23; // rax
  void **v24; // rsi
  __int64 v25; // rax
  void *v26; // rbx
  unsigned __int64 v27; // rdi
  __m128i v28; // xmm0
  void **v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  void **v33; // rax
  char *v34; // rdi
  __int64 v35; // rdx
  char *v36; // r14
  char *v37; // rax
  __int64 v38; // rcx
  char *v39; // rbx
  unsigned __int64 v40; // r12
  size_t v41; // r15
  __int64 v42; // r13
  __int64 v43; // r8
  __int64 v44; // rsi
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v49; // rbx
  __int64 v50; // r12
  char *v51; // rdx
  void *v52; // rax
  __m128i v53; // xmm0
  char *v54; // rax
  __int64 v55; // rax
  __m128i v56; // [rsp+0h] [rbp-88h] BYREF
  void *v57; // [rsp+10h] [rbp-78h] BYREF
  __int128 v58; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v60; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8) <= 1u;
  v61 = __readfsqword(0x28u);
  v58 = 0;
  v57 = nullptr;
  if ( !v3 )
  {
    v5 = *(_BYTE *)(a2 + 48) == 0;
    v60 = 0;
    ptr = nullptr;
    if ( v5 )
    {
      v6 = 8;
      v7 = 7;
      v8 = "comment";
    }
    else
    {
      v6 = 13;
      v7 = 12;
      v8 = "type comment";
    }
    v9 = (_DWORD *)qvector_reserve(&ptr, 0, v6, 1);
    ptr = v9;
    v60.m128i_i64[0] = v6;
    if ( (unsigned int)v7 < 8 )
    {
      *v9 = *(_DWORD *)v8;
      *(_DWORD *)((char *)v9 + (unsigned int)v7 - 4) = *(_DWORD *)&v8[(unsigned int)v7 - 4];
    }
    else
    {
      v10 = (unsigned __int64)(v9 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v9 = *(_QWORD *)v8;
      *(_QWORD *)((char *)v9 + v7 - 8) = *(_QWORD *)&v8[v7 - 8];
      v11 = (char *)v9 - v10;
      v12 = (char *)(v8 - v11);
      if ( (((_DWORD)v7 + (_DWORD)v11) & 0xFFFFFFF8) >= 8 )
      {
        v13 = (v7 + (_DWORD)v11) & 0xFFFFFFF8;
        v14 = 0;
        do
        {
          v15 = v14;
          v14 += 8;
          *(_QWORD *)(v10 + v15) = *(_QWORD *)&v12[v15];
        }
        while ( v14 < v13 );
      }
    }
    *((_BYTE *)ptr + v7) = 0;
    v16 = v58;
    v17 = (char *)v57;
    v18 = v58 + 1;
    if ( &ptr < v57 || &ptr >= (void **)((char *)v57 + 24 * *((_QWORD *)&v58 + 1)) )
    {
      if ( *((_QWORD *)&v58 + 1) < v18 )
      {
        v57 = (void *)qvector_reserve(&v57, v57, v58 + 1, 24);
        v17 = (char *)v57;
        v16 = v58;
      }
      v53 = _mm_loadu_si128(&v60);
      v54 = &v17[24 * v16];
      *(_QWORD *)v54 = ptr;
      *(__m128i *)(v54 + 8) = v53;
      *(_QWORD *)&v58 = v58 + 1;
    }
    else
    {
      v19 = ptr;
      v20 = _mm_loadl_epi64(&v60);
      ptr = nullptr;
      v21 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
      v60 = 0;
      if ( *((_QWORD *)&v58 + 1) < v18 )
      {
        v56.m128i_i64[1] = v21.m128i_i64[0];
        v56.m128i_i64[0] = v20.m128i_i64[0];
        v57 = (void *)qvector_reserve(&v57, v57, v58 + 1, 24);
        v17 = (char *)v57;
        v21 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
        v16 = v58;
        v20 = _mm_loadl_epi64(&v56);
      }
      v22 = &v17[24 * v16];
      *(_QWORD *)v22 = v19;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
      *(_QWORD *)&v58 = v58 + 1;
      if ( ptr )
      {
        v60.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
  }
  if ( *(_QWORD *)(a2 + 32) <= 1u )
    goto LABEL_24;
  v60 = 0;
  ptr = nullptr;
  v23 = (__m128i *)qvector_reserve(&ptr, 0, 19, 1);
  ptr = v23;
  v60.m128i_i64[0] = 19;
  *v23 = _mm_load_si128((const __m128i *)&xmmword_2383870);
  v24 = (void **)v57;
  v23[1].m128i_i16[0] = 29806;
  v25 = v58;
  v26 = ptr;
  v27 = v58 + 1;
  *((_BYTE *)ptr + 18) = 0;
  if ( &ptr < v24 || &ptr >= &v24[3 * *((_QWORD *)&v58 + 1)] )
  {
    if ( *((_QWORD *)&v58 + 1) < v27 )
    {
      v57 = (void *)qvector_reserve(&v57, v24, v27, 24);
      v24 = (void **)v57;
      v26 = ptr;
      v25 = v58;
    }
    v28 = _mm_loadu_si128(&v60);
    v29 = &v24[3 * v25];
    *v29 = v26;
    *(__m128i *)(v29 + 1) = v28;
    v30 = v58 + 1;
    *(_QWORD *)&v58 = v58 + 1;
  }
  else
  {
    v31 = _mm_loadl_epi64(&v60);
    v32 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
    ptr = nullptr;
    v60 = 0;
    if ( *((_QWORD *)&v58 + 1) < v27 )
    {
      v56.m128i_i64[1] = v32.m128i_i64[0];
      v56.m128i_i64[0] = v31.m128i_i64[0];
      v57 = (void *)qvector_reserve(&v57, v24, v27, 24);
      v24 = (void **)v57;
      v32 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
      v25 = v58;
      v31 = _mm_loadl_epi64(&v56);
    }
    v33 = &v24[3 * v25];
    *v33 = v26;
    *(__m128i *)(v33 + 1) = _mm_unpacklo_epi64(v31, v32);
    v30 = v58 + 1;
    *(_QWORD *)&v58 = v58 + 1;
    if ( ptr )
    {
      v60.m128i_i64[0] = 0;
      qfree(ptr);
LABEL_24:
      v30 = v58;
    }
  }
  *a1 = 0;
  v34 = (char *)v57;
  *(_OWORD *)(a1 + 1) = 0;
  if ( v30 )
  {
    v35 = v30 - 1;
    v36 = &v34[24 * v30];
    if ( v36 == v34 )
    {
      if ( v30 == 1 )
        goto LABEL_48;
    }
    else
    {
      v37 = v34;
      do
      {
        v38 = *((_QWORD *)v37 + 1);
        if ( v38 )
          v35 = v35 + v38 - 1;
        v37 += 24;
      }
      while ( v37 != v36 );
      if ( !v35 )
      {
LABEL_32:
        v39 = v34;
        do
        {
          v45 = a1[1];
          if ( v45 > 1 )
          {
            v46 = *a1;
            if ( a1[2] < v45 + 1 )
            {
              v47 = qvector_reserve(a1, v46, v45 + 1, 1);
              *a1 = v47;
              v46 = v47;
            }
            a1[1] = v45 + 1;
            *(_BYTE *)(v46 + v45) = 0;
            *(_BYTE *)(*a1 + v45 - 1) = 44;
          }
          v40 = *((_QWORD *)v39 + 1);
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v40 != 1 )
            {
              v42 = a1[1];
              v43 = v40 - 1;
              if ( v42 )
              {
                --v42;
                v43 = v41 + v42;
                v40 += v42;
              }
              v44 = *a1;
              if ( a1[2] < v40 )
              {
                v56.m128i_i64[0] = v43;
                v55 = qvector_reserve(a1, v44, v40, 1);
                *a1 = v55;
                v43 = v56.m128i_i64[0];
                v44 = v55;
              }
              a1[1] = v40;
              *(_BYTE *)(v44 + v43) = 0;
              memcpy((void *)(v42 + *a1), *(const void **)v39, v41);
            }
          }
          v39 += 24;
        }
        while ( v36 != v39 );
        v34 = (char *)v57;
LABEL_48:
        if ( v34 )
        {
          v49 = v58;
          if ( (_QWORD)v58 )
          {
            v50 = 0;
            do
            {
              v51 = &v34[24 * v50];
              v52 = *(void **)v51;
              if ( *(_QWORD *)v51 )
              {
                *((_QWORD *)v51 + 1) = 0;
                qfree(v52);
                v34 = (char *)v57;
              }
              ++v50;
            }
            while ( v49 != v50 );
          }
          goto LABEL_54;
        }
        return a1;
      }
    }
    *a1 = qvector_reserve(a1, 0, v35, 1);
    v34 = (char *)v57;
    v36 = (char *)v57 + 24 * v58;
    if ( v57 == v36 )
      goto LABEL_48;
    goto LABEL_32;
  }
  if ( v34 )
  {
LABEL_54:
    *(_QWORD *)&v58 = 0;
    qfree(v34);
  }
  return a1;
}

