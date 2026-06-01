__int64 __fastcall sub_5210D0(const char *a1)
{
  __int64 v1; // rdi

  if ( !QT::QCoreApplication::self )
    return 0;
  v1 = sub_47C4D0((__int64)(QT::QCoreApplication::self + 2), a1);
  if ( v1 )
    return QT::qt_qFindChild_helper(v1, 0, 0, &off_89D580, 1);
  else
    return 0;
}
