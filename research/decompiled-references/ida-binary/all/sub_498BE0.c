__int64 __fastcall sub_498BE0(QT::QAbstractItemView *a1, char a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = QT::QAbstractItemView::model(a1);
  v3 = *(_QWORD **)(v2 + 216);
  v4 = v2;
  if ( v3 )
  {
    delete_dirtree(*v3);
    operator delete(v3, 8u);
  }
  result = 0;
  if ( a2 )
  {
    result = dirtree_new_shadow_dirtree(**(_QWORD **)(v4 + 208));
    *(_QWORD *)(v4 + 216) = result;
  }
  else
  {
    *(_QWORD *)(v4 + 216) = 0;
  }
  return result;
}
