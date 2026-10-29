__int64 __fastcall sub_513BE0(__int64 a1, __int64 a2)
{
  QT::QAction *v2; // rbx
  char v3; // al

  if ( !*(_QWORD *)(a2 + 256) )
    return 6;
  v2 = *(QT::QAction **)(a1 + 192);
  if ( !(unsigned __int8)QT::QAction::isCheckable(v2) )
    QT::QAction::setCheckable(v2, 1);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8D2358 + 16LL))(qword_8D2358);
  QT::QAction::setChecked(v2, v3);
  return 3;
}
