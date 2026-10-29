__int64 __fastcall sub_538BA0(__int64 a1, QT::QAction **a2, const char *a3, int a4, __int64 a5, __int64 a6, double a7)
{
  QT::QMenu **v7; // r13
  QT::QAction *v9; // rbx
  __int64 v11; // rcx
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  char *v15; // r15
  size_t v16; // rax
  size_t v17; // rbx
  void *v18; // rax
  QT::QWidget *v19; // r12
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r14
  void **v23; // r12
  void **v24; // r15
  char v25; // dl
  size_t v27; // rax
  size_t v28; // rbx
  char *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rbp
  char *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  const char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  char *v39; // r15
  __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rdi
  void *v49; // rdi
  void *v50; // rdx
  __int64 v51; // rax
  char *src; // [rsp+10h] [rbp-78h]
  void *srca; // [rsp+10h] [rbp-78h]
  void *srcb; // [rsp+10h] [rbp-78h]
  size_t v56; // [rsp+18h] [rbp-70h]
  __int64 v57; // [rsp+18h] [rbp-70h]
  __int128 v58; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v60; // [rsp+38h] [rbp-50h]
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v9 = (QT::QAction *)a2;
  v61 = __readfsqword(0x28u);
  v11 = a4 & 0x10000;
  if ( !(_DWORD)v11 )
  {
    v19 = *(QT::QWidget **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( !a2 || (v9 = a2[24]) != nullptr && (unsigned __int8)QT::QAction::isEnabled(a2[24]) )
      {
        v58 = 0;
        if ( (a4 & 2) != 0 )
        {
          QT::QWidget::actions((QT::QWidget *)&ptr);
          *(_QWORD *)&v58 = v19;
          if ( *((_QWORD *)&v60 + 1) )
            *((_QWORD *)&v58 + 1) = *(_QWORD *)v60;
          v7 = (QT::QMenu **)&v58;
          if ( ptr )
          {
            v7 = (QT::QMenu **)&v58;
            if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
              free(ptr);
          }
LABEL_24:
          v25 = a4;
          if ( v9 )
            return sub_533EC0((QT::QMenu **)&v58, v9, a4);
          return sub_533EC0(v7, nullptr, v25);
        }
        v7 = (QT::QMenu **)&v58;
        sub_536580((__m128i *)&ptr, a3, 0, v11, a5, a6);
        v22 = sub_535B80((QT::QWidget **)&v58, (__m128i *)&ptr, v19, 1u, v20, v21);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          v23 = (void **)v60;
          v24 = (void **)(v60 + 24LL * *((_QWORD *)&v60 + 1));
          if ( (void **)v60 != v24 )
          {
            do
            {
              if ( *v23 && !_InterlockedSub((volatile signed __int32 *)*v23, 1u) )
                free(*v23);
              v23 += 3;
            }
            while ( v24 != v23 );
          }
          free(ptr);
        }
        if ( v22 )
          goto LABEL_24;
      }
    }
    return 0;
  }
  v12 = *(const char **)(a1 + 8);
  if ( !v12 )
  {
    if ( under_debugger )
      BUG();
    interr(40660, 0, a3, v11, a7);
    return sub_533EC0(v7, nullptr, v25);
  }
  ptr = nullptr;
  v60 = 0;
  sub_535A80((__int64 *)&ptr, v12);
  v14 = *((_QWORD *)&v60 + 1);
  v13 = v60;
  if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
  {
    v36 = nullptr;
    v37 = qvector_reserve(&ptr, 0, v60 + 1, 56);
    v38 = *((_QWORD *)&v60 + 1);
    v39 = (char *)ptr;
    *((_QWORD *)&v60 + 1) = v14;
    src = (char *)v37;
    v57 = v38;
    v40 = v60 - 1;
    if ( (__int64)v60 - 1 >= 0 )
    {
      v41 = v37;
      do
      {
        v42 = *(_QWORD *)v39;
        v43 = _mm_loadu_si128((const __m128i *)(v39 + 8));
        *(_QWORD *)v39 = 0;
        *(_OWORD *)(v39 + 8) = 0;
        *(_QWORD *)v41 = v42;
        *(__m128i *)(v41 + 8) = v43;
        v44 = *((_QWORD *)v39 + 3);
        v45 = _mm_loadu_si128((const __m128i *)v39 + 2);
        *((_QWORD *)v39 + 3) = 0;
        *(_QWORD *)(v41 + 24) = v44;
        *(__m128i *)(v41 + 32) = v45;
        v36 = (const char *)*((unsigned int *)v39 + 12);
        *((_QWORD *)v39 + 5) = 0;
        *(_DWORD *)(v41 + 48) = (_DWORD)v36;
        v46 = *((_QWORD *)v39 + 3);
        if ( v46 )
        {
          *((_QWORD *)v39 + 4) = 0;
          *(double *)v45.m128i_i64 = qfree(v46, v36);
        }
        v47 = *(_QWORD *)v39;
        if ( *(_QWORD *)v39 )
        {
          *((_QWORD *)v39 + 1) = 0;
          qfree(v47, v36, *(double *)v45.m128i_i64);
        }
        v39 += 56;
        v41 += 56;
      }
      while ( v40-- != 0 );
      v39 = (char *)ptr;
    }
    qfree(v39, v36);
    ptr = src;
    *((_QWORD *)&v60 + 1) = v57;
    v13 = v60;
  }
  else
  {
    src = (char *)ptr;
  }
  v15 = &src[56 * v13];
  *(_QWORD *)v15 = 0;
  *((_QWORD *)v15 + 3) = 0;
  *(_OWORD *)(v15 + 8) = 0;
  *((_OWORD *)v15 + 2) = 0;
  *(_QWORD *)&v60 = v60 + 1;
  if ( v9 )
  {
    if ( *((_QWORD *)v9 + 5)
      && *((_QWORD *)v9 + 4)
      && (srca = *((void **)v9 + 4), v16 = strlen((const char *)srca), (v17 = v16) != 0) )
    {
      v56 = v16 + 1;
      v18 = (void *)qvector_reserve(v15, *(_QWORD *)v15, v16 + 1, 1);
      *(_QWORD *)v15 = v18;
      *((_QWORD *)v15 + 1) = v56;
      memmove(v18, srca, v17);
      *(_BYTE *)(*(_QWORD *)v15 + v17) = 0;
    }
    else
    {
      *((_QWORD *)v15 + 1) = 0;
    }
  }
  if ( a3 && (v27 = strlen(a3), (v28 = v27) != 0) )
  {
    v49 = *((void **)v15 + 3);
    v50 = (void *)(v27 + 1);
    if ( *((_QWORD *)v15 + 5) < v27 + 1 )
    {
      srcb = (void *)(v27 + 1);
      v51 = qvector_reserve(v15 + 24, *((_QWORD *)v15 + 3), v50, 1);
      *((_QWORD *)v15 + 3) = v51;
      v50 = srcb;
      v49 = (void *)v51;
    }
    *((_QWORD *)v15 + 4) = v50;
    memmove(v49, a3, v28);
    *(_BYTE *)(*((_QWORD *)v15 + 3) + v28) = 0;
  }
  else
  {
    *((_QWORD *)v15 + 4) = 0;
  }
  *((_DWORD *)v15 + 12) = a4 & 0xFFFEFFFF;
  sub_538A10(*(QT::QObject **)(a1 + 8), &ptr);
  v29 = (char *)ptr;
  if ( ptr )
  {
    v30 = v60;
    if ( (_QWORD)v60 )
    {
      v31 = 0;
      v32 = 0;
      do
      {
        v33 = &v29[v31];
        v34 = *(_QWORD *)&v29[v31 + 24];
        if ( v34 )
        {
          *((_QWORD *)v33 + 4) = 0;
          qfree(v34, (const char *)&ptr);
        }
        v35 = *(_QWORD *)v33;
        if ( *(_QWORD *)v33 )
        {
          *((_QWORD *)v33 + 1) = 0;
          qfree(v35, (const char *)&ptr);
        }
        ++v32;
        v29 = (char *)ptr;
        v31 += 56;
      }
      while ( v30 != v32 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v29, (const char *)&ptr);
  }
  return 1;
}
