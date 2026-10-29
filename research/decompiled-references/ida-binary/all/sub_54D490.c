unsigned __int64 __fastcall sub_54D490(QT::QWidget *this, int a2, int a3)
{
  unsigned __int64 result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return sub_510530(this);
    }
    else
    {
      return (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)this + 440LL))(this);
    }
  }
  return result;
}
