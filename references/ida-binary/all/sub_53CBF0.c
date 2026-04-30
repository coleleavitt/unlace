unsigned __int64 __fastcall sub_53CBF0(QT::QMainWindow *a1, __int64 *a2, char a3)
{
  QT::QToolBar **v3; // rbx
  QT::QToolBar **v4; // rbp
  QT::QToolBar *v6; // rsi
  QT::QToolBar **v7; // rax
  QT::QToolBar *v8; // r15
  void *v9; // rbp
  size_t v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rbp
  const char *v14; // r14
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v20; // rax
  QT::QToolBar *v21; // rbp
  _BOOL8 v22; // rsi
  void *v23; // rdi
  QT::QToolBar **v25; // [rsp+10h] [rbp-A8h]
  void (__fastcall *v26)(QT::QToolBar *, _BOOL8); // [rsp+18h] [rbp-A0h]
  QT::QToolBar **v28; // [rsp+38h] [rbp-80h]
  void *v29; // [rsp+40h] [rbp-78h] BYREF
  void *src; // [rsp+48h] [rbp-70h]
  size_t n; // [rsp+50h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v3 = *((QT::QToolBar ***)a1 + 9);
  v4 = &v3[*((_QWORD *)a1 + 10)];
  v34 = __readfsqword(0x28u);
  if ( v4 == v3 )
  {
    if ( a3 )
      return v34 - __readfsqword(0x28u);
    goto LABEL_22;
  }
  do
  {
    v6 = *v3++;
    QT::QMainWindow::removeToolBar(a1, v6);
  }
  while ( v4 != v3 );
  if ( !a3 )
  {
LABEL_22:
    v17 = *a2;
    v18 = *a2 + 24 * a2[1];
    if ( v18 != *a2 )
    {
      do
      {
        if ( *(_QWORD *)(v17 + 8) > 1u )
        {
          v20 = sub_53C820((__int64)a1, *(const char **)v17);
          v21 = (QT::QToolBar *)v20;
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 104LL))(v20, 1);
            QT::QMainWindow::addToolBar(a1, v21);
          }
        }
        else
        {
          QT::QMainWindow::addToolBarBreak(a1, 4);
        }
        v17 += 24;
      }
      while ( v18 != v17 );
    }
    return v34 - __readfsqword(0x28u);
  }
  v7 = *((QT::QToolBar ***)a1 + 9);
  v28 = &v7[*((_QWORD *)a1 + 10)];
  if ( v7 == v28 )
    return v34 - __readfsqword(0x28u);
  v25 = *((QT::QToolBar ***)a1 + 9);
  do
  {
    v8 = *v25;
    QT::QObject::objectName((QT::QObject *)&ptr);
    QT::QString::toUtf8_helper((QT::QString *)&v29, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v9 = src;
    v10 = n;
    if ( !src )
      v9 = &QT::QByteArray::_empty;
    ptr = nullptr;
    v33 = 0;
    if ( n )
    {
      v23 = nullptr;
      if ( n != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
        v23 = ptr;
      }
      *(_QWORD *)&v33 = v10 + 1;
      memmove(v23, v9, v10);
      *((_BYTE *)ptr + v10) = 0;
    }
    v26 = *(void (__fastcall **)(QT::QToolBar *, _BOOL8))(*(_QWORD *)v8 + 104LL);
    v11 = *a2;
    v12 = *a2 + 24 * a2[1];
    if ( *a2 == v12 )
    {
LABEL_29:
      v22 = 0;
      goto LABEL_30;
    }
    v13 = v33;
    v14 = (const char *)ptr;
    while ( 1 )
    {
      if ( *(_QWORD *)(v11 + 8) )
      {
        v15 = *(const char **)v11;
        v16 = &s1;
        if ( !v13 )
          goto LABEL_15;
        goto LABEL_20;
      }
      if ( !v13 )
        break;
      v15 = &s1;
LABEL_20:
      v16 = v14;
LABEL_15:
      if ( !strcmp(v16, v15) )
        break;
      v11 += 24;
      if ( v12 == v11 )
        goto LABEL_29;
    }
    v22 = v12 != v11;
LABEL_30:
    v26(v8, v22);
    QT::QMainWindow::addToolBar(a1, v8);
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr, (const char *)v8);
    }
    if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
      free(v29);
    ++v25;
  }
  while ( v28 != v25 );
  return v34 - __readfsqword(0x28u);
}
