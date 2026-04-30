__int64 __fastcall sub_1AEEB0(QT::QObject *a1, QT::QFont *a2)
{
  __int64 result; // rax
  QT::QObject *v3; // rdi

  result = sub_4EB870(a1, a2);
  v3 = *((QT::QObject **)a1 + 6);
  if ( v3 )
    return sub_4EB870(v3, a2);
  return result;
}
