__int64 __fastcall sub_4CFE90(__int64 a1, int a2, QT::QWidget *a3)
{
  QT::QStackedWidget *v4; // rdi
  unsigned int inserted; // eax
  __int64 v7; // rdi
  unsigned int v8; // r12d
  const QT::QObject *v9; // rbx
  QT::QCoreApplication *v10; // rax
  _BYTE v12[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(QT::QStackedWidget **)(a1 + 72);
  ptr[3] = (void *)__readfsqword(0x28u);
  inserted = QT::QStackedWidget::insertWidget(v4, a2, a3);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = inserted;
  ptr[0] = (void *)0x1000000010LL;
  QT::QTabBar::setIconSize(v7, ptr);
  (*(void (__fastcall **)(void **, QT::QWidget *))(*(_QWORD *)a3 + 416LL))(ptr, a3);
  QT::QTabBar::insertTab(*(QT::QTabBar **)(a1 + 64), v8, (const QT::QString *)ptr);
  (*(void (__fastcall **)(_BYTE *, QT::QWidget *))(*(_QWORD *)a3 + 424LL))(v12, a3);
  sub_4CFC40(a1, v8, nullptr, (const QT::QString *)ptr, (const QT::QIcon *)v12);
  v9 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = (QT::QCoreApplication *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v9);
      if ( v10 )
        break;
      v9 = *(const QT::QObject **)(*((_QWORD *)v9 + 1) + 16LL);
      if ( !v9 )
        goto LABEL_6;
    }
    sub_4C6D70(v10);
  }
LABEL_6:
  QT::QIcon::~QIcon((QT::QIcon *)v12);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v8;
}
