__int64 __fastcall sub_513C40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  QT::QAction *v4; // rbp

  result = 6;
  v3 = *(_QWORD *)(a2 + 256);
  if ( v3 )
  {
    v4 = *(QT::QAction **)(a1 + 192);
    if ( !(unsigned __int8)QT::QAction::isCheckable(v4) )
      QT::QAction::setCheckable(v4, 1);
    QT::QAction::setChecked(v4, *(_BYTE *)(v3 + 152));
    return 3;
  }
  return result;
}
