unsigned __int64 __fastcall sub_391640(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  void *v15; // r12
  double v16; // xmm4_8
  double v17; // xmm5_8
  QT::QPushButton *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  void *ptr[7]; // [rsp+0h] [rbp+0h] BYREF

  v9 = *(_QWORD *)(a1 + 72);
  ptr[3] = (void *)__readfsqword(0x28u);
  v10 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(v9 + 48));
  sub_38DC20(a1, v10, *(double *)a2.m128_u64, a3, a4, a5, v11, v12, a8, a9);
  sub_391470(a1, *(double *)a2.m128_u64, a3, a4, a5, v13, v14, a8, a9);
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  v15 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v15 )
  {
    QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
    sub_390F70(a1, *(QT::QTreeWidgetItem **)ptr[1], a2, a3, a4, a5, v16, v17, a8, a9);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  v18 = (QT::QPushButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 1024);
  QT::QPushButton::setDefault(v18, 1);
  return sub_38BE00(a1, *(double *)a2.m128_u64, a3, a4, a5, v19, v20, a8, a9);
}
