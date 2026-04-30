void __fastcall edit_filters_dialog_t__::vfunc_3(QT::QDialog *this)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  int v4; // r12d
  int i; // ebx
  int v6; // esi
  const QT::QTableWidgetItem *v7; // rax
  void *v8; // rdi
  volatile signed __int32 *v9; // rax
  void **v10; // rbx
  void **j; // r12

  *(_QWORD *)this = &edit_filters_dialog_t___vtable;
  *((_QWORD *)this + 2) = edit_filters_dialog_t___vtable_at__16;
  v2 = sub_4D4090((__int64)this);
  if ( *((_DWORD *)this + 18) != v2 )
    reg_int_op("UIFilterFlags", 1, v2, 0);
  v3 = sub_4D4170((__int64)this);
  if ( *((_DWORD *)this + 19) != v3 )
    reg_int_op("UIFilterColor", 1, v3, 0);
  v4 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(*((_QWORD *)this + 12) + 88LL));
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = i;
      v7 = (const QT::QTableWidgetItem *)QT::QTableWidget::item(
                                           *(QT::QTableWidget **)(*((_QWORD *)this + 12) + 88LL),
                                           v6,
                                           0);
      sub_4D3A80((__int64)this, v7);
    }
  }
  v8 = *((void **)this + 12);
  if ( v8 )
    operator delete(v8, 0x68u);
  v9 = *((volatile signed __int32 **)this + 6);
  if ( v9 && !_InterlockedSub(v9, 1u) )
  {
    v10 = *((void ***)this + 7);
    for ( j = &v10[3 * *((_QWORD *)this + 8)]; j != v10; v10 += 3 )
    {
      if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
        free(*v10);
    }
    free(*((void **)this + 6));
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
