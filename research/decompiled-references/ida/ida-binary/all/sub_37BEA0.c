unsigned __int64 __fastcall sub_37BEA0(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // r13
  QT::QListWidgetItem *v3; // r12
  void (__fastcall *v4)(QT::QListWidgetItem *, __int64, _BYTE *); // r13
  QT::QListWidget *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v10; // [rsp+Ch] [rbp-8Ch] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v1 = QT::QListWidget::currentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 64LL));
  v2 = QT::QListWidget::item(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 64LL), v1);
  (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v2 + 24LL))(v12, v2, 256);
  v10 = QT::QVariant::toInt((QT::QVariant *)v12, nullptr);
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  v3 = (QT::QListWidgetItem *)operator new(0x28u);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v12, v2, 0);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  QT::QListWidgetItem::QListWidgetItem(v3, (const QT::QString *)ptr, nullptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = *(void (__fastcall **)(QT::QListWidgetItem *, __int64, _BYTE *))(*(_QWORD *)v3 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v12, v10);
  v4(v3, 256, v12);
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  v5 = *(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL);
  v6 = QT::QListWidget::count(v5);
  QT::QListWidget::insertItem(v5, v6, v3);
  v7 = QT::QListWidget::takeItem(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 64LL), v1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = QT::QTableWidget::currentRow(*(QT::QTableWidget **)(*(_QWORD *)(a1 + 48) + 32LL));
  sub_37BDF0(*(_QWORD *)(a1 + 104) + 48LL * v8, &v10);
  return v13 - __readfsqword(0x28u);
}
