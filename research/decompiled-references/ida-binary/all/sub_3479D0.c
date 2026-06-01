unsigned __int64 __fastcall sub_3479D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  QT::QWidget *v4; // rbp
  __int64 i; // r12
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp
  QT::QComboBox *v10; // rbp
  char **v11; // rbp
  const char *v12; // rdx
  QT::QComboBox *v13; // r14
  int v14; // r15d
  QT::QObject *v15; // rbp
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  QT::QVariant *v21; // [rsp+0h] [rbp-B8h]
  const QT::QObject **v22; // [rsp+8h] [rbp-B0h]
  QT::QPixmap *v23; // [rsp+10h] [rbp-A8h]
  _BYTE v24[8]; // [rsp+28h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &navigator_t___vtable;
  *(_QWORD *)(a1 + 16) = navigator_t___vtable_at__16;
  QT::QObject::QObject((QT::QObject *)(a1 + 96), nullptr);
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 96) = &HintProvider___vtable;
  sub_2D21B0((const QT::QObject **)(a1 + 96), 0, 0, (__int64)&unk_5C2F25, v2, v3, (__int64)v21, a1 + 96, (__int64)v23);
  QT::QPixmap::QPixmap((QT::QPixmap *)(a1 + 664));
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = sub_346940((_QWORD *)a1);
  v4 = (QT::QWidget *)operator new(0x1C8u);
  sub_33F2E0(v4, a1);
  *(_QWORD *)(a1 + 696) = v4;
  QT::QWidget::setSizePolicy(v4, &unk_770000);
  for ( i = 0; i != 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 712) = sub_346EF0((QT::QWidget *)a1, (9uLL >> i) & 1);
  v6 = operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_88CC00, "Additional display:", 0);
  sub_53BA20(v6, ptr, 0);
  v7 = (volatile signed __int32 *)ptr[0];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free(ptr[0]);
  v8 = operator new(0x28u);
  sub_53B9D0(v8, 0);
  *(_QWORD *)(a1 + 88) = v8;
  v9 = operator new(0x28u);
  sub_53B9D0(v9, 0);
  *(_QWORD *)(a1 + 688) = v9;
  QT::QWidget::setSizePolicy(v9, &stru_50000);
  v10 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v10, nullptr);
  *(_QWORD *)(a1 + 704) = v10;
  QT::QWidget::setFocusPolicy(v10, 2);
  v11 = off_866E20;
  do
  {
    v12 = *v11;
    v27 = 0;
    v13 = *(QT::QComboBox **)(a1 + 704);
    v28 = 2;
    v26 = 0;
    QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_88CC00, v12, 0);
    v14 = QT::QComboBox::count(v13);
    QT::QIcon::QIcon((QT::QIcon *)v24);
    QT::QComboBox::insertItem(v13, v14, (const QT::QIcon *)v24, (const QT::QString *)ptr, (const QT::QVariant *)&v26);
    QT::QIcon::~QIcon((QT::QIcon *)v24);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v11;
    QT::QVariant::~QVariant((QT::QVariant *)&v26);
  }
  while ( v11 != (char **)&unk_866E68 );
  QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 704), 0);
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(a1 + 704), -1);
  v15 = *(QT::QObject **)(a1 + 704);
  QT::QString::fromUtf8(ptr, 18, "navigator_patterns");
  QT::QObject::doSetObjectName(v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QObject::connect(ptr, *(_QWORD *)(a1 + 704), "2currentIndexChanged(int)", a1, "1displayChanged(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  sub_3477F0((_QWORD *)a1);
  QT::QWidget::setSizePolicy(a1, TextArrows__::vfunc_2);
  sub_345BD0((QT::QWidget *)a1);
  v16 = *(_QWORD *)(a1 + 696);
  v17 = reg_int_op("BandRefreshRate", 0, 200, 0);
  sub_340E80(v16, v17);
  *(_DWORD *)(a1 + 660) |= 1u;
  sub_2D21B0(v22, *(_QWORD *)(a1 + 696), a1, (__int64)"bandHint", v18, v19, (__int64)&v26, (__int64)v22, a1 + 664);
  sub_340ED0(*(QT::QWidget **)(a1 + 696), nullptr, nullptr, (__int64)sub_345200, *(_QWORD *)(a1 + 696), 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 696) + 448LL) = sub_345540;
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 696),
    "2screen_ea_changed(ea_t, uint32)",
    a1,
    "1on_band_screen_ea_changed(ea_t, uint32)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 696),
    "2visible_addr_range_changed(const range_t &)",
    a1,
    "1on_band_visible_addr_range_changed(const range_t &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  *(_QWORD *)(*(_QWORD *)(a1 + 696) + 440LL) = sub_3464C0;
  return v29 - __readfsqword(0x28u);
}
