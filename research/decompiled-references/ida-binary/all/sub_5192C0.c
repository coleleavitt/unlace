__int64 __fastcall sub_5192C0(QT::QKeySequence *a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = QT::QKeySequence::count(a1);
  result = 0;
  if ( v1 > 0 )
    return QT::QKeySequence::operator[](a1, 0);
  return result;
}
