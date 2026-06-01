__int64 __fastcall sub_4962A0(double a1, double a2, __m128 a3, __int64 a4, __int64 a5)
{
  QT::QAbstractItemView *v5; // rbx
  __int64 result; // rax
  char v7; // dl

  v5 = *(QT::QAbstractItemView **)(a5 + 328);
  if ( !v5 )
    return 7;
  if ( !*(_QWORD *)(QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a5 + 328)) + 144LL) )
    return 7;
  v7 = sub_4956F0(v5, nullptr, 2, a1, a2, a3);
  result = 3;
  if ( !v7 )
    return 7;
  return result;
}
