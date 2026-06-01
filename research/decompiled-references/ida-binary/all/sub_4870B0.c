__int64 __fastcall base_dirtree_widget_t::sync_view_helper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 *i; // r13
  __int64 *v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v21; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0;
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0
    || (unsigned __int8)QT::QTreeView::isExpanded(*(_QWORD *)(a1 + 32), a2, a3, a4, a5, a6) )
  {
    v7 = *a4;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 800LL))(*(_QWORD *)(a1 + 8));
    v9 = sub_4E07A0(v8, v7);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_QWORD **)(a1 + 40);
      v12 = *(_QWORD *)(v9 + 16);
      v13 = v12 + v11[1];
      if ( v11[2] < v13 )
      {
        *v11 = qvector_reserve(*(_QWORD *)(a1 + 40), *v11, v13, 8);
        v12 = *(_QWORD *)(v10 + 16);
      }
      v14 = *(__int64 **)(v10 + 8);
      for ( i = (__int64 *)((char *)v14 + 9 * v12); i != v14; ++v16[1] )
      {
        while ( *((_BYTE *)v14 + 8) )
        {
          v14 = (__int64 *)((char *)v14 + 9);
          if ( i == v14 )
            return 0;
        }
        v16 = *(__int64 **)(a1 + 40);
        v17 = *v14;
        v18 = v16[1];
        v19 = *v16;
        if ( v16[2] < (unsigned __int64)(v18 + 1) )
        {
          v21 = qvector_reserve(*(_QWORD *)(a1 + 40), v19, v18 + 1, 8);
          *v16 = v21;
          v19 = v21;
          v18 = v16[1];
        }
        v14 = (__int64 *)((char *)v14 + 9);
        *(_QWORD *)(v19 + 8 * v18) = v17;
      }
    }
  }
  return 0;
}
