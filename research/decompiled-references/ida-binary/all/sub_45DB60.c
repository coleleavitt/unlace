__int64 __fastcall caret_status_t__::vfunc_2(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_1F6100(a1, **(unsigned int **)(a4 + 8), **(_DWORD **)(a4 + 16));
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
