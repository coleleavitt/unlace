unsigned __int64 __fastcall sub_4962F0(QT::QAbstractItemView *this, __int64 a2, int a3)
{
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // rax
  __int64 v13; // rdx
  int *v14; // r15
  int *i; // r14
  void *v16; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v19; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-78h] BYREF
  QT::QAbstractItemView *v21; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-68h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  __int64 v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  int v26; // [rsp+80h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v21 = this;
  v4 = QT::QAbstractItemView::selectionModel(this);
  v20 = dirtree_widget_qmodel_visitor_t___vtable;
  v22 = QT::QAbstractItemView::model(this);
  v5 = QT::QAbstractItemView::model(this);
  v6 = *(_QWORD *)(v5 + 216);
  if ( !v6 )
    v6 = *(_QWORD *)(v5 + 208);
  v23 = v6;
  v20 = base_dirtree_widget_t::take_tree_snapshot;
  v7 = *(_QWORD *)v21;
  v24 = a2;
  v8 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *))(v7 + 800))(v21);
  v26 = a3;
  v25 = v8;
  if ( (a3 & 4) != 0 )
  {
    ptr = nullptr;
    *(_QWORD *)&v19 = 0xFFFFFFFF00000000LL;
    *((_QWORD *)&v19 + 1) = v22;
    sub_48A940(&v20, (__int64)&ptr);
    if ( (a3 & 1) == 0 )
      goto LABEL_5;
  }
  else if ( (a3 & 1) == 0 )
  {
    goto LABEL_5;
  }
  QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)&ptr, v4);
  v12 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_3FB980((__m128i *)&ptr, 0, 0, 0, v10, v11);
    v12 = (int *)ptr;
  }
  v13 = v19;
  v14 = (int *)v19;
  if ( !v12 || *v12 > 1 )
  {
    sub_3FB980((__m128i *)&ptr, 0, 0, 0, v10, v11);
    v13 = v19;
  }
  for ( i = (int *)(v13 + 24LL * *((_QWORD *)&v19 + 1)); i != v14; v14 += 6 )
    sub_489A40((__int64)&v20, v14, a3, 0);
  if ( !ptr || _InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
LABEL_5:
    if ( (a3 & 2) == 0 )
      return v27 - __readfsqword(0x28u);
    goto LABEL_19;
  }
  free(ptr);
  if ( (a3 & 2) == 0 )
    return v27 - __readfsqword(0x28u);
LABEL_19:
  QT::QItemSelectionModel::currentIndex((QT::QItemSelectionModel *)&v16);
  if ( ((HIDWORD(v16) | (unsigned int)v16) & 0x80000000) == 0 )
  {
    if ( *((_QWORD *)&v17 + 1) )
    {
      QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)&ptr);
      if ( v16 != ptr || v19 != v17 )
        sub_489A40((__int64)&v20, (int *)&v16, a3, 1);
    }
  }
  return v27 - __readfsqword(0x28u);
}
