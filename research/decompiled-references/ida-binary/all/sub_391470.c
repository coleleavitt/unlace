unsigned __int64 __fastcall sub_391470(
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
  int i; // r12d
  QT::QTreeWidgetItem *v10; // rbx
  int v11; // r15d
  int v12; // r13d
  QT::QTableWidgetItem *v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // esi
  int v18; // [rsp+4h] [rbp-84h]
  void (__fastcall *v19)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *); // [rsp+8h] [rbp-80h]
  _BYTE v20[8]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v21[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v18 = QT::QTreeWidget::topLevelItemCount(*(QT::QTreeWidget **)(a1 + 80));
  if ( v18 > 0 )
  {
    for ( i = 0; i != v18; ++i )
    {
      while ( 1 )
      {
        v10 = (QT::QTreeWidgetItem *)QT::QTreeWidget::topLevelItem(*(QT::QTreeWidget **)(a1 + 80), i);
        if ( sub_38B880(a1, (__int64)v10) )
          break;
        if ( v18 == ++i )
          return v22 - __readfsqword(0x28u);
      }
      v11 = 0;
      v12 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88));
      if ( v12 <= 0 )
      {
LABEL_9:
        v16 = 3;
      }
      else
      {
        while ( 1 )
        {
          v13 = (QT::QTableWidgetItem *)QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), v11, 0);
          v16 = sub_390990(a1, v13, v10, 1, nullptr, a2, a3, a4, a5, v14, v15, a8, a9);
          if ( v16 == 5 )
            break;
          v16 &= ~2u;
          if ( v16 == 4 )
            break;
          if ( v12 == ++v11 )
            goto LABEL_9;
        }
      }
      *((_DWORD *)v10 + 23) = v16;
      sub_390E80((QT::QIcon *)v20, v16);
      v19 = *(void (__fastcall **)(QT::QTreeWidgetItem *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 32LL);
      QT::QIcon::operator QT::QVariant(v21, v20);
      v19(v10, 0, 1, v21);
      QT::QVariant::~QVariant((QT::QVariant *)v21);
      QT::QIcon::~QIcon((QT::QIcon *)v20);
    }
  }
  return v22 - __readfsqword(0x28u);
}
