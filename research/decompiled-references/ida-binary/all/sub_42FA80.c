__int64 __fastcall sub_42FA80(QT::QAbstractItemView *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax

  result = QT::QAbstractItemView::model(a1);
  if ( (*(_BYTE *)(result + 120) & 8) == 0 )
    return sub_490030(a1, a2, a3, a4);
  return result;
}
