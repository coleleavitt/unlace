unsigned __int64 __fastcall sub_316BC0(QT::QObject *a1, __int64 a2, char a3)
{
  _QWORD *v4; // rbx
  void *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  volatile signed __int32 *v10; // rax
  unsigned int v12; // eax
  int v13; // r15d
  int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // ebp
  const char *v18; // rsi
  QT::QAction *v19; // r12
  QT::QAction *v20; // rbx
  char v23; // [rsp+27h] [rbp-E1h]
  _BYTE v24[8]; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  void *v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v4 = v26;
  v5 = ptr;
  v6 = &v26[v27];
  if ( ptr )
  {
    _InterlockedAdd((volatile signed __int32 *)ptr, 1u);
    if ( v4 == v6 )
    {
LABEL_7:
      if ( !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
        free(v5);
      goto LABEL_9;
    }
  }
  else if ( !(8 * v27) )
  {
    goto LABEL_9;
  }
  do
  {
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD, QT::QObject *))(*(_QWORD *)*v4 + 32LL))(*v4, a1);
    ++v4;
  }
  while ( v6 != v4 );
  if ( v5 )
    goto LABEL_7;
LABEL_9:
  v7 = *(_QWORD *)(a2 + 512);
  if ( a3 )
  {
    v8 = navstack_t_stack_size(v7);
    if ( !v8 )
    {
      v9 = sub_1EA560(a2 + 384);
      navstack_t_stack_index(v9);
      v10 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        return v36 - __readfsqword(0x28u);
      goto LABEL_36;
    }
    v13 = 1;
    v12 = v8 - 1 - navstack_t_stack_index(*(_QWORD *)(a2 + 512));
  }
  else
  {
    v12 = navstack_t_stack_index(v7);
    v13 = -1;
  }
  v23 = 1;
  v14 = dword_8BA8E8;
  if ( dword_8BA8E8 >= v12 )
  {
    v23 = 0;
    v14 = v12;
  }
  v15 = sub_1EA560(a2 + 384);
  v16 = navstack_t_stack_index(v15);
  v17 = 0;
  if ( v14 )
  {
    do
    {
      v16 += v13;
      v29 = 0;
      *(_OWORD *)v28 = 0;
      v30 = -1;
      v31 = 0;
      v34 = 0;
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v18 = (const char *)sub_1EA560(a2 + 384);
      if ( (unsigned __int8)navstack_t_get_stack_entry(v28, v18, v16) )
      {
        v19 = (QT::QAction *)operator new(0x20u);
        sub_3166C0(v19, a1, (__int64)v28, a2, v16);
        QT::QObject::connect(v24, v19, "2triggered()", qword_8CD748, "1navMenuClick()", 0);
        QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v24);
        v18 = (const char *)v19;
        QT::QWidget::addAction(a1, v19);
      }
      if ( (_QWORD)v32 )
      {
        qfree(v32, v18);
        *(_QWORD *)&v32 = 0;
      }
      if ( *((_QWORD *)&v32 + 1) )
      {
        *(_QWORD *)&v33 = 0;
        qfree(*((_QWORD *)&v32 + 1), v18);
        *((_QWORD *)&v32 + 1) = 0;
        *((_QWORD *)&v33 + 1) = 0;
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34, v18);
      }
      if ( *((_QWORD *)&v32 + 1) )
      {
        *(_QWORD *)&v33 = 0;
        qfree(*((_QWORD *)&v32 + 1), v18);
      }
      if ( (_QWORD)v32 )
        qfree(v32, v18);
      ++v17;
    }
    while ( v17 != v14 );
  }
  if ( v23 )
  {
    v20 = (QT::QAction *)operator new(0x10u);
    QT::QAction::QAction(v20, a1);
    QT::QString::fromUtf8(v28, 3, "...");
    QT::QAction::setText(v20, (const QT::QString *)v28);
    if ( v28[0] && !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
      free(v28[0]);
    QT::QAction::setEnabled(v20, 0);
    QT::QWidget::addAction(a1, v20);
  }
  v10 = (volatile signed __int32 *)ptr;
  if ( ptr )
  {
LABEL_36:
    if ( !_InterlockedSub(v10, 1u) )
      free(ptr);
  }
  return v36 - __readfsqword(0x28u);
}
