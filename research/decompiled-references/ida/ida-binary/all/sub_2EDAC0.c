__int64 __fastcall sub_2EDAC0(__int64 a1, const QT::QFont *a2)
{
  QT::QWidget *v3; // rdi
  __int64 result; // rax
  QT::QWidget *v5; // rdi

  if ( !*(_BYTE *)(a1 + 104) )
  {
    v3 = *(QT::QWidget **)(a1 + 96);
    if ( v3 )
      result = QT::QWidget::setFont(v3, a2);
  }
  if ( !*(_BYTE *)(a1 + 144) )
  {
    v5 = *(QT::QWidget **)(a1 + 136);
    if ( v5 )
      return QT::QWidget::setFont(v5, a2);
  }
  return result;
}
