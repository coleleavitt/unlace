__int64 __fastcall sub_393E30(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebp
  double v11; // xmm4_8
  double v12; // xmm5_8
  const char *v14; // rsi
  unsigned int v15; // eax
  QT::QTreeWidgetItem *v16; // rax
  QT::QTreeWidgetItem *v17; // r12
  QT::QTreeWidgetItem *i; // rbp
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  _BYTE v23[64]; // [rsp+0h] [rbp-538h] BYREF
  __int64 v24; // [rsp+40h] [rbp-4F8h]
  __int64 v25; // [rsp+48h] [rbp-4F0h]
  QT::QTreeWidgetItem *v26; // [rsp+508h] [rbp-30h]
  unsigned __int64 v27; // [rsp+518h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  v9 = (unsigned __int64)qword_8CD748;
  sub_393740((__int64)v23, (__int64)qword_8CD748, a1);
  sub_38B6C0((__int64)v23, (const char *)v9);
  v10 = sub_38B7F0((__int64)v23);
  if ( v10 != 2 )
    goto LABEL_2;
  sub_3915D0((__int64)v23, 0, a2, a3, a4, a5, v11, v12, a8, a9);
  v14 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
  if ( !v14 )
  {
    v9 = 0;
    if ( (unsigned int)QT::QComboBox::count(*(QT::QComboBox **)(v25 + 48)) )
      goto LABEL_5;
LABEL_13:
    v10 = 0;
    goto LABEL_2;
  }
  v15 = sub_38C820((__int64)v23, v14);
  v9 = v15;
  if ( v15 == -1 )
    goto LABEL_13;
LABEL_5:
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(v25 + 48), v9);
  v9 = (unsigned __int64)&qword_8CF3A0;
  v16 = sub_38BAB0((__int64)v23, &qword_8CF3A0, qword_8CF398);
  v17 = v16;
  if ( v16 )
  {
    for ( i = *((QT::QTreeWidgetItem **)v16 + 7); i; i = *((QT::QTreeWidgetItem **)i + 7) )
    {
      v9 = 1;
      QT::QTreeWidgetItem::setExpanded(i, 1);
    }
    v26 = v17;
  }
  LOBYTE(v10) = 1;
  if ( (unsigned int)sub_53AB40((QT::QWidget *)v23) == 1 )
  {
    LOBYTE(v10) = sub_3906C0((__int64)v23, a2, a3, a4, a5, v19, v20, a8, a9) & 1;
    sub_1FDB10(a2, a3, a4, a5, v21, v22, a8, a9, (__int64)v23, (const char *)v9);
  }
  sub_38B6C0((__int64)v23, (const char *)v9);
  v10 = (unsigned __int8)v10;
LABEL_2:
  TStructureOffsetsForm__::vfunc_3((QT::QDialog *)v23, (const char *)v9);
  return v10;
}
