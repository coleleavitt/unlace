__int64 __fastcall sub_531E10(__int64 a1, char a2)
{
  QT::QAction *v2; // rbp
  __int64 result; // rax

  v2 = *(QT::QAction **)(a1 + 192);
  result = QT::QAction::isEnabled(v2);
  if ( (_BYTE)result != a2 )
    return QT::QAction::setEnabled(v2, a2);
  return result;
}
