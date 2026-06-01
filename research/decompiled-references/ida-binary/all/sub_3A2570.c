unsigned __int64 __fastcall sub_3A2570(__int64 a1)
{
  _QWORD *v1; // r12
  const char *v2; // rsi
  volatile signed __int32 *v3; // rax
  QT::QObject *v4; // r14
  const char *v5; // r15
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rax
  __int64 v11; // rax
  const char *v12; // [rsp+10h] [rbp-90h] BYREF
  __int64 v13; // [rsp+18h] [rbp-88h]
  void *ptr; // [rsp+30h] [rbp-70h] BYREF
  const char *v15; // [rsp+38h] [rbp-68h]
  void *v16[3]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  sub_4AB740(a1);
  sub_2778A0(a1 + 2512, a1);
  *(_QWORD *)(a1 + 2568) = 0;
  *(_OWORD *)(a1 + 2576) = 0;
  *(_QWORD *)(a1 + 2592) = 0;
  *(_QWORD *)a1 = &TChooser___vtable;
  *(_QWORD *)(a1 + 16) = TChooser___vtable_at__16;
  *(_QWORD *)(a1 + 40) = TChooser___vtable_at__40;
  *(_QWORD *)(a1 + 104) = TChooser___vtable_at__104;
  *(_QWORD *)(a1 + 2512) = TChooser___vtable_at__2512;
  sub_525C80(a1 + 40, off_8685A0, 6);
  v1 = QT::QCoreApplication::self;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2392) + 72LL) != -1 )
  {
    (*(void (__fastcall **)(void **, _QWORD *))(*QT::QCoreApplication::self + 136LL))(v16, QT::QCoreApplication::self);
    QT::QWidget::setWindowIcon((QT::QWidget *)a1, (const QT::QIcon *)v16);
    QT::QIcon::~QIcon((QT::QIcon *)v16);
  }
  if ( *(_QWORD *)(a1 + 2488) )
  {
    QT::QWidget::windowTitle((QT::QWidget *)v16);
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v16);
    v2 = v15;
    if ( !v15 )
      v2 = (const char *)&QT::QByteArray::_empty;
    sub_314450((__int64)&v12, v2, "Edit");
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      free(ptr);
      v3 = (volatile signed __int32 *)v16[0];
      if ( !v16[0] )
        goto LABEL_11;
    }
    else
    {
      v3 = (volatile signed __int32 *)v16[0];
      if ( !v16[0] )
        goto LABEL_11;
    }
    if ( !_InterlockedSub(v3, 1u) )
      free(v16[0]);
LABEL_11:
    v4 = *(QT::QObject **)(a1 + 2488);
    if ( v13 )
    {
      v7 = v13 - 1;
      v5 = v12;
      v6 = (unsigned __int64)(v13 - 1) >> 63;
      if ( !v12 )
        goto LABEL_25;
    }
    else
    {
      v5 = &s1;
      LOBYTE(v6) = 0;
      v7 = 0;
      if ( !&s1 )
        goto LABEL_25;
    }
    if ( !(_BYTE)v6 )
    {
LABEL_14:
      v8 = QT::QString::fromUtf8(v16, v7, v5);
      QT::QObject::doSetObjectName(v4, (const QT::QString *)v16);
      if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
        free(v16[0]);
      if ( v12 )
      {
        v13 = 0;
        qfree(v12, (const char *)v16, v8);
      }
      goto LABEL_19;
    }
LABEL_25:
    v7 = 0;
    if ( v5 )
      v7 = strlen(v5);
    goto LABEL_14;
  }
LABEL_19:
  if ( (unsigned __int8)sub_4A0660(a1, 0x40000) )
  {
    v15 = nullptr;
    ptr = sub_4679A0;
    v9 = operator new(0x18u);
    *(_DWORD *)v9 = 1;
    *(_QWORD *)(v9 + 16) = a1;
    *(_QWORD *)(v9 + 8) = sub_3A1000;
    QT::QObject::connectImpl(v16, v1, &ptr, a1, 0, v9, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v16);
  }
  if ( (unsigned __int8)sub_4A0660(a1, &stru_50000) )
  {
    v16[1] = nullptr;
    v16[0] = sub_467A00;
    v11 = operator new(0x18u);
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 16) = a1;
    *(_QWORD *)(v11 + 8) = sub_3A0FB0;
    QT::QObject::connectImpl(&ptr, v1, v16, a1, 0, v11, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  }
  return v17 - __readfsqword(0x28u);
}
