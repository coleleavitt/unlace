unsigned __int64 __fastcall sub_53DD20(QT::QMainWindow *this, QT::QMenu *a2, const char *src)
{
  QT::QMenuBar *v5; // rdi
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  char *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  QT::QMenu *v14; // r13
  QT::QAction *p_ptr; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  QT::QMenuBar *v20; // rbx
  char *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  volatile signed __int32 *v27; // rax
  void **v28; // rbx
  __int64 v29; // r14
  _BOOL4 v30; // r14d
  __int128 v31; // [rsp+0h] [rbp-88h] BYREF
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v33; // [rsp+18h] [rbp-70h]
  __m128i ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( !src || !*src )
  {
LABEL_3:
    v5 = (QT::QMenuBar *)QT::QMainWindow::menuBar(this);
    return QT::QMenuBar::addMenu(v5, a2);
  }
  s1 = nullptr;
  v33 = 0;
  v7 = strlen(src);
  v8 = v7 + 1;
  v9 = v7;
  s1 = (char *)qvector_reserve(&s1, 0, v7 + 1, 1);
  *(_QWORD *)&v33 = v8;
  memmove(s1, src, v9);
  s1[v9] = 0;
  if ( !(_QWORD)v33 )
    goto LABEL_5;
  v10 = s1;
  v21 = s1;
  if ( !strcmp(s1, "Edit") )
  {
    if ( *((_QWORD *)&v33 + 1) <= 9u )
    {
      s1 = (char *)qvector_reserve(&s1, v10, 10, 1);
      v21 = s1;
    }
    *(_QWORD *)&v33 = 10;
    *(_QWORD *)v21 = 0x6964453A6576694CLL;
    v10 = s1;
    v21[8] = 116;
    v10[9] = 0;
    v22 = v33;
  }
  else if ( !strcmp(v10, "Search") )
  {
    if ( *((_QWORD *)&v33 + 1) <= 0xBu )
    {
      s1 = (char *)qvector_reserve(&s1, v10, 12, 1);
      v21 = s1;
    }
    *(_QWORD *)&v33 = 12;
    qmemcpy(v21, "Live:Search", 11);
    v10 = s1;
    s1[11] = 0;
    v22 = v33;
  }
  else
  {
    if ( strcmp(v10, "Jump") )
      goto LABEL_6;
    if ( *((_QWORD *)&v33 + 1) <= 9u )
    {
      s1 = (char *)qvector_reserve(&s1, v10, 10, 1);
      v21 = s1;
    }
    *(_QWORD *)&v33 = 10;
    *(_QWORD *)v21 = 0x6D754A3A6576694CLL;
    v10 = s1;
    v21[8] = 112;
    v10[9] = 0;
    v22 = v33;
  }
  if ( !v22 )
LABEL_5:
    v10 = (char *)&::s1;
LABEL_6:
  v14 = (QT::QMenu *)sub_53DC50((__int64)this, v10);
  if ( v14 )
  {
    p_ptr = (QT::QAction *)QT::QMainWindow::menuBar(this);
    QT::QWidget::actions((QT::QWidget *)&ptr);
    v16 = QT::QMenu::menuAction(v14);
    v18 = v35;
    if ( v35 <= 0 )
    {
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
    }
    else
    {
      p_ptr = (QT::QAction *)(ptr.m128i_i64[1] + 8 * v35);
      v18 = ptr.m128i_i64[1];
      do
      {
        v17 = v18;
        if ( p_ptr == (QT::QAction *)v18 )
        {
          v19 = -1;
          goto LABEL_12;
        }
        v18 += 8;
      }
      while ( v16 != *(_QWORD *)(v18 - 8) );
      v17 = (v17 - ptr.m128i_i64[1]) >> 3;
      v19 = v17;
LABEL_12:
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      if ( v19 != -1 )
      {
        v20 = (QT::QMenuBar *)QT::QMainWindow::menuBar(this);
        p_ptr = (QT::QAction *)QT::QMenu::menuAction(v14);
        QT::QMenuBar::insertMenu(v20, p_ptr, a2);
        goto LABEL_17;
      }
    }
LABEL_29:
    if ( s1 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(s1, (const char *)p_ptr, v18, v17);
    }
    goto LABEL_3;
  }
  v31 = 0;
  sub_536580(&ptr, v10, 1, v11, v12, v13);
  p_ptr = (QT::QAction *)&ptr;
  v26 = (unsigned __int8)sub_535E60((QT::QWidget **)&v31, &ptr, 1u, v23, v24, v25);
  if ( (_BYTE)v26 )
  {
    v30 = *((_QWORD *)&v31 + 1) == 0;
    p_ptr = (QT::QAction *)QT::QMenu::menuAction(a2);
    sub_534250(&v31, p_ptr, v30, 0.0);
    v27 = (volatile signed __int32 *)ptr.m128i_i64[0];
    if ( !ptr.m128i_i64[0] )
    {
LABEL_17:
      if ( s1 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(s1, (const char *)p_ptr);
      }
      return v36 - __readfsqword(0x28u);
    }
  }
  else
  {
    v27 = (volatile signed __int32 *)ptr.m128i_i64[0];
    if ( !ptr.m128i_i64[0] )
      goto LABEL_29;
  }
  if ( !_InterlockedSub(v27, 1u) )
  {
    v28 = (void **)ptr.m128i_i64[1];
    v29 = ptr.m128i_i64[1] + 24 * v35;
    if ( ptr.m128i_i64[1] != v29 )
    {
      do
      {
        if ( *v28 && !_InterlockedSub((volatile signed __int32 *)*v28, 1u) )
          free(*v28);
        v28 += 3;
      }
      while ( (void **)v29 != v28 );
    }
    free((void *)ptr.m128i_i64[0]);
  }
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s1, (const char *)p_ptr);
  }
  if ( !(_BYTE)v26 )
    goto LABEL_3;
  return v36 - __readfsqword(0x28u);
}
