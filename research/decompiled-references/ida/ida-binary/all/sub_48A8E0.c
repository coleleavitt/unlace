__int64 __fastcall sub_48A8E0(_QWORD *a1, QT::QAbstractItemView *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  a1[1] = a2;
  *a1 = dirtree_widget_qmodel_visitor_t___vtable;
  a1[2] = QT::QAbstractItemView::model(a2);
  result = QT::QAbstractItemView::model(a2);
  v3 = *(_QWORD *)(result + 216);
  if ( !v3 )
    v3 = *(_QWORD *)(result + 208);
  a1[3] = v3;
  return result;
}
