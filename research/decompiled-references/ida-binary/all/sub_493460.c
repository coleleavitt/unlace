__int64 __fastcall sub_493460(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 328);
  if ( !v1 )
    return 0;
  result = 0;
  if ( *(_QWORD *)(a1 + 200) )
  {
    v3 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 328));
    return (unsigned __int8)sub_493340(v3, v1, *(_QWORD **)(a1 + 200));
  }
  return result;
}
