unsigned __int64 __fastcall sub_5269A0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __m128i v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  QT::QDialog::showEvent();
  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 2392) + 13LL) & 0x10) == 0 )
  {
    QT::QWidget::setFocus(v2, 7);
    v2 = *(_QWORD *)(a1 + 48);
  }
  QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)(v2 + 2472));
  QT::QItemSelectionModel::selectedIndexes((QT::QItemSelectionModel *)&ptr);
  if ( v7 )
  {
    if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
      sub_3FB980(&ptr, 0, 0, 0, v3, v4);
    v8 = _mm_loadu_si128((const __m128i *)ptr.m128i_i64[1]);
    v9 = *(_QWORD *)(ptr.m128i_i64[1] + 16);
    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 2472LL) + 488LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2472LL),
      &v8,
      0);
  }
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return v10 - __readfsqword(0x28u);
}
