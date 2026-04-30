unsigned __int64 __fastcall sub_391790(
        __int64 a1,
        unsigned __int8 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QTableWidget *v11; // rdi
  int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  int v15; // r15d
  int i; // ebp
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, __int64, _BYTE *); // r14
  void *v19; // rbp
  double v21; // xmm4_8
  double v22; // xmm5_8
  void *ptr[4]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v24[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v11 = *(QT::QTableWidget **)(a1 + 88);
  v25 = __readfsqword(0x28u);
  v12 = QT::QTableWidget::rowCount(v11);
  if ( v12 > 0 )
  {
    v15 = v12;
    for ( i = 0; i != v15; ++i )
    {
      v17 = QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), i, 0);
      v18 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v17 + 32LL);
      QT::QVariant::QVariant((QT::QVariant *)v24, 2 * a2);
      v18(v17, 10, v24);
      QT::QVariant::~QVariant((QT::QVariant *)v24);
    }
  }
  sub_391470(a1, *(double *)a3.m128_u64, a4, a5, a6, v13, v14, a9, a10);
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  v19 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !v19 )
      return v25 - __readfsqword(0x28u);
  }
  else if ( !v19 )
  {
    return v25 - __readfsqword(0x28u);
  }
  QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
  sub_390F70(a1, *(QT::QTreeWidgetItem **)ptr[1], a3, a4, a5, a6, v21, v22, a9, a10);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v25 - __readfsqword(0x28u);
}
