unsigned __int64 __fastcall sub_5D23B0(int a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  char *v6; // rbx
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rsi
  const char *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  void *v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  void *v21; // rdi
  const char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  void *v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  void *v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  size_t nb; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-70h]
  size_t nc; // [rsp+8h] [rbp-70h]
  size_t na; // [rsp+8h] [rbp-70h]
  __m128i v45; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v47; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v6 = (char *)&unk_2B05F80;
  v48 = __readfsqword(0x28u);
  if ( a2 )
  {
    while ( 1 )
    {
LABEL_8:
      v9 = a2[1];
      v10 = *v6;
      v11 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v36 = qvector_reserve(a2, v11, v9 + 1, 1);
        *a2 = v36;
        v11 = v36;
        v9 = a2[1];
      }
      *(_BYTE *)(v11 + v9) = v10;
      ++a2[1];
      if ( a3 )
        goto LABEL_11;
      if ( a4 )
        break;
      v6 += 24;
      if ( v6 == algn_2B06028 )
        return v48 - __readfsqword(0x28u);
    }
  }
  else
  {
    if ( a3 )
      goto LABEL_11;
    if ( !a4 )
    {
      do
        v6 += 24;
      while ( v6 != algn_2B06028 );
      return v48 - __readfsqword(0x28u);
    }
  }
  while ( 1 )
  {
    v22 = *((const char **)v6 + 1);
    ptr = nullptr;
    v47 = 0;
    if ( v22 )
    {
      v45.m128i_i64[1] = (__int64)v22;
      nc = strlen(v22);
      v45.m128i_i64[0] = nc + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, nc + 1, 1);
      v47.m128i_i64[0] = v45.m128i_i64[0];
      memmove(ptr, (const void *)v45.m128i_i64[1], nc);
      *((_BYTE *)ptr + nc) = 0;
    }
    v23 = a4[1];
    v24 = *a4;
    v25 = a4[2];
    v26 = v23 + 1;
    if ( (unsigned __int64)&ptr < *a4 || (unsigned __int64)&ptr >= v24 + 24 * v25 )
    {
      if ( v25 < v26 )
      {
        v37 = qvector_reserve(a4, v24, v23 + 1, 24);
        *a4 = v37;
        v24 = v37;
        v23 = a4[1];
      }
      v32 = _mm_loadu_si128(&v47);
      v33 = v24 + 24 * v23;
      *(_QWORD *)v33 = ptr;
      *(__m128i *)(v33 + 8) = v32;
      ++a4[1];
    }
    else
    {
      v27 = ptr;
      v28 = _mm_loadl_epi64(&v47);
      ptr = nullptr;
      v29 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
      v47 = 0;
      na = (size_t)v27;
      if ( v25 < v26 )
      {
        v45.m128i_i64[1] = v29.m128i_i64[0];
        v45.m128i_i64[0] = v28.m128i_i64[0];
        v39 = qvector_reserve(a4, v24, v23 + 1, 24);
        *a4 = v39;
        v24 = v39;
        v29 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
        v23 = a4[1];
        v28 = _mm_loadl_epi64(&v45);
      }
      v30 = v24 + 24 * v23;
      *(_QWORD *)v30 = na;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64(v28, v29);
      v31 = ptr;
      ++a4[1];
      if ( v31 )
      {
        v47.m128i_i64[0] = 0;
        qfree(v31);
      }
    }
    v6 += 24;
    if ( v6 == algn_2B06028 )
      return v48 - __readfsqword(0x28u);
    if ( a2 )
      goto LABEL_8;
    if ( a3 )
    {
      while ( 1 )
      {
LABEL_11:
        v12 = *((const char **)v6 + 2);
        ptr = nullptr;
        v47 = 0;
        if ( v12 )
        {
          v45.m128i_i64[1] = (__int64)v12;
          nb = strlen(v12);
          v45.m128i_i64[0] = nb + 1;
          ptr = (void *)qvector_reserve(&ptr, 0, nb + 1, 1);
          v47.m128i_i64[0] = v45.m128i_i64[0];
          memmove(ptr, (const void *)v45.m128i_i64[1], nb);
          *((_BYTE *)ptr + nb) = 0;
        }
        v13 = a3[1];
        v14 = *a3;
        v15 = a3[2];
        v16 = v13 + 1;
        if ( (unsigned __int64)&ptr < *a3 || (unsigned __int64)&ptr >= v14 + 24 * v15 )
        {
          if ( v15 < v16 )
          {
            v38 = qvector_reserve(a3, v14, v13 + 1, 24);
            *a3 = v38;
            v14 = v38;
            v13 = a3[1];
          }
          v34 = _mm_loadu_si128(&v47);
          v35 = v14 + 24 * v13;
          *(_QWORD *)v35 = ptr;
          *(__m128i *)(v35 + 8) = v34;
          ++a3[1];
        }
        else
        {
          v17 = ptr;
          v18 = _mm_loadl_epi64(&v47);
          ptr = nullptr;
          v19 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
          v47 = 0;
          n = (size_t)v17;
          if ( v15 < v16 )
          {
            v45.m128i_i64[1] = v19.m128i_i64[0];
            v45.m128i_i64[0] = v18.m128i_i64[0];
            v40 = qvector_reserve(a3, v14, v13 + 1, 24);
            *a3 = v40;
            v14 = v40;
            v19 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
            v13 = a3[1];
            v18 = _mm_loadl_epi64(&v45);
          }
          v20 = v14 + 24 * v13;
          *(_QWORD *)v20 = n;
          *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v18, v19);
          v21 = ptr;
          ++a3[1];
          if ( v21 )
          {
            v47.m128i_i64[0] = 0;
            qfree(v21);
          }
        }
        if ( a4 )
          break;
        v6 += 24;
        if ( v6 == algn_2B06028 )
          return v48 - __readfsqword(0x28u);
        if ( a2 )
          goto LABEL_8;
      }
    }
  }
}

