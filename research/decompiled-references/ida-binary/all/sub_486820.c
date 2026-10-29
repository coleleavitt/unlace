__int64 __fastcall base_dirtree_widget_t::take_tree_snapshot(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax

  v5 = *(__int64 **)(a1 + 32);
  v6 = *a4;
  v7 = v5[1];
  v8 = *v5;
  if ( v5[2] < (unsigned __int64)(v7 + 1) )
  {
    v15 = qvector_reserve(*(_QWORD *)(a1 + 32), v8, v7 + 1, 32);
    *v5 = v15;
    v8 = v15;
    v7 = v5[1];
  }
  v9 = v8 + 32 * v7;
  *(_OWORD *)(v9 + 8) = 0;
  *(_QWORD *)v9 = 0;
  *(_BYTE *)(v9 + 24) = 0;
  ++v5[1];
  *(_QWORD *)(v9 + 8) = v6;
  *(_QWORD *)(v9 + 16) = (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 120LL))(
                           *(_QWORD *)(a1 + 16),
                           a2);
  *(_BYTE *)(v9 + 24) = QT::QTreeView::isExpanded(*(_QWORD *)(a1 + 8), a2, v10, v11, v12, v13);
  return 0;
}
