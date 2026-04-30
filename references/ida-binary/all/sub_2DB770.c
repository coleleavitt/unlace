__int64 __fastcall ida_dirtree_widget_persistence_helper_t__::vfunc_5(__int64 a1, _QWORD *a2)
{
  QT::QAbstractItemView *v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 id; // rax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(QT::QAbstractItemView **)(a1 + 8);
  v7[1] = __readfsqword(0x28u);
  v3 = QT::QAbstractItemView::model(v2);
  v4 = *(_QWORD **)(v3 + 216);
  if ( !v4 )
    v4 = *(_QWORD **)(v3 + 208);
  id = dirtree_get_id(*v4);
  netnode_check(v7, id, 0, 1);
  result = 0;
  if ( v7[0] != -1 )
    return netnode_setblob(v7[0], *a2, a2[1], 0, 66);
  return result;
}
