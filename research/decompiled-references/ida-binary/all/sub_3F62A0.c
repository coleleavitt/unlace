unsigned __int64 __fastcall sub_3F62A0(QT::QStandardItem *a1, __int64 a2)
{
  const void *v3; // rax
  QT::QStandardItem *v4; // rax
  QT::QStandardItem *v5; // rbp
  int v6; // ebx
  const void *v7; // rdi
  _QWORD *v8; // r15
  __int64 (__fastcall *v9)(__int64); // rdx
  unsigned __int64 v10; // rsi
  __int64 *v12; // rax
  void *v13; // rdi
  void *v14; // r13
  int v15; // ebx
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = (const void *)QT::QStandardItemModel::itemFromIndex(a1, a2);
  if ( v3 )
  {
    v4 = (QT::QStandardItem *)__dynamic_cast(
                                v3,
                                (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
                                (const struct __class_type_info *)&`typeinfo for'xref_unified_tree_item_t,
                                0);
    v5 = v4;
    if ( v4 )
    {
      if ( (int)QT::QStandardItem::rowCount(v4) > 0 )
      {
        v12 = (__int64 *)QT::QStandardItem::child(v5, 0, 0);
        if ( v12 )
        {
          sub_3F6130(&ptr, v12);
          v13 = (void *)ptr.m128i_i64[1];
          v14 = (void *)ptr.m128i_i64[0];
          if ( !ptr.m128i_i64[1] )
            v13 = &QT::QString::_empty;
          v15 = QT::QString::compare_helper(v13, v17, "Loading...", 10, 1);
          if ( v14 && !_InterlockedSub((volatile signed __int32 *)v14, 1u) )
            free(v14);
          if ( !v15 )
            QT::QStandardItem::removeRow(v5, 0);
        }
      }
      v6 = 0;
      (*(void (__fastcall **)(QT::QStandardItem *))(*(_QWORD *)v5 + 96LL))(v5);
      while ( v6 < (int)QT::QStandardItem::rowCount(v5) )
      {
        v7 = (const void *)QT::QStandardItem::child(v5, v6, 0);
        if ( v7 )
        {
          v8 = __dynamic_cast(
                 v7,
                 (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
                 (const struct __class_type_info *)&`typeinfo for'xref_unified_tree_item_t,
                 0);
          if ( v8 )
          {
            QT::QStandardItemModel::indexFromItem((QT::QStandardItemModel *)&ptr, a1);
            v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 80LL);
            if ( v9 == sub_3EDDF0 )
              v10 = v8[2];
            else
              v10 = v9((__int64)v8);
            sub_3F3BA0(a1, v10);
          }
        }
        ++v6;
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
