void __fastcall sub_37BB90(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // r13
  int v3; // r15d
  QT::QListWidgetItem *v4; // r12
  void (__fastcall *v5)(QT::QListWidgetItem *, __int64, _BYTE *); // r13
  QT::QListWidget *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  void *ptr[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v11[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v1 = QT::QListWidget::currentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL));
  v2 = QT::QListWidget::item(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL), v1);
  (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v2 + 24LL))(v11, v2, 256);
  v3 = QT::QVariant::toInt((QT::QVariant *)v11, nullptr);
  QT::QVariant::~QVariant((QT::QVariant *)v11);
  v4 = (QT::QListWidgetItem *)operator new(0x28u);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v11, v2, 0);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v11);
  QT::QListWidgetItem::QListWidgetItem(v4, (const QT::QString *)ptr, nullptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = *(void (__fastcall **)(QT::QListWidgetItem *, __int64, _BYTE *))(*(_QWORD *)v4 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v11, v3);
  v5(v4, 256, v11);
  QT::QVariant::~QVariant((QT::QVariant *)v11);
  v6 = *(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 64LL);
  v7 = QT::QListWidget::count(v6);
  QT::QListWidget::insertItem(v6, v7, v4);
  v8 = QT::QListWidget::takeItem(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL), v1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = QT::QTableWidget::currentRow(*(QT::QTableWidget **)(*(_QWORD *)(a1 + 48) + 32LL));
  sub_37A9D0((_QWORD *)(*(_QWORD *)(a1 + 104) + 48LL * v9), v3);
}
