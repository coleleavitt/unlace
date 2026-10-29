__int64 __fastcall quick_filter_input_monitor_t__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v6 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_4DE430(a1);
          LODWORD(result) = 1;
        }
        else
        {
          sub_4E58A0(a1);
          LODWORD(result) = v6;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
