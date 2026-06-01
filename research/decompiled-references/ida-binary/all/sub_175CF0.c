__int64 __fastcall sub_175CF0(__int64 a1)
{
  __int64 result; // rax
  QT::QTextLayout *v2; // rbp

  result = *(_QWORD *)(a1 + 48);
  if ( !result )
  {
    v2 = (QT::QTextLayout *)operator new(8u);
    QT::QTextLayout::QTextLayout(v2);
    *(_QWORD *)(a1 + 48) = v2;
    QT::QTextLayout::setCacheEnabled(v2, 1);
    return *(_QWORD *)(a1 + 48);
  }
  return result;
}
