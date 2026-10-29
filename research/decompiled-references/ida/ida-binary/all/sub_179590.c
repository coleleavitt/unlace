__int64 __fastcall sub_179590(__int64 a1, __int64 a2)
{
  QT::QAction *v2; // r13
  char v3; // bl

  v2 = *(QT::QAction **)(a1 + 192);
  if ( !(unsigned __int8)QT::QAction::isCheckable(v2) )
    QT::QAction::setCheckable(v2, 1);
  v3 = getinf_flag(44, 4);
  if ( (unsigned __int8)QT::QAction::isChecked(v2) != v3 )
    QT::QAction::setChecked(v2, v3);
  return 4
       * (unsigned int)((*(int (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
                          QT::QCoreApplication::self + 2,
                          a1,
                          a2) > 3)
       + 3;
}
