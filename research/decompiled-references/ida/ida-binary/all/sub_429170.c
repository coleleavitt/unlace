__int64 __fastcall sub_429170(QT::QAbstractItemView *a1, __int64 a2)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rax
  const char *v4; // r13
  unsigned __int64 v5; // r12
  const char *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  size_t v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  size_t v15; // rdx
  char *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  char *v19; // rbp
  __int64 v20; // rax
  size_t v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  const char *v25; // rsi
  unsigned __int64 v26; // r12
  size_t v27; // r15
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r12
  size_t v30; // r8
  const char *v31; // rsi
  unsigned int v32; // ebp
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v39; // rbx
  void (__fastcall *v40)(__int64, void **, __int64); // r12
  __int64 v41; // r15
  size_t v42; // r9
  __int64 v43; // rsi
  __int64 v44; // r13
  size_t v45; // r8
  __int64 v46; // rsi
  size_t v47; // [rsp+0h] [rbp-100h]
  size_t v48; // [rsp+0h] [rbp-100h]
  size_t v49; // [rsp+0h] [rbp-100h]
  size_t v50; // [rsp+8h] [rbp-F8h]
  size_t v51; // [rsp+8h] [rbp-F8h]
  __m128i v53; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h]
  __m128i v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  void *src; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h]

  v2.m128i_i64[0] = 0;
  v63 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  v56 = 0;
  v55 = 0;
  if ( !v3 )
    goto LABEL_46;
  v4 = *(const char **)a2;
  v5 = *(_QWORD *)a2 + v3 - 1;
  v6 = *(const char **)a2;
  if ( *(_QWORD *)a2 >= v5 )
  {
    if ( v3 != 1 )
    {
      v9 = 0;
LABEL_17:
      if ( v6[v3 - 2] == 47 )
      {
        v22 = v55;
        if ( *((_QWORD *)&v56 + 1) < v9 + 1 )
        {
          v55 = qvector_reserve(&v55, v55, v9 + 1, 24);
          v9 = v56;
          v22 = v55;
        }
        v23 = v22 + 24 * v9;
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v9 = v56 + 1;
        *(_QWORD *)&v56 = v56 + 1;
      }
      goto LABEL_21;
    }
LABEL_46:
    v57 = 0;
    v59 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v60 = 0;
    v58 = 0;
    goto LABEL_47;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v16 = strchr(v4, 47);
    v17 = v9 + 1;
    v18 = (unsigned __int64)v16;
    v19 = v16;
    if ( !v16 )
      v18 = v5;
    v21 = v18 - (_QWORD)v4;
    if ( v8 < v17 )
    {
      v47 = v21;
      v55 = qvector_reserve(&v55, v7, v17, 24);
      v9 = v56;
      v7 = v55;
      v21 = v47;
    }
    v10 = 3 * v9;
    v11 = v21;
    v12 = v7 + 8 * v10;
    *(_OWORD *)(v12 + 8) = 0;
    *(_QWORD *)v12 = 0;
    *(_QWORD *)&v56 = v56 + 1;
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
    {
      --v13;
      v11 = v21 + v13;
    }
    v14 = *(_QWORD *)v12;
    v15 = v11 + 1;
    if ( v11 != -1 )
    {
      v50 = v21;
      v20 = qvector_reserve(v12, v14, v15, 1);
      v21 = v50;
      v15 = v11 + 1;
      *(_QWORD *)v12 = v20;
      v14 = v20;
    }
    *(_QWORD *)(v12 + 8) = v15;
    *(_BYTE *)(v14 + v11) = 0;
    memmove((void *)(v13 + *(_QWORD *)v12), v4, v21);
    v9 = v56;
    if ( !v19 )
      break;
    v4 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) >= v5 )
      break;
    v8 = *((_QWORD *)&v56 + 1);
    v7 = v55;
  }
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 >= 2 )
  {
    v6 = *(const char **)a2;
    goto LABEL_17;
  }
LABEL_21:
  v57 = 0;
  v2.m128i_i64[0] = 0;
  v59 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v60 = 0;
  v58 = 0;
  if ( v9 > 1 )
  {
    v24 = 1;
    while ( 1 )
    {
      v25 = nullptr;
      v62 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 2, 1);
      *(_QWORD *)&v62 = 2;
      *(_BYTE *)src = 47;
      *((_BYTE *)src + 1) = 0;
      v26 = v62;
      if ( (_QWORD)v62 )
      {
        v27 = v62 - 1;
        if ( (_QWORD)v62 != 1 )
          break;
      }
LABEL_25:
      if ( src )
      {
        *(_QWORD *)&v62 = 0;
        qfree(src, v25);
      }
      v28 = v55 + 24 * v24;
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v29 != 1 )
        {
          v41 = v58;
          v42 = v29 - 1;
          if ( (_QWORD)v58 )
          {
            v41 = v58 - 1;
            v43 = v57;
            v42 = v30 + v58 - 1;
            v29 += v58 - 1;
            if ( *((_QWORD *)&v58 + 1) >= v29 )
              goto LABEL_50;
          }
          else
          {
            v43 = v57;
            if ( *((_QWORD *)&v58 + 1) >= v29 )
            {
LABEL_50:
              *(_QWORD *)&v58 = v29;
              *(_BYTE *)(v43 + v42) = 0;
              memcpy((void *)(v41 + v57), *(const void **)v28, v30);
              goto LABEL_29;
            }
          }
          v51 = v42;
          v49 = v30;
          v57 = qvector_reserve(&v57, v43, v29, 1);
          v42 = v51;
          v43 = v57;
          v30 = v49;
          goto LABEL_50;
        }
      }
LABEL_29:
      v31 = (const char *)QT::QAbstractItemView::model(a1);
      sub_48BB70(&v53, v31, &v57);
      v2 = _mm_loadu_si128(&v53);
      v59 = v2;
      v60 = v54;
      if ( (v2.m128i_i32[1] | _mm_cvtsi128_si32(v2)) < 0 || !v54 )
      {
        v32 = 0;
        goto LABEL_36;
      }
      if ( v24 < (__int64)v56 - 1 )
        QT::QTreeView::expand(a1, &v59);
      sub_4E4770((char *)a1 + 304);
      if ( ++v24 >= (unsigned __int64)v56 )
        goto LABEL_47;
    }
    v44 = v58;
    v45 = v62 - 1;
    if ( (_QWORD)v58 )
    {
      v44 = v58 - 1;
      v46 = v57;
      v45 = v27 + v58 - 1;
      v26 = v62 + v58 - 1;
      if ( *((_QWORD *)&v58 + 1) >= v26 )
        goto LABEL_53;
    }
    else
    {
      v46 = v57;
      if ( *((_QWORD *)&v58 + 1) >= (unsigned __int64)v62 )
      {
LABEL_53:
        *(_QWORD *)&v58 = v26;
        *(_BYTE *)(v46 + v45) = 0;
        v25 = (const char *)src;
        memcpy((void *)(v44 + v57), src, v27);
        goto LABEL_25;
      }
    }
    v48 = v45;
    v57 = qvector_reserve(&v57, v46, v26, 1);
    v45 = v48;
    v46 = v57;
    goto LABEL_53;
  }
LABEL_47:
  v39 = QT::QAbstractItemView::selectionModel(a1);
  v40 = *(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v39 + 96LL);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)&src);
  v40(v39, &src, 1);
  v31 = (const char *)&v59;
  QT::QAbstractItemView::setCurrentIndex(a1, &v59);
  v32 = 1;
LABEL_36:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    *(double *)v2.m128i_i64 = qfree(v57, v31);
  }
  v33 = v55;
  if ( v55 )
  {
    v34 = v56;
    if ( (_QWORD)v56 )
    {
      v35 = 0;
      do
      {
        v36 = (__int64 *)(v33 + 24 * v35);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          *(double *)v2.m128i_i64 = qfree(v37, v31, *(double *)v2.m128i_i64);
          v33 = v55;
        }
        ++v35;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v33, v31, *(double *)v2.m128i_i64);
  }
  return v32;
}
