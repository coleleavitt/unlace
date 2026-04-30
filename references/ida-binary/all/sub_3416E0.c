__int64 __fastcall sub_3416E0(QT::QWidget *this, __int64 a2)
{
  __int64 result; // rax
  bool v3; // zf
  unsigned __int64 v4; // rsi

  if ( a2 && (a2 & (a2 - 1)) == 0 )
    *((_QWORD *)this + 21) = a2;
  sub_33FB30(this);
  result = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(result + 16) )
  {
    v3 = *((_QWORD *)this + 21) == 0;
    v4 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = -1;
    if ( !v3 )
      return sub_341450(this, v4, 0);
  }
  return result;
}
