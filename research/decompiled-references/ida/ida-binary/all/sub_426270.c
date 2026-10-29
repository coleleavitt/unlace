__int64 __fastcall sub_426270(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  bool v4; // r12
  QT::QWidget *v5; // rax

  v3 = (void *)QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 48));
  if ( v3 )
    v3 = __dynamic_cast(
           v3,
           (const struct __class_type_info *)&`typeinfo for'QT::QAbstractItemModel,
           (const struct __class_type_info *)&`typeinfo for'vault_files_item_model_t,
           0);
  v4 = 0;
  if ( (unsigned int)sub_48CBD0(v3, a2) != 1 && *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 )
    v4 = *(_QWORD *)(a2 + 16) != 0;
  v5 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(a1 + 56), 1024);
  return QT::QWidget::setEnabled(v5, v4);
}
