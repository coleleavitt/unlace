unsigned __int64 __fastcall sub_53EC00(
        QT::QMainWindow *this,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rax
  char *v14; // r9
  QT::QAction **v15; // rbx
  QT::QAction **i; // r15
  QT::QAction *v17; // r12
  const QT::QObject *v18; // rax
  QT::QWidget *v19; // rax
  __int64 v20; // rbx
  const char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  QT::QMenu *v26; // r14
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  QT::QMenuBar *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rdi
  char *v36; // rax
  char *v37; // rdx
  int *v38; // rax
  char *v39; // r10
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r10
  char *v43; // rdx
  char *v44; // rsi
  int *v45; // rax
  __int64 v46; // r9
  QT::QAction **v47; // rbx
  QT::QAction **j; // r14
  const QT::QObject *v49; // rax
  const char *v50; // rax
  QT::QMenu *v51; // r15
  void **p_src; // rsi
  char v53; // al
  void *v54; // r12
  const char *v55; // rdx
  const char *v57; // rsi
  __int64 v58; // rcx
  char v59; // [rsp+0h] [rbp-98h]
  __int64 v60; // [rsp+8h] [rbp-90h]
  char *v61; // [rsp+10h] [rbp-88h]
  char *v62; // [rsp+10h] [rbp-88h]
  __int64 v63; // [rsp+10h] [rbp-88h]
  char *v64; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  char *v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+30h] [rbp-68h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int64 v69; // [rsp+48h] [rbp-50h]
  __int64 v70; // [rsp+50h] [rbp-48h]
  unsigned __int64 v71; // [rsp+58h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  QT::QMainWindow::menuBar(this);
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v13 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_1821F0((__int64)&ptr, 0, 0, 0, v11, v12);
    v13 = (int *)ptr;
  }
  v14 = v66;
  v15 = (QT::QAction **)v66;
  if ( !v13 || *v13 > 1 )
  {
    sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v66);
    v14 = v66;
  }
  for ( i = (QT::QAction **)&v14[8 * v67]; i != v15; ++v15 )
  {
    v17 = *v15;
    v18 = (const QT::QObject *)QT::QAction::menuObject(*v15);
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v18) )
    {
      v19 = (QT::QWidget *)QT::QMainWindow::menuBar(this);
      QT::QWidget::removeAction(v19, v17);
    }
  }
  v20 = *a2;
  v60 = *a2 + 24 * a2[1];
  if ( v60 != *a2 )
  {
    do
    {
      v21 = &s1;
      if ( *(_QWORD *)(v20 + 8) )
        v21 = *(const char **)v20;
      v26 = (QT::QMenu *)sub_53DC50((__int64)this, v21);
      if ( !v26 )
      {
        v57 = &s1;
        if ( *(_QWORD *)(v20 + 8) )
          v57 = *(const char **)v20;
        sub_169700(
          (int)"Menu \"%s\" could not be found\n",
          (__int64)v57,
          v22,
          v23,
          v24,
          v25,
          a3,
          a4,
          a5,
          a6,
          v27,
          v28,
          a9,
          a10,
          v59);
        goto LABEL_46;
      }
      v29 = (QT::QMenuBar *)QT::QMainWindow::menuBar(this);
      QT::QMenuBar::addMenu(v29, v26);
      v30 = QT::QMenu::menuAction(v26);
      v31 = v67;
      v14 = v66;
      v32 = v30;
      v33 = 8 * v67;
      v34 = (8 * v67) >> 5;
      v35 = (8 * v67) >> 3;
      if ( v34 > 0 )
      {
        v36 = v66;
        v37 = &v66[32 * v34];
        while ( v32 != *(_QWORD *)v36 )
        {
          if ( v32 == *((_QWORD *)v36 + 1) )
          {
            v33 = v36 + 8 - v66;
            v35 = v33 >> 3;
            goto LABEL_23;
          }
          if ( v32 == *((_QWORD *)v36 + 2) )
          {
            v33 = v36 + 16 - v66;
            v35 = v33 >> 3;
            goto LABEL_23;
          }
          if ( v32 == *((_QWORD *)v36 + 3) )
          {
            v33 = v36 + 24 - v66;
            v35 = v33 >> 3;
            goto LABEL_23;
          }
          v36 += 32;
          if ( v36 == v37 )
          {
            v58 = (&v66[8 * v67] - v36) >> 3;
            goto LABEL_73;
          }
        }
LABEL_22:
        v33 = v36 - v66;
        v35 = (v36 - v66) >> 3;
        goto LABEL_23;
      }
      v58 = (8 * v67) >> 3;
      v36 = v66;
LABEL_73:
      if ( v58 != 2 )
      {
        if ( v58 != 3 )
        {
          if ( v58 != 1 )
            goto LABEL_23;
          goto LABEL_76;
        }
        if ( v32 == *(_QWORD *)v36 )
          goto LABEL_22;
        v36 += 8;
      }
      if ( v32 == *(_QWORD *)v36 )
        goto LABEL_22;
      v36 += 8;
LABEL_76:
      if ( v32 == *(_QWORD *)v36 )
        goto LABEL_22;
LABEL_23:
      if ( v67 != v35 )
      {
        v38 = (int *)ptr;
        if ( !ptr || *(int *)ptr > 1 )
        {
          sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v66);
          v38 = (int *)ptr;
          v14 = v66;
          v31 = v67;
        }
        v39 = &v14[8 * v31];
        if ( !v38 || *v38 > 1 )
        {
          v61 = &v14[8 * v31];
          sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v14);
          v14 = v66;
          v39 = v61;
        }
        v14 += v33;
        v40 = v14 + 8;
        if ( v14 + 8 != v39 )
        {
          do
          {
            if ( v32 != *(_QWORD *)v40 )
            {
              *(_QWORD *)v14 = *(_QWORD *)v40;
              v14 += 8;
            }
            v40 += 8;
          }
          while ( v39 != v40 );
          v33 = v14 - v66;
        }
        if ( v39 != v14 )
        {
          if ( !ptr || *(int *)ptr > 1 )
          {
            v64 = v14;
            v62 = v39;
            sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v14);
            v39 = v62;
            v14 = v64;
          }
          v41 = v67;
          v42 = v39 - v14;
          v43 = &v66[8 * v67];
          v44 = &v66[v33 + v42];
          if ( v66 == &v66[v33] )
          {
            if ( v43 != v44 )
              v66 += v33 + v42;
          }
          else if ( v43 != v44 )
          {
            v63 = v42;
            memmove(&v66[v33], v44, v43 - v44);
            v41 = v67;
            v42 = v63;
          }
          v67 = v41 - (v42 >> 3);
        }
        if ( !ptr || *(int *)ptr > 1 )
          sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v14);
      }
LABEL_46:
      v20 += 24;
    }
    while ( v60 != v20 );
  }
  v45 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v14);
    v45 = (int *)ptr;
  }
  v46 = (__int64)v66;
  v47 = (QT::QAction **)v66;
  if ( !v45 || *v45 > 1 )
  {
    sub_1821F0((__int64)&ptr, 0, 0, 0, v11, (__int64)v66);
    v46 = (__int64)v66;
  }
  for ( j = (QT::QAction **)(v46 + 8 * v67); j != v47; ++v47 )
  {
    v49 = (const QT::QObject *)QT::QAction::menuObject(*v47);
    v50 = (const char *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v49);
    v70 = 0;
    v51 = (QT::QMenu *)v50;
    if ( v50 )
    {
      p_src = &src;
      src = nullptr;
      v69 = 0;
      v53 = sub_53D590((__int64)this, (__int64 *)&src, v50);
      v54 = src;
      if ( v53 )
      {
        v55 = &s1;
        p_src = (void **)v51;
        if ( v69 )
          v55 = (const char *)src;
        sub_53DD20(this, v51, v55);
      }
      if ( v54 )
        qfree(v54, (const char *)p_src);
    }
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v71 - __readfsqword(0x28u);
}
