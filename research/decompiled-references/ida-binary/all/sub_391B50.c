QT::QTreeWidgetItem *__fastcall sub_391B50(__int64 a1, QT::QTreeWidgetItem *a2, const QT::QString *a3, const char **a4)
{
  QT::QTreeWidgetItem *v6; // rbx
  void (__fastcall *v7)(QT::QTreeWidgetItem *, _QWORD, _QWORD, _BYTE *); // r15
  void (__fastcall *v8)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *); // r14
  void (__fastcall *v10)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *); // [rsp+8h] [rbp-80h]
  _BYTE v11[8]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v12[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v6 = (QT::QTreeWidgetItem *)operator new(0x60u);
  if ( a2 )
    QT::QTreeWidgetItem::QTreeWidgetItem(v6, a2, 0);
  else
    QT::QTreeWidgetItem::QTreeWidgetItem(v6, *(QT::QTreeWidget **)(a1 + 80), 0);
  *((_DWORD *)v6 + 23) = -1;
  *(_QWORD *)v6 = &SCTreeWidgetItem___vtable;
  if ( (*a4)[33] )
  {
    *((_DWORD *)v6 + 23) = 2;
    sub_390E80((QT::QIcon *)v11, 2);
    v10 = *(void (__fastcall **)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v6 + 32LL);
    QT::QIcon::operator QT::QVariant(v12, v11);
    v10(v6, 0, 1, v12);
    QT::QVariant::~QVariant((QT::QVariant *)v12);
    QT::QIcon::~QIcon((QT::QIcon *)v11);
  }
  v7 = *(void (__fastcall **)(QT::QTreeWidgetItem *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v6 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v12, a3);
  v7(v6, 0, 0, v12);
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  v8 = *(void (__fastcall **)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v6 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v12, *(_DWORD *)(a1 + 112));
  v8(v6, 0, 256, v12);
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  sub_390500((const char ***)(a1 + 104), a4);
  return v6;
}
