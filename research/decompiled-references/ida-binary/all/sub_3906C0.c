__int64 __fastcall sub_3906C0(
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
  __int64 v10; // rbx
  int v12; // ebp
  int v13; // eax
  __m128i si128; // xmm0
  QT::QComboBox *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // r15d
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  QT::QTableWidgetItem *v25; // rbx
  QT::QTableWidgetItem *v26; // rsi
  unsigned __int64 v27; // rdi
  QT::QTableWidgetItem *v28; // r15
  __int64 v29; // rax
  int v30; // r15d
  __int64 v31; // rbx
  double v32; // xmm4_8
  double v33; // xmm5_8
  int v34; // r15d
  __int64 v35; // r15
  unsigned __int8 isChecked; // al
  int v37; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 (__fastcall *v38)(__int64, __int64, __int64 *, const char *, _QWORD); // [rsp+18h] [rbp-A0h]
  const char *v39; // [rsp+28h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v41; // [rsp+40h] [rbp-78h]
  _QWORD v42[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  v10 = v41;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !v10 )
      return 0;
  }
  else if ( !v10 )
  {
    return 0;
  }
  v12 = 0;
  v13 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88));
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
  v15 = *(QT::QComboBox **)(a1 + 96);
  LODWORD(v41) = 0;
  v37 = v13;
  v16 = v13;
  *(__m128i *)ptr = si128;
  v17 = QT::QComboBox::lineEdit(v15);
  sub_357F80(&v39, v17, (__int128 *)ptr, *(double *)si128.m128i_i64, a3, a4, a5, v18, v19, a8, a9);
  if ( v16 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v25 = (QT::QTableWidgetItem *)QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), v12, 0);
        v26 = v25;
        (*(void (__fastcall **)(_QWORD *, QT::QTableWidgetItem *, __int64))(*(_QWORD *)v25 + 24LL))(v42, v25, 10);
        v27 = v43 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (_UNKNOWN *)(v43 & 0xFFFFFFFFFFFFFFFCLL) == &unk_8BCA80 )
          break;
        if ( v27 && &unk_8BCA80 )
        {
          v20 = *(_DWORD *)&byte_9[4 * (v43 >> 2) + 3];
          if ( !v20 )
            v20 = QT::QMetaType::registerHelper(v27);
          v21 = dword_8BCA8C;
          if ( !dword_8BCA8C )
            v21 = QT::QMetaType::registerHelper(&unk_8BCA80);
          if ( v20 == v21 )
            break;
        }
        LODWORD(ptr[0]) = 0;
        v28 = (QT::QTableWidgetItem *)v42;
        if ( (v43 & 1) != 0 )
          v28 = (QT::QTableWidgetItem *)(*(int *)(v42[0] + 4LL) + v42[0]);
        v29 = QT::QVariant::metaType((QT::QVariant *)v42);
        v26 = v28;
        QT::QMetaType::convert(v29, v28, &unk_8BCA80, ptr);
        v30 = (int)ptr[0];
        QT::QVariant::~QVariant((QT::QVariant *)v42);
        if ( v30 != 2 )
          goto LABEL_13;
LABEL_20:
        v31 = sub_389C80(v25, v26, v23, v24, *(double *)si128.m128i_i64);
        qword_8CF398 = *(_QWORD *)(v31 + 8);
        QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
        v34 = sub_38F320(
                a1,
                (char *)&qword_8CF3A0,
                qword_8CF398,
                *(QT::QTreeWidgetItem **)ptr[1],
                0,
                *(double *)si128.m128i_i64,
                a3,
                a4,
                a5,
                v32,
                v33,
                a8,
                a9);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( v34 == -1 || !(_QWORD)xmmword_8CF3A8 )
          goto LABEL_13;
        v35 = *(_QWORD *)(a1 + 64);
        v38 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *, const char *, _QWORD))(*(_QWORD *)v35 + 64LL);
        isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 72) + 120LL));
        if ( !v38(v35, v31, &qword_8CF3A0, v39, isChecked) )
          return 0;
        if ( v37 == ++v12 )
          return 1;
      }
      v22 = v42[0];
      QT::QVariant::~QVariant((QT::QVariant *)v42);
      if ( v22 == 2 )
        goto LABEL_20;
LABEL_13:
      ++v12;
    }
    while ( v37 != v12 );
  }
  return 1;
}
