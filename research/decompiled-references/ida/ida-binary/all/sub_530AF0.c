__int64 __fastcall sub_530AF0(__int64 a1, int a2)
{
  QT::QAction *v2; // rbp
  __int64 result; // rax

  *(_DWORD *)(a1 + 120) = a2;
  v2 = *(QT::QAction **)(a1 + 192);
  result = QT::QAction::isEnabled(v2);
  if ( a2 <= 3 != (_BYTE)result )
    return QT::QAction::setEnabled(v2, a2 <= 3);
  return result;
}
