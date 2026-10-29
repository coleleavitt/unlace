unsigned __int64 __fastcall sub_388400(double a1)
{
  int v1; // ebx
  char v3; // al
  QT::QAction *v4; // r13
  size_t v5; // rax
  const char *v6; // rbp
  int v7; // ebx
  QT::QAction *v8; // r12
  char *v9; // rsi
  _QWORD *v10; // rdi
  int v11; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-C0h]
  int v13; // [rsp+10h] [rbp-B8h]
  void *ptr[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  int v16; // [rsp+48h] [rbp-80h]
  char v17[76]; // [rsp+4Ch] [rbp-7Ch] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v16 = 16;
  if ( (unsigned __int8)print_auto_state(&v15) )
  {
    if ( (unsigned __int8)getinf_flag(44, 4) )
      sub_33F9E0(*((_QWORD *)qword_8CF010 + 87), v15);
    sub_388000(0, v17, nullptr);
  }
  v11 = 0;
  v1 = -1;
  v12 = -1;
  v13 = 0;
  get_auto_display(&v11);
  if ( (unsigned __int8)getinf_flag(2, 1) )
    v1 = v13;
  if ( dword_8BCA70 != v1 )
  {
    dword_8BCA70 = v1;
    v3 = getinf_flag(2, 1);
    v4 = (QT::QAction *)unk_8CA560;
    if ( !v3 )
    {
      QT::QMetaObject::tr((QT::QMetaObject *)ptr, (const char *)&QT::QObject::staticMetaObject, "Analysis disabled", 0);
      QT::QAction::setToolTip(v4, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v7 = 62;
      goto LABEL_17;
    }
    v5 = 1;
    v6 = "?";
    if ( (unsigned __int64)v1 <= 3 )
    {
      v6 = off_867EC0[v1];
      v5 = 0;
      if ( v6 )
        v5 = strlen(off_867EC0[v1]);
    }
    a1 = QT::QString::fromUtf8(ptr, v5, v6);
    QT::QAction::setToolTip(v4, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v1 == 2 )
    {
      v9 = "Waiting";
      v10 = QT::QCoreApplication::self;
    }
    else
    {
      if ( v1 == 3 )
      {
        v7 = 59;
        sub_310CD0((__int64)qword_8CD748, 0);
        goto LABEL_17;
      }
      if ( v1 )
      {
        v7 = 60;
        sub_310CD0((__int64)qword_8CD748, 1);
LABEL_17:
        v8 = (QT::QAction *)unk_8CA560;
        (*(void (__fastcall **)(void **, _QWORD *, _QWORD, double))(*QT::QCoreApplication::self + 136LL))(
          ptr,
          QT::QCoreApplication::self,
          (unsigned int)v7,
          a1);
        QT::QAction::setIcon(v8, (const QT::QIcon *)ptr);
        QT::QIcon::~QIcon((QT::QIcon *)ptr);
        return v18 - __readfsqword(0x28u);
      }
      v9 = "Analysis";
      v10 = QT::QCoreApplication::self;
    }
    v7 = sub_47A0E0(v10, v9, 0);
    sub_310CD0((__int64)qword_8CD748, 0);
    if ( v7 <= 0 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_17;
  }
  return v18 - __readfsqword(0x28u);
}
