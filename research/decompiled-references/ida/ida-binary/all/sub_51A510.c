bool __fastcall sub_51A510(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int v8; // eax
  char *p_src; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rax
  const char *v17; // r15
  char *v18; // r13
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  char *v22; // r9
  char *v23; // rbp
  size_t v24; // r14
  size_t v25; // r10
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rsi
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  char *v32; // rax
  unsigned __int64 v33; // rax
  double v34; // xmm0_8
  __int64 v35; // rdx
  char *v36; // rbx
  const char *v37; // rsi
  void *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  QT::QWidget *v45; // rbx
  QT::QWidget *v46; // rax
  QT::QLayout *v47; // rax
  unsigned __int64 v48; // rbx
  char *v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rdi
  char **p_s1; // rax
  unsigned __int64 v57; // rbx
  char *v58; // r13
  void *v59; // rdi
  size_t v60; // [rsp+0h] [rbp-B8h]
  size_t v61; // [rsp+8h] [rbp-B0h]
  __int64 v62; // [rsp+20h] [rbp-98h] BYREF
  __int128 v63; // [rsp+28h] [rbp-90h]
  char *s1; // [rsp+40h] [rbp-78h] BYREF
  __int128 v65; // [rsp+48h] [rbp-70h]
  void *src; // [rsp+60h] [rbp-58h] BYREF
  __int128 v67; // [rsp+68h] [rbp-50h]
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v8 = dword_8C3130;
  if ( dword_8C3130 >= 0 )
    return v8 != 0;
  v62 = 0;
  p_src = (char *)&src;
  src = nullptr;
  v63 = 0;
  v67 = 0;
  if ( !(unsigned __int8)qgetenv("IDA_OPENGL", &src) )
  {
    p_src = (char *)src;
    if ( *((_QWORD *)&v67 + 1) <= 6u )
    {
      src = (void *)qvector_reserve(&src, src, 7, 1);
      p_src = (char *)src;
    }
    *(_QWORD *)&v67 = 7;
    *(_DWORD *)p_src = 1953724787;
    *((_WORD *)p_src + 2) = 28005;
    *((_BYTE *)src + 6) = 0;
  }
  v16 = v67;
  v17 = (const char *)src;
  if ( (_QWORD)v67 )
  {
    v18 = (char *)src + v67 - 1;
    if ( src >= v18 )
      goto LABEL_22;
    do
    {
      v19 = strchr(v17, 58);
      v20 = v63;
      v21 = v62;
      v22 = v19;
      v23 = v19;
      if ( !v19 )
        v22 = v18;
      v24 = v22 - v17;
      if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
      {
        v62 = qvector_reserve(&v62, v62, v63 + 1, 24);
        v20 = v63;
        v21 = v62;
      }
      v25 = v24;
      v26 = v21 + 24 * v20;
      *(_OWORD *)(v26 + 8) = 0;
      *(_QWORD *)v26 = 0;
      *(_QWORD *)&v63 = v63 + 1;
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        --v27;
        v25 = v24 + v27;
      }
      v28 = *(_QWORD *)v26;
      v29 = v25 + 1;
      if ( v25 != -1 )
      {
        v61 = v25;
        v60 = v25 + 1;
        v30 = qvector_reserve(v26, v28, v29, 1);
        v25 = v61;
        v29 = v60;
        *(_QWORD *)v26 = v30;
        v28 = v30;
      }
      *(_QWORD *)(v26 + 8) = v29;
      *(_BYTE *)(v28 + v25) = 0;
      p_src = (char *)v17;
      memmove((void *)(v27 + *(_QWORD *)v26), v17, v24);
      if ( !v23 )
        break;
      v17 = v23 + 1;
    }
    while ( v23 + 1 < v18 );
    v16 = v67;
    v17 = (const char *)src;
    if ( (_QWORD)v67 )
    {
LABEL_22:
      if ( v16 != 1 && v17[v16 - 2] == 58 )
      {
        v31 = v63;
        p_src = (char *)v62;
        if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
        {
          v62 = qvector_reserve(&v62, v62, v63 + 1, 24);
          v31 = v63;
          p_src = (char *)v62;
        }
        v32 = &p_src[24 * v31];
        *(_QWORD *)v32 = 0;
        *(_OWORD *)(v32 + 8) = 0;
        v17 = (const char *)src;
        *(_QWORD *)&v63 = v63 + 1;
      }
    }
  }
  if ( v17 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v17, p_src);
  }
  v33 = v63;
  v34 = 0.0;
  s1 = nullptr;
  src = nullptr;
  v35 = v63 - 1;
  v65 = 0;
  v67 = 0;
  if ( (unsigned __int64)(v63 - 1) > 1 )
    goto LABEL_29;
  v35 = v62;
  if ( (char **)v62 == &s1 )
  {
    if ( (_QWORD)v63 != 2 )
      goto LABEL_29;
    p_s1 = &s1;
  }
  else
  {
    v48 = *(_QWORD *)(v62 + 8);
    if ( v48 >= 2 )
    {
      v49 = *(char **)v62;
      s1 = (char *)qvector_reserve(&s1, 0, *(_QWORD *)(v62 + 8), 1);
      *(_QWORD *)&v65 = v48;
      memmove(s1, v49, v48 - 1);
      s1[v48 - 1] = 0;
      v33 = v63;
    }
    if ( v33 <= 1 )
      goto LABEL_40;
    p_s1 = (char **)v62;
    v35 = v62 + 24;
    if ( &src == (void **)(v62 + 24) )
      goto LABEL_40;
  }
  v57 = (unsigned __int64)p_s1[4];
  if ( v57 > 1 )
  {
    v58 = p_s1[3];
    v59 = src;
    if ( *((_QWORD *)&v67 + 1) < v57 )
    {
      src = (void *)qvector_reserve(&src, src, p_s1[4], 1);
      v59 = src;
    }
    *(_QWORD *)&v67 = v57;
    memmove(v59, v58, v57 - 1);
    *((char *)src + v57 - 1) = 0;
    v50 = v65;
    goto LABEL_41;
  }
  *(_QWORD *)&v67 = 0;
LABEL_40:
  v50 = v65;
LABEL_41:
  if ( !v50 )
    goto LABEL_29;
  v36 = s1;
  if ( strcmp(s1, "forced") )
    goto LABEL_47;
  if ( *((_QWORD *)&v65 + 1) <= 6u )
  {
    s1 = (char *)qvector_reserve(&s1, v36, 7, 1);
    v36 = s1;
  }
  *(_QWORD *)&v65 = 7;
  v13 = 28005;
  *(_DWORD *)v36 = 1953724787;
  *((_WORD *)v36 + 2) = 28005;
  s1[6] = 0;
  if ( !(_QWORD)v65 )
  {
LABEL_29:
    v36 = (char *)&::s1;
LABEL_30:
    v37 = v36;
    sub_169700(
      (int)"Unrecognized OpenGL backend directive: \"%s\". Ignoring.\n",
      (__int64)v36,
      v35,
      v11,
      v12,
      v13,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v14,
      v15,
      a7,
      a8,
      v60);
    goto LABEL_31;
  }
  v36 = s1;
LABEL_47:
  v37 = "disabled";
  if ( !strcmp(v36, "disabled") )
  {
    dword_8C3130 = 0;
  }
  else
  {
    v37 = "system";
    if ( strcmp(v36, "system") )
      goto LABEL_30;
    dword_8C3130 = 1;
  }
LABEL_31:
  v38 = src;
  if ( (_QWORD)v67 )
  {
    v37 = "preload";
    if ( !strcmp((const char *)src, "preload") )
    {
      if ( (unsigned __int8)sub_51A510(0.0) )
      {
        v37 = nullptr;
        v45 = (QT::QWidget *)operator new(0x28u);
        QT::QOpenGLWidget::QOpenGLWidget(v45, 0, 0);
        QT::QWidget::hide(v45);
        if ( QT::QCoreApplication::self )
        {
          v46 = (QT::QWidget *)(*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
          v47 = (QT::QLayout *)QT::QWidget::layout(v46);
          v37 = (const char *)v45;
          QT::QLayout::addWidget(v47, v45);
        }
      }
      else
      {
        sub_169700(
          (int)"OpenGL doesn't appear to be readily available on this platform. Skipping preload.\n",
          (__int64)"preload",
          v39,
          v40,
          v41,
          v42,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v43,
          v44,
          a7,
          a8,
          v60);
      }
      v38 = src;
    }
  }
  if ( v38 )
  {
    *(_QWORD *)&v67 = 0;
    v34 = qfree(v38, v37);
  }
  if ( s1 )
  {
    *(_QWORD *)&v65 = 0;
    v34 = qfree(s1, v37, v34);
  }
  v51 = v62;
  if ( v62 )
  {
    v52 = v63;
    if ( (_QWORD)v63 )
    {
      v53 = 0;
      do
      {
        v54 = (__int64 *)(v51 + 24 * v53);
        v55 = *v54;
        if ( *v54 )
        {
          v54[1] = 0;
          v34 = qfree(v55, v37, v34);
          v51 = v62;
        }
        ++v53;
      }
      while ( v52 != v53 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v51, v37, v34);
  }
  v8 = dword_8C3130;
  return v8 != 0;
}
