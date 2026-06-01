QT::QTreeWidgetItem *__fastcall sub_38BAB0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  bool (__fastcall *v10)(__int64, __int64, char); // rax
  QT::QTreeWidgetItem *result; // rax

  if ( !a2[1] )
    return nullptr;
  v5 = QT::QTreeWidget::topLevelItemCount(*(QT::QTreeWidget **)(a1 + 80));
  if ( v5 <= 0 )
    return nullptr;
  v6 = 0;
  while ( 1 )
  {
    v7 = QT::QTreeWidget::topLevelItem(*(QT::QTreeWidget **)(a1 + 80), v6);
    v8 = sub_38B880(a1, v7);
    if ( !v8 )
      goto LABEL_5;
    v9 = *(_QWORD **)*a2;
    v10 = *(bool (__fastcall **)(__int64, __int64, char))(*v9 + 24LL);
    if ( v10 != struc_tree_node_info_t__::vfunc_3 )
      break;
    if ( *(_QWORD *)(v8 + 48) == v9[6] )
      goto LABEL_9;
LABEL_5:
    if ( v5 == ++v6 )
      return nullptr;
  }
  if ( !v10((__int64)v9, v8, 1) )
    goto LABEL_5;
LABEL_9:
  if ( v7 == 0 || a3 == 0 )
    return (QT::QTreeWidgetItem *)v7;
  result = sub_38B910(a1, a2, 1, a3, v7);
  if ( !result )
    return (QT::QTreeWidgetItem *)v7;
  return result;
}
