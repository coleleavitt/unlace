__int64 __fastcall sub_1DD7C0(QT::QDockWidget *this, unsigned int a2)
{
  int v3; // eax
  __int64 result; // rax
  int v5; // esi
  int v6; // eax

  if ( a2 - 1 <= 1 )
  {
    if ( (QT::QDockWidget::features(this) & 8) != 0 )
    {
      v6 = QT::QDockWidget::features(this);
      QT::QDockWidget::setFeatures(this, v6 ^ 8u);
    }
    v5 = 2;
    if ( a2 == 1 )
      v5 = 1;
    goto LABEL_5;
  }
  v3 = QT::QDockWidget::features(this);
  result = QT::QDockWidget::setFeatures(this, v3 | 8u);
  if ( a2 == 4 )
  {
    v5 = 3;
LABEL_5:
    *((_DWORD *)this + 10) = v5;
    return sub_462450(this);
  }
  if ( a2 > 4 )
  {
    v5 = 4;
    if ( a2 == 8 )
      goto LABEL_5;
  }
  return result;
}
