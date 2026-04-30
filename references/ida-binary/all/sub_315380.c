unsigned __int64 __fastcall sub_315380(QT::QObject *a1, QT::QWidget *a2, QT::QAction *a3, char a4)
{
  int *v4; // rsi
  unsigned __int64 v5; // rbp
  size_t v6; // rax
  const char *v7; // rbx
  size_t v8; // rdx
  double v9; // xmm0_8
  QT::QAction *v10; // rbx
  double v11; // xmm0_8
  __int64 v12; // rdx
  const char *v13; // rax
  double v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v33; // [rsp+28h] [rbp-130h]
  __int64 v34; // [rsp+40h] [rbp-118h] BYREF
  __int128 v35; // [rsp+48h] [rbp-110h]
  void *v36[4]; // [rsp+60h] [rbp-F8h] BYREF
  void *v37[4]; // [rsp+80h] [rbp-D8h] BYREF
  void *v38[4]; // [rsp+A0h] [rbp-B8h] BYREF
  void *v39[4]; // [rsp+C0h] [rbp-98h] BYREF
  void *v40[4]; // [rsp+E0h] [rbp-78h] BYREF
  void *ptr[3]; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v4 = (int *)"History64";
  v42 = __readfsqword(0x28u);
  v34 = 0;
  v35 = 0;
  reg_read_strlist(&v34, "History64");
  if ( (int)v35 > 0 )
  {
    v5 = 0;
    v33 = (unsigned int)(v35 - 1);
    while ( 1 )
    {
      v18 = v34 + 24 * v5;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v6 = v19 - 1;
        v7 = *(const char **)v18;
        v8 = v6 >> 63;
        if ( v7 )
          goto LABEL_4;
      }
      else
      {
        v7 = &s1;
        LOBYTE(v8) = 0;
        v6 = 0;
        if ( &s1 )
        {
LABEL_4:
          if ( !(_BYTE)v8 )
            goto LABEL_5;
        }
      }
      v6 = 0;
      if ( v7 )
        v6 = strlen(v7);
LABEL_5:
      v9 = QT::QString::fromUtf8(v36, v6, v7);
      v10 = (QT::QAction *)operator new(0x10u);
      QT::QAction::QAction(v10, a1);
      QT::QObject::connect(ptr, v10, "2triggered()", *(_QWORD *)(*((_QWORD *)a1 + 44) + 64LL), "1map()", 0);
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
      QT::QSignalMapper::setMapping(*(QT::QSignalMapper **)(*((_QWORD *)a1 + 44) + 64LL), v10, (const QT::QString *)v36);
      v11 = QT::QString::fromUtf8(v37, 8, "%1%2. %3", v9);
      v12 = 1;
      v13 = "&";
      if ( v5 > 9 )
      {
        v12 = 0;
        v13 = (const char *)&unk_5C2F25;
      }
      v14 = QT::QString::fromUtf8(v38, v12, v13, v11);
      QT::QString::arg(v39, v37, v38, 0, 32, v14);
      QT::QString::arg(v40, v39, v5, 0, 10, 32);
      QT::QString::arg(ptr, v40, v36, 0, 32, v14);
      QT::QAction::setText(v10, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v40[0] && !_InterlockedSub((volatile signed __int32 *)v40[0], 1u) )
        free(v40[0]);
      if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
        free(v39[0]);
      if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
        free(v38[0]);
      if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
        free(v37[0]);
      v4 = (int *)a3;
      QT::QWidget::insertAction(a2, a3, v10);
      if ( a4 )
      {
        v20 = *((_QWORD *)a1 + 44);
        ptr[0] = v10;
        v4 = *(int **)(v20 + 56);
        sub_1825D0((int **)(v20 + 40), v4, (__int64 *)ptr, v15, v16, v17);
        v23 = *(int **)(v20 + 40);
        if ( !v23 || *v23 > 1 )
        {
          v4 = nullptr;
          sub_1821F0(v20 + 40, 0, 0, 0, v21, v22);
        }
      }
      if ( v36[0] && !_InterlockedSub((volatile signed __int32 *)v36[0], 1u) )
        free(v36[0]);
      if ( v5 == v33 )
        break;
      ++v5;
    }
  }
  v24 = v34;
  if ( v34 )
  {
    v25 = v35;
    if ( (_QWORD)v35 )
    {
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v24 + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, (const char *)v4);
          v24 = v34;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v35 = 0;
    qfree(v24, (const char *)v4);
  }
  return v42 - __readfsqword(0x28u);
}
