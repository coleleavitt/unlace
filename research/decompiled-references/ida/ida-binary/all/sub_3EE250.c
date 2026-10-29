QT::QStandardItem *__fastcall sub_3EE250(QT::QString *a1, __int64 a2)
{
  QT::QStandardItem *v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v5[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v4 = a2;
  v6 = __readfsqword(0x28u);
  v2 = (QT::QStandardItem *)operator new(0x10u);
  QT::QStandardItem::QStandardItem(v2, a1);
  QT::QVariant::QVariant(v5, &QT::QtPrivate::QMetaTypeInterfaceWrapper<long long>::metaType, &v4);
  QT::QStandardItem::setData(v2, (const QT::QVariant *)v5, 262);
  QT::QVariant::~QVariant((QT::QVariant *)v5);
  return v2;
}
