QT::QTableWidgetItem *__fastcall sub_4D3CE0(
        __int64 a1,
        int a2,
        const QT::QString *a3,
        __int64 a4,
        __int64 a5,
        QT::QIcon *a6)
{
  QT::QTableWidgetItem *v8; // rbx
  void (__fastcall *v9)(QT::QTableWidgetItem *, __int64, __int128 *); // rax
  void (__fastcall *v10)(QT::QTableWidgetItem *, __int64, __int128 *); // rax
  void (__fastcall *v11)(QT::QTableWidgetItem *, __int64, __int128 *); // r14
  void (__fastcall *v12)(QT::QTableWidgetItem *, _QWORD, __int128 *); // r12
  void (__fastcall *v16)(QT::QTableWidgetItem *, __int64, __int128 *); // [rsp+10h] [rbp-88h]
  void (__fastcall *v17)(QT::QTableWidgetItem *, __int64, __int128 *); // [rsp+10h] [rbp-88h]
  void (__fastcall *v18)(QT::QTableWidgetItem *, __int64, __int128 *); // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+28h] [rbp-70h] BYREF
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v8 = (QT::QTableWidgetItem *)operator new(0x40u);
  QT::QTableWidgetItem::QTableWidgetItem(v8, 0);
  QT::QTableWidgetItem::setFlags(v8, a2 == 0 ? 49 : 33);
  QT::QBrush::QBrush(&v19, a4, 1);
  v9 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
  if ( *(_DWORD *)(v19 + 4) )
  {
    v18 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
    QT::QBrush::operator QT::QVariant(&v20, &v19);
    v18(v8, 8, &v20);
  }
  else
  {
    v21 = 0;
    v22 = 2;
    v20 = 0;
    v9(v8, 8, &v20);
  }
  QT::QVariant::~QVariant((QT::QVariant *)&v20);
  QT::QBrush::~QBrush((QT::QBrush *)&v19);
  QT::QBrush::QBrush(&v19, a5, 1);
  v10 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
  if ( *(_DWORD *)(v19 + 4) )
  {
    v17 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
    QT::QBrush::operator QT::QVariant(&v20, &v19);
    v17(v8, 9, &v20);
  }
  else
  {
    v21 = 0;
    v22 = 2;
    v20 = 0;
    v10(v8, 9, &v20);
  }
  QT::QVariant::~QVariant((QT::QVariant *)&v20);
  QT::QBrush::~QBrush((QT::QBrush *)&v19);
  if ( !(unsigned __int8)QT::QIcon::isNull(a6) )
  {
    v16 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
    QT::QIcon::operator QT::QVariant(&v20, a6);
    v16(v8, 1, &v20);
    QT::QVariant::~QVariant((QT::QVariant *)&v20);
  }
  v11 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, __int128 *))(*(_QWORD *)v8 + 32LL);
  LODWORD(v19) = 132;
  if ( &unk_8C30A0 && !dword_8C30AC )
    QT::QMetaType::registerHelper(&unk_8C30A0);
  QT::QVariant::moveConstruct(&v20, &unk_8C30A0, &v19);
  v11(v8, 7, &v20);
  QT::QVariant::~QVariant((QT::QVariant *)&v20);
  v12 = *(void (__fastcall **)(QT::QTableWidgetItem *, _QWORD, __int128 *))(*(_QWORD *)v8 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)&v20, a3);
  v12(v8, 0, &v20);
  QT::QVariant::~QVariant((QT::QVariant *)&v20);
  QT::QTableWidget::setItem(*(QT::QTableWidget **)(*(_QWORD *)(a1 + 96) + 88LL), 0, a2, v8);
  return v8;
}
