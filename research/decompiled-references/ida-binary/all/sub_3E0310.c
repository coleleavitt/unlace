__int64 __fastcall sub_3E0310(QT::QAbstractItemView *this)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rbx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v1 = QT::QAbstractItemView::selectionModel(this);
  QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)&ptr, v1);
  if ( !v7 )
  {
LABEL_6:
    v3 = 0;
    goto LABEL_7;
  }
  v2 = QT::QAbstractItemView::model(this);
  v3 = *(_QWORD *)(v6 + 8);
  if ( !v3 )
  {
    if ( *(int *)v6 < 0 || *(int *)(v6 + 4) < 0 || !*(_QWORD *)(v6 + 16) )
    {
      v3 = *(_QWORD *)(v2 + 32);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v3;
}
