__int64 __fastcall sub_43CC20(__int64 *a1, __int64 a2, __m128 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  QT::QAbstractItemView *v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r15
  __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  void *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rsi
  __int32 v17; // eax
  __int64 v18; // rax
  const void **v19; // r14
  size_t v20; // rbp
  _QWORD *v21; // r15
  void *v22; // rbp
  void *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // r12
  size_t v28; // rbx
  int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r15
  char *v33; // rdx
  char *v34; // r8
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r14d
  void *v40; // rbx
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  __m128i v44; // xmm0
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  _QWORD *src; // [rsp+0h] [rbp-A8h]
  void *srca; // [rsp+0h] [rbp-A8h]
  char *srcb; // [rsp+0h] [rbp-A8h]
  __m128i n; // [rsp+8h] [rbp-A0h] BYREF
  char *v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+20h] [rbp-88h] BYREF
  __int128 v58; // [rsp+28h] [rbp-80h]
  void *v59; // [rsp+40h] [rbp-68h] BYREF
  __m128i v60; // [rsp+48h] [rbp-60h] BYREF
  int v61; // [rsp+58h] [rbp-50h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v4 = *(_DWORD *)(a2 + 8);
  v62 = __readfsqword(0x28u);
  if ( v4 == 69 )
  {
    v31 = *(_QWORD *)(a2 + 56);
    v32 = *(_QWORD *)(a2 + 40);
    if ( v31 )
    {
      *a1 = qvector_reserve(a1, 0, v31, 32);
      v33 = *(char **)(a2 + 48);
      srcb = &v33[8 * *(_QWORD *)(a2 + 56)];
      if ( v33 != srcb )
      {
        v34 = *(char **)(a2 + 48);
        do
        {
          v38 = 0;
          if ( *(_QWORD *)v34 < *(_QWORD *)(v32 + 240) )
            v38 = *(_QWORD *)(v32 + 232) + 152LL * *(_QWORD *)v34;
          v39 = *(_DWORD *)(v38 + 144);
          v59 = nullptr;
          v40 = nullptr;
          v60 = 0;
          v41 = *(_QWORD *)(v38 + 8);
          if ( v41 )
          {
            v46 = *(_QWORD *)(v38 + 8);
            v56 = v34;
            n.m128i_i64[1] = v38;
            n.m128i_i64[0] = v41;
            v59 = (void *)qalloc_or_throw(v46);
            v40 = v59;
            v60.m128i_i64[1] = n.m128i_i64[0];
            memcpy(v59, *(const void **)n.m128i_i64[1], n.m128i_u64[0]);
            v34 = v56;
            v60.m128i_i64[0] = n.m128i_i64[0];
          }
          v51 = a1[1];
          v50 = *a1;
          v61 = v39;
          v42 = a1[2];
          v43 = v51 + 1;
          if ( (unsigned __int64)&v59 < v50 || (unsigned __int64)&v59 >= v50 + 32 * v42 )
          {
            if ( v42 < v43 )
            {
              n.m128i_i64[0] = (__int64)v34;
              v47 = qvector_reserve(a1, v50, v51 + 1, 32);
              *a1 = v47;
              v50 = v47;
              v34 = (char *)n.m128i_i64[0];
              v51 = a1[1];
            }
            v44 = _mm_loadu_si128(&v60);
            v45 = 32 * v51 + v50;
            *(_QWORD *)v45 = v40;
            *(_DWORD *)(v45 + 24) = v39;
            *(__m128i *)(v45 + 8) = v44;
          }
          else
          {
            v35 = _mm_loadl_epi64(&v60);
            v59 = nullptr;
            v36 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
            v60 = 0;
            if ( v42 < v43 )
            {
              v56 = v34;
              n.m128i_i64[1] = v36.m128i_i64[0];
              n.m128i_i64[0] = v35.m128i_i64[0];
              v49 = qvector_reserve(a1, v50, v51 + 1, 32);
              *a1 = v49;
              v50 = v49;
              v34 = v56;
              v51 = a1[1];
              v36 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
              v35 = _mm_loadl_epi64(&n);
            }
            v37 = v50 + 32 * v51;
            *(_QWORD *)v37 = v40;
            *(_DWORD *)(v37 + 24) = v39;
            *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
          }
          ++a1[1];
          v34 += 8;
        }
        while ( srcb != v34 );
      }
    }
    return 1;
  }
  if ( v4 <= 69 )
  {
    if ( ((v4 - 63) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a2 + 200) )
    {
      v7 = *(QT::QAbstractItemView **)a2;
      QT::QAbstractItemView::model(*(QT::QAbstractItemView **)a2);
      v8 = QT::QAbstractItemView::model(v7);
      v9 = *(_QWORD **)(v8 + 216);
      if ( !v9 )
        v9 = *(_QWORD **)(v8 + 208);
      v10 = *(__int64 **)(a2 + 200);
      v11 = v10[1];
      if ( a1[2] < v11 )
      {
        *a1 = qvector_reserve(a1, *a1, v11, 32);
        v10 = *(__int64 **)(a2 + 200);
        v11 = v10[1];
      }
      v12 = *v10;
      for ( n.m128i_i64[0] = *v10 + 16 * v11; n.m128i_i64[0] != v12; v12 += 16 )
      {
        v57 = 0;
        v58 = 0;
        dirtree_get_abspath_by_cursor(&v57, *v9, v12, 0);
        v16 = &v57;
        sub_42B280((const void **)&v59, (__int64)&v57);
        v18 = sub_42C9E0((const void **)&v59, (const char *)&v57);
        v19 = (const void **)v18;
        if ( v18 )
        {
          v20 = *(_QWORD *)(v18 + 8);
          n.m128i_i32[2] = *(_DWORD *)(v18 + 60);
          if ( v20 )
          {
            srca = (void *)qalloc_or_throw(v20);
            memcpy(srca, *v19, v20);
            v13 = (void *)qalloc_or_throw(v20);
            memcpy(v13, srca, v20);
          }
          else
          {
            srca = nullptr;
            v13 = nullptr;
          }
          v14 = a1[1];
          v15 = *a1;
          if ( a1[2] < (unsigned __int64)(v14 + 1) )
          {
            v48 = qvector_reserve(a1, v15, v14 + 1, 32);
            *a1 = v48;
            v15 = v48;
            v14 = a1[1];
          }
          v16 = (__int64 *)(32 * v14 + v15);
          v17 = n.m128i_i32[2];
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
          *v16 = (__int64)v13;
          *((_DWORD *)v16 + 6) = v17;
          *(__m128 *)(v16 + 1) = a3;
          ++a1[1];
          if ( srca )
            *(double *)a3.m128_u64 = qfree(srca, (const char *)v16);
        }
        if ( v59 )
        {
          v60.m128i_i64[0] = 0;
          *(double *)a3.m128_u64 = qfree(v59, (const char *)v16, *(double *)a3.m128_u64);
        }
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          *(double *)a3.m128_u64 = qfree(v57, (const char *)v16, *(double *)a3.m128_u64);
        }
      }
      return 1;
    }
  }
  else if ( v4 == 70 )
  {
    v5 = *(_QWORD *)(a2 + 56);
    src = *(_QWORD **)(a2 + 40);
    if ( v5 )
    {
      *a1 = qvector_reserve(a1, 0, v5, 32);
      v21 = *(_QWORD **)(a2 + 48);
      for ( n.m128i_i64[0] = (__int64)&v21[*(_QWORD *)(a2 + 56)]; (_QWORD *)n.m128i_i64[0] != v21; ++v21 )
      {
        v27 = src[23] + 80LL * *v21;
        v28 = *(_QWORD *)(v27 + 8);
        v29 = *(_DWORD *)(v27 + 60);
        if ( v28 )
        {
          v22 = (void *)qalloc_or_throw(*(_QWORD *)(v27 + 8));
          memcpy(v22, *(const void **)v27, v28);
          v23 = (void *)qalloc_or_throw(v28);
          memcpy(v23, v22, v28);
        }
        else
        {
          v22 = nullptr;
          v23 = nullptr;
        }
        v24 = a1[1];
        v25 = *a1;
        if ( a1[2] < (unsigned __int64)(v24 + 1) )
        {
          v30 = qvector_reserve(a1, v25, v24 + 1, 32);
          *a1 = v30;
          v25 = v30;
          v24 = a1[1];
        }
        v26 = 32 * v24 + v25;
        *(_QWORD *)v26 = v23;
        *(_DWORD *)(v26 + 24) = v29;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
        ++a1[1];
        if ( v22 )
          qfree(v22, (const char *)v26);
      }
    }
    return 1;
  }
  return 0;
}
