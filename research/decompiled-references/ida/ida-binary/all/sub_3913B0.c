unsigned __int64 __fastcall sub_3913B0(
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
  void *v9; // r12
  double v11; // xmm4_8
  double v12; // xmm5_8
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  v9 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !v9 )
      return vars18 - __readfsqword(0x28u);
  }
  else if ( !v9 )
  {
    return vars18 - __readfsqword(0x28u);
  }
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  sub_390F70(a1, *(QT::QTreeWidgetItem **)ptr[1], a2, a3, a4, a5, v11, v12, a8, a9);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars18 - __readfsqword(0x28u);
}
