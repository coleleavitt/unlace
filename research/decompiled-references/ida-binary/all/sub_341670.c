__int64 __fastcall sub_341670(QT::QWidget *this, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  sub_340C50(this, a2);
  result = sub_341530(this, a2);
  if ( a3 != -1 )
  {
    if ( *((_QWORD *)this + 21) )
      return sub_33FA70(this, a3);
  }
  return result;
}
