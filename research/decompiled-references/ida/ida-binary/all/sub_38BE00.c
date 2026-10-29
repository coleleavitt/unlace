unsigned __int64 __fastcall sub_38BE00(
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
  __int64 v9; // rax
  QT::QWidget *v10; // rbp
  char v11; // si
  QT::QComboBox *v13; // rdi
  __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  const char *v17; // [rsp+8h] [rbp-40h] BYREF
  __m128i si128; // [rsp+10h] [rbp-38h] BYREF
  int v19; // [rsp+20h] [rbp-28h]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 72);
  v20 = __readfsqword(0x28u);
  v10 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(v9 + 160), 1024);
  if ( (unsigned int)sub_38BC70(a1, 0) && QT::QTreeWidget::currentItem(*(QT::QTreeWidget **)(a1 + 80)) )
  {
    v13 = *(QT::QComboBox **)(a1 + 96);
    v19 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
    v14 = QT::QComboBox::lineEdit(v13);
    v11 = sub_357F80(&v17, v14, (__int128 *)si128.m128i_i8, *(double *)si128.m128i_i64, a3, a4, a5, v15, v16, a8, a9);
  }
  else
  {
    v11 = 0;
  }
  QT::QWidget::setEnabled(v10, v11);
  return v20 - __readfsqword(0x28u);
}
