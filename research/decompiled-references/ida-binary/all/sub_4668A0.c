__int64 __fastcall GraphPrintDialog__::vfunc_2(QT::QComboBox **a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_2ABAE0(a1);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
