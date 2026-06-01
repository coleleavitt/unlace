unsigned __int64 __fastcall sub_460360(QT::QWidget *a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  if ( !a2 )
  {
    switch ( a3 )
    {
      case 1:
        return sub_18DC70(a1, -1);
      case 2:
        result = *((_QWORD *)a1 + 4);
        if ( *(char *)(result + 9) < 0 )
          return sub_190110((__int64)a1, **(_QWORD **)(a4 + 16));
        break;
      case 0:
        return sub_18DC70(a1, **(_QWORD **)(a4 + 8));
    }
  }
  return result;
}
