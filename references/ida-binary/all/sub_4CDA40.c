__int64 __fastcall sub_4CDA40(QT::QWidget *this, bool a2)
{
  __int64 v3; // rax
  QT::QWidget *v4; // rdi
  __int64 v6; // rax

  v3 = sub_4CD9E0((__int64)this);
  if ( !v3 )
    return QT::QWidget::focusNextPrevChild(this, a2);
  v4 = *(QT::QWidget **)(v3 + 80);
  if ( !v4 || *((_DWORD *)v4 + 10) )
    return QT::QWidget::focusNextPrevChild(this, a2);
  v6 = sub_4CD420(v4, 1u);
  if ( v6 )
    QT::QWidget::setFocus(v6, 2 - (unsigned int)a2);
  return 1;
}
