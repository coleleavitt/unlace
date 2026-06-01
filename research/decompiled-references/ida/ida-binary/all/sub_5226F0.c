unsigned __int64 __fastcall sub_5226F0(QT::QWidget *this, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r8
  QT::QVBoxLayout *v7; // r12
  __int64 v8; // rsi
  QT::QHBoxLayout *v9; // r13
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v15; // rsi
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, 0, 0);
  *(_QWORD *)this = &standalone_dirtree_widget_host_t___vtable;
  *((_QWORD *)this + 2) = standalone_dirtree_widget_host_t___vtable_at__16;
  QT::QObject::QObject((QT::QWidget *)((char *)this + 40), nullptr);
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 40, a2, a3, v4, v5, v6);
  v7 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v7, this);
  QT::QLayout::setContentsMargins(v7, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QVBoxLayout *, _QWORD))(*(_QWORD *)v7 + 104LL))(v7, 0);
  QT::QBoxLayout::addWidget(v7, a2, 0, 0);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::windowIcon((QT::QWidget *)ptr);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  if ( !*(_BYTE *)(a2 + 1424) )
  {
    v8 = *(_QWORD *)(a2 + 1416);
    if ( v8 )
      QT::QBoxLayout::addWidget(v7, v8, 0, 0);
  }
  v9 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v9);
  v10 = *(_QWORD *)a2;
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1040LL);
  if ( v11 == sub_429F30 )
  {
    if ( *(_BYTE *)(a2 + 2408) )
      goto LABEL_13;
    v12 = *(_QWORD *)(a2 + 2400);
  }
  else
  {
    v12 = v11(a2);
  }
  if ( v12 )
    QT::QBoxLayout::addWidget(v9, v12, 0, 0);
  v10 = *(_QWORD *)a2;
LABEL_13:
  v13 = *(__int64 (__fastcall **)(__int64))(v10 + 1048);
  if ( v13 == sub_457710 )
  {
    if ( *(_BYTE *)(a2 + 2440) )
      goto LABEL_15;
    v15 = *(_QWORD *)(a2 + 2432);
  }
  else
  {
    v15 = v13(a2);
  }
  if ( v15 )
    QT::QBoxLayout::addWidget(v9, v15, 0, 0);
LABEL_15:
  QT::QBoxLayout::addLayout(v7, v9, 0);
  QT::QWidget::setLayout(this, v7);
  return v17 - __readfsqword(0x28u);
}
