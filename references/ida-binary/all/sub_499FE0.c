unsigned __int64 __fastcall sub_499FE0(QT::QTableView *this)
{
  int v1; // eax
  __m128i si128; // xmm0
  __int64 v3; // rax
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  void *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = QT::QAbstractItemView::selectionModel(this);
  QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)v7, v1);
  si128 = _mm_load_si128((const __m128i *)v7);
  v6 = v8;
  *(__m128i *)ptr = si128;
  if ( si128.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    if ( v7[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
        free(v7[0]);
    }
  }
  sub_4E8CA0(this, ptr);
  v3 = QT::QTableView::horizontalHeader(this);
  sub_4EAA40(this, v3, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v9 - __readfsqword(0x28u);
}
