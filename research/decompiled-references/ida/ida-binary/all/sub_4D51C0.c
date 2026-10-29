__int64 __fastcall sub_4D51C0(QT::QDialog *this, QT::QObject *a2, QT::QEvent *a3)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  void *v7; // r12
  int v8; // eax
  QT::QEvent *v9; // [rsp+0h] [rbp-48h]
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 12);
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( *(QT::QObject **)(v3 + 88) != a2 )
    return QT::QDialog::eventFilter(this, a2, a3);
  if ( *((_WORD *)a3 + 4) != 6 )
    return QT::QDialog::eventFilter(this, a2, a3);
  v9 = a3;
  v5 = QT::QKeyEvent::modifiers(a3);
  a3 = v9;
  if ( v5 || *((_DWORD *)v9 + 16) != 16777223 )
    return QT::QDialog::eventFilter(this, a2, a3);
  while ( 1 )
  {
    v6 = QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)(*((_QWORD *)this + 12) + 88LL));
    QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)ptr, v6);
    v7 = ptr[2];
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( !v7 )
      break;
    v8 = QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)(*((_QWORD *)this + 12) + 88LL));
    QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)ptr, v8);
    sub_4D4FF0((__int64)this, (const char *)*(unsigned int *)ptr[1], 0);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return 1;
}
