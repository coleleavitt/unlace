unsigned __int64 __fastcall sub_1C5BC0(__int64 *a1, QT::QAbstractItemView *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdx
  const char *v21; // rsi
  char *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  size_t v26; // r15
  const void *v27; // r9
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char *v39; // [rsp+8h] [rbp-80h]
  __m128i v40; // [rsp+10h] [rbp-78h] BYREF
  __int8 v41; // [rsp+2Fh] [rbp-59h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  __m128i v43; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v5 = QT::QAbstractItemView::model(a2);
  v6 = *(__int64 **)(v5 + 216);
  if ( !v6 )
    v6 = *(__int64 **)(v5 + 208);
  v7 = *v6;
  v43.m128i_i8[0] = 0;
  v42 = -1;
  dirtree_resolve_cursor(&v42, v7, a3);
  v8 = v42;
  v41 = v43.m128i_i8[0];
  QT::QAbstractItemView::model(a2);
  if ( v8 != -1 && !v41 )
  {
    v39 = (char *)a2 + 304;
    v10 = sub_4DF1E0((char *)a2 + 304, v8);
    if ( v10 )
    {
      v11 = a1[1];
      v12 = *a1;
      if ( a1[2] < (unsigned __int64)(v11 + 1) )
      {
        v38 = qvector_reserve(a1, v12, v11 + 1, 40);
        v11 = a1[1];
        *a1 = v38;
        v12 = v38;
      }
      v13 = v12 + 40 * v11;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 24) = 12;
      *(_QWORD *)(v13 + 32) = -1;
      *(_OWORD *)(v13 + 8) = 0;
      ++a1[1];
      v14 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v13 + 16) < v14 )
      {
        *(_QWORD *)v13 = qvector_reserve(v13, *(_QWORD *)v13, v14, 24);
        v14 = *(_QWORD *)(v10 + 8);
      }
      v15 = *(_QWORD *)v10;
      v16 = *(_QWORD *)v10 + 24 * v14;
      if ( v16 != *(_QWORD *)v10 )
      {
        do
        {
          while ( 1 )
          {
            v24 = sub_4DFD60(v39, v15, 0);
            v42 = 0;
            v26 = v24;
            v27 = (const void *)v25;
            v43 = 0;
            if ( v24 )
            {
              v34 = nullptr;
              v35 = v24 + 1;
              if ( v24 != -1 )
              {
                v40.m128i_i64[1] = v25;
                v40.m128i_i64[0] = v24 + 1;
                v42 = qvector_reserve(&v42, 0, v24 + 1, 1);
                v27 = (const void *)v40.m128i_i64[1];
                v34 = (void *)v42;
                v35 = v40.m128i_i64[0];
              }
              v43.m128i_i64[0] = v35;
              memmove(v34, v27, v26);
              *(_BYTE *)(v42 + v26) = 0;
            }
            v28 = *(_QWORD *)v13;
            v29 = *(_QWORD *)(v13 + 16);
            if ( (unsigned __int64)&v42 < *(_QWORD *)v13 || (unsigned __int64)&v42 >= v28 + 24 * v29 )
              break;
            v17 = v42;
            v18 = _mm_loadl_epi64(&v43);
            v42 = 0;
            v19 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
            v43 = 0;
            v20 = *(_QWORD *)(v13 + 8);
            v21 = *(const char **)v13;
            if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v20 + 1) )
            {
              v40.m128i_i64[1] = v19.m128i_i64[0];
              v40.m128i_i64[0] = v18.m128i_i64[0];
              v37 = qvector_reserve(v13, v21, v20 + 1, 24);
              *(_QWORD *)v13 = v37;
              v20 = *(_QWORD *)(v13 + 8);
              v21 = (const char *)v37;
              v19 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
              v18 = _mm_loadl_epi64(&v40);
            }
            v22 = (char *)&v21[24 * v20];
            *(_QWORD *)v22 = v17;
            *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v18, v19);
            v23 = v42;
            ++*(_QWORD *)(v13 + 8);
            if ( v23 )
            {
              v43.m128i_i64[0] = 0;
              qfree(v23, v21);
            }
            v15 += 24;
            if ( v16 == v15 )
              goto LABEL_24;
          }
          v30 = *(_QWORD *)(v13 + 8);
          if ( v29 < v30 + 1 )
          {
            v36 = qvector_reserve(v13, v28, v30 + 1, 24);
            *(_QWORD *)v13 = v36;
            v28 = v36;
            v30 = *(_QWORD *)(v13 + 8);
          }
          v31 = _mm_loadu_si128(&v43);
          v15 += 24;
          v32 = v42;
          v33 = v28 + 24 * v30;
          v43 = 0;
          *(__m128i *)(v33 + 8) = v31;
          *(_QWORD *)v33 = v32;
          ++*(_QWORD *)(v13 + 8);
        }
        while ( v16 != v15 );
      }
LABEL_24:
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v10 + 104);
      *(_DWORD *)(v13 + 32) = *(_DWORD *)(v10 + 112);
      *(_DWORD *)(v13 + 36) = *(_DWORD *)(v10 + 116);
    }
  }
  return v44 - __readfsqword(0x28u);
}
