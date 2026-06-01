QT::QTreeWidgetItem *__fastcall sub_38B910(__int64 a1, _QWORD *a2, int a3, unsigned __int64 a4, __int64 a5)
{
  QT::QTreeWidgetItem *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 i; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v16; // r15
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  bool (__fastcall *v19)(__int64, __int64, char); // rax
  int v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]

  v7 = (QT::QTreeWidgetItem *)a5;
  v8 = sub_38B880(a1, a5);
  if ( !v8 )
    return nullptr;
  while ( 1 )
  {
    v9 = *((_QWORD *)v7 + 10);
    v21 = v9;
    if ( *(_BYTE *)(v8 + 32) )
      break;
    if ( (int)v9 <= 0 )
      return v7;
    v10 = (unsigned int)(v9 - 1);
    for ( i = 0; ; ++i )
    {
      v12 = 0;
      if ( v9 > i )
      {
        QT::QTreeWidgetItem::executePendingSort(v7);
        v12 = *(_QWORD *)(*((_QWORD *)v7 + 9) + 8 * i);
      }
      v13 = sub_38B880(a1, v12);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( a4 >= v14 && (v21 - 1 == (_DWORD)i || a4 < *(_QWORD *)(v13 + 24) + v14) )
          break;
      }
      if ( i == v10 )
        return v7;
      v9 = *((_QWORD *)v7 + 10);
    }
LABEL_16:
    if ( !v12 )
      return v7;
    v7 = (QT::QTreeWidgetItem *)v12;
    v8 = sub_38B880(a1, v12);
    if ( !v8 )
      return nullptr;
  }
  if ( (unsigned __int64)a3 < a2[1] && (int)v9 > 0 )
  {
    v16 = 0;
    v22 = (unsigned int)(v9 - 1);
    while ( 1 )
    {
      v12 = 0;
      if ( v9 > v16 )
      {
        QT::QTreeWidgetItem::executePendingSort(v7);
        v12 = *(_QWORD *)(*((_QWORD *)v7 + 9) + 8 * v16);
      }
      v17 = sub_38B880(a1, v12);
      if ( v17 )
      {
        v18 = *(_QWORD **)(*a2 + 8LL * a3);
        v19 = *(bool (__fastcall **)(__int64, __int64, char))(*v18 + 24LL);
        if ( v19 == struc_tree_node_info_t__::vfunc_3 )
        {
          if ( *(_QWORD *)(v17 + 56) == v18[7] )
            goto LABEL_15;
        }
        else if ( v19((__int64)v18, v17, 0) )
        {
          ++a3;
          goto LABEL_16;
        }
      }
      if ( v22 == v16 )
      {
        v12 = 0;
LABEL_15:
        ++a3;
        goto LABEL_16;
      }
      v9 = *((_QWORD *)v7 + 10);
      ++v16;
    }
  }
  return v7;
}
