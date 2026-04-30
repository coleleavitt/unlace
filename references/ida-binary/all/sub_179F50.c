__int64 __fastcall sub_179F50(__int64 a1, _QWORD *a2)
{
  QT::QAction *v3; // rbp
  int v4; // eax
  __int64 v5; // rax

  if ( *(_BYTE *)(a2[26] + 31LL) != 12 )
    return 7;
  v3 = *(QT::QAction **)(a1 + 192);
  QT::QAction::setCheckable(v3, 1);
  v4 = reg_int_op("ShowArglocs", 0, 0, 0);
  QT::QAction::setChecked(v3, v4 != 0);
  if ( *a2 )
  {
    v5 = *(_QWORD *)(*a2 + 1000LL);
    if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
      QT::QAction::setChecked(v3, *(_BYTE *)(v5 + 59));
  }
  return 3;
}
