unsigned __int64 __fastcall sub_498C70(QT::QAbstractItemView *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax

  result = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2392LL);
  if ( *(_BYTE *)(result + 8) > 2u && (*(_BYTE *)(result + 10) & 1) != 0 )
  {
    v3 = QT::QAbstractItemView::model(a1);
    return sub_490400(v3 + 224, a2);
  }
  return result;
}
