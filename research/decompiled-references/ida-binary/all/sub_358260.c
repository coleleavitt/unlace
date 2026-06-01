unsigned __int64 __fastcall sub_358260(
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
  int v10; // ebp
  int v11; // r13d
  __int64 v13; // rax
  QT::QWidget *v14; // rbp
  int v15; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v10 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 896LL));
  v11 = *(_DWORD *)(a1 + 64);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 920LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 920LL),
    v11 == v10);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 912LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 912LL),
    v11 == v10);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 936LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 936LL),
    v11 == v10);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 928LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 928LL),
    v11 == v10);
  if ( v11 == v10 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(QT::QWidget **)(v13 + 920);
    v15 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(v13 + 896));
    QT::QWidget::setEnabled(v14, *(_DWORD *)(a1 + 64) == v15);
    QT::QWidget::setEnabled(
      *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 912LL),
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 920LL) + 32LL) + 8LL) & 1) == 0);
    sub_358190(a1, 0.0, a3, a4, a5, v16, v17, a8, a9);
  }
  return v18 - __readfsqword(0x28u);
}
