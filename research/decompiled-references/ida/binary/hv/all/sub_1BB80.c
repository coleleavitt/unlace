unsigned __int64 sub_1BB80(
        __int64 *a1,
        const char *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        ...)
{
  __int64 v10; // r13
  size_t v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int gp_offset; // eax
  const char *v19; // r15
  size_t v20; // rax
  __int64 v21; // r14
  size_t v22; // rbp
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  void *v25; // rbp
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  void **v34; // rbp
  __int64 v35; // r12
  void **v36; // rbx
  void *v37; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // rbp
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbp
  __int128 v48; // xmm0
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rsi
  size_t v52; // rdx
  __int64 v53; // rdi
  void *v54; // rax
  _QWORD *v55; // rcx
  const void **v56; // rsi
  __int64 v57; // rax
  size_t n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  __m128i v60; // [rsp+10h] [rbp-B8h] BYREF
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v62; // [rsp+28h] [rbp-A0h] BYREF
  gcc_va_list va; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-70h]

  v64 = __readfsqword(0x28u);
  v10 = a1[4];
  if ( v10 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2735);
    BUG();
  }
  va_start(va, a10);
  n = (size_t)(a1 + 3);
  ptr = nullptr;
  v62 = 0;
  if ( a2 )
  {
    v12 = strlen(a2);
    v60.m128i_i64[0] = v12 + 1;
    ptr = (void *)sub_96080(&ptr, 0, v12 + 1, 1);
    v62.m128i_i64[0] = v12 + 1;
    memmove(ptr, a2, v12);
    *((_BYTE *)ptr + v12) = 0;
    v13 = a1[4];
  }
  else
  {
    v13 = 0;
  }
  v14 = a1[3];
  v15 = a1[5];
  v16 = v13 + 1;
  if ( (unsigned __int64)&ptr >= v14 && (unsigned __int64)&ptr < v14 + 24 * v15 )
  {
    v41 = ptr;
    v42 = _mm_loadl_epi64(&v62);
    ptr = nullptr;
    v43 = _mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
    v62 = 0;
    if ( v15 < v16 )
    {
      v60.m128i_i64[1] = v43.m128i_i64[0];
      v60.m128i_i64[0] = v42.m128i_i64[0];
      v57 = sub_96080(n, v14, v13 + 1, 24);
      a1[3] = v57;
      v14 = v57;
      v43 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
      v13 = a1[4];
      v42 = _mm_loadl_epi64(&v60);
    }
    v44 = v14 + 24 * v13;
    *(_QWORD *)v44 = v41;
    *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64(v42, v43);
    v45 = ptr;
    ++a1[4];
    if ( v45 )
    {
      v62.m128i_i64[0] = 0;
      j__free(v45);
    }
    goto LABEL_7;
  }
  if ( v15 < v16 )
  {
    v39 = sub_96080(n, v14, v13 + 1, 24);
    goto LABEL_28;
  }
LABEL_6:
  v17 = v14 + 24 * v13;
  *(_QWORD *)v17 = ptr;
  *(__m128i *)(v17 + 8) = _mm_loadu_si128(&v62);
  ++a1[4];
LABEL_7:
  gp_offset = va[0].gp_offset;
  if ( va[0].gp_offset > 0x2F )
  {
    while ( 1 )
    {
      v19 = *(const char **)va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      if ( !v19 )
        break;
LABEL_9:
      ptr = nullptr;
      v62 = 0;
      v20 = strlen(v19);
      v21 = v20 + 1;
      v22 = v20;
      ptr = (void *)sub_96080(&ptr, 0, v20 + 1, 1);
      v62.m128i_i64[0] = v21;
      memmove(ptr, v19, v22);
      *((_BYTE *)ptr + v22) = 0;
      v13 = a1[4];
      v14 = a1[3];
      v23 = a1[5];
      v24 = v13 + 1;
      if ( (unsigned __int64)&ptr < v14 || (unsigned __int64)&ptr >= v14 + 24 * v23 )
      {
        if ( v23 < v24 )
        {
          v39 = sub_96080(n, v14, v13 + 1, 24);
LABEL_28:
          a1[3] = v39;
          v14 = v39;
          v13 = a1[4];
        }
        goto LABEL_6;
      }
      v25 = ptr;
      v26 = _mm_loadl_epi64(&v62);
      ptr = nullptr;
      v27 = _mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
      v62 = 0;
      if ( v23 < v24 )
      {
        v60.m128i_i64[1] = v27.m128i_i64[0];
        v60.m128i_i64[0] = v26.m128i_i64[0];
        v40 = sub_96080(n, v14, v13 + 1, 24);
        a1[3] = v40;
        v14 = v40;
        v27 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
        v13 = a1[4];
        v26 = _mm_loadl_epi64(&v60);
      }
      v28 = v14 + 24 * v13;
      *(_QWORD *)v28 = v25;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v26, v27);
      v29 = ptr;
      ++a1[4];
      if ( !v29 )
        goto LABEL_7;
      v62.m128i_i64[0] = 0;
      j__free(v29);
      gp_offset = va[0].gp_offset;
      if ( va[0].gp_offset <= 0x2F )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v19 = *(const char **)((char *)va[0].reg_save_area + gp_offset);
    va[0].gp_offset = gp_offset + 8;
    if ( v19 )
      goto LABEL_9;
  }
  v30 = a1[4];
  if ( v30 )
  {
    v47 = 0;
    v48 = 0;
    v19 = (const char *)sub_96030(24 * v30);
    v49 = (__int64)v19;
    do
    {
      v50 = a1[3];
      *(_QWORD *)v49 = 0;
      *(_OWORD *)(v49 + 8) = v48;
      v51 = v50 + 24 * v47;
      v52 = *(_QWORD *)(v51 + 8);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v51 + 8);
        v60.m128i_i64[0] = v49;
        v60.m128i_i64[1] = v51;
        na = v52;
        v54 = (void *)sub_96030(v53);
        v56 = (const void **)v60.m128i_i64[1];
        v55 = (_QWORD *)v60.m128i_i64[0];
        *(_QWORD *)(v60.m128i_i64[0] + 16) = na;
        *v55 = v54;
        memcpy(v54, *v56, na);
        v49 = v60.m128i_i64[0];
        v48 = 0;
        *(_QWORD *)(v60.m128i_i64[0] + 8) = na;
      }
      ++v47;
      v49 += 24;
    }
    while ( v30 != v47 );
  }
  v31 = a1[1];
  v32 = *a1;
  if ( a1[2] < (unsigned __int64)(v31 + 1) )
  {
    v46 = sub_96080(a1, v32, v31 + 1, 24);
    *a1 = v46;
    v31 = a1[1];
    v32 = v46;
  }
  v33 = v32 + 24 * v31;
  *(_OWORD *)(v33 + 8) = 0;
  *(_QWORD *)v33 = 0;
  ++a1[1];
  v34 = *(void ***)v33;
  v35 = *(_QWORD *)(v33 + 8);
  *(_QWORD *)v33 = v19;
  *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
  if ( v34 )
  {
    v36 = v34;
    if ( v35 )
    {
      do
      {
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = nullptr;
          j__free(v37);
        }
        ++v10;
        v36 += 3;
      }
      while ( v35 != v10 );
    }
    j__free(v34);
  }
  return v64 - __readfsqword(0x28u);
}

