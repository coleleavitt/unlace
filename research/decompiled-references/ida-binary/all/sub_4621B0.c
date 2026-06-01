__int64 __fastcall CommandPalette__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4, double a5, __m128 a6)
{
  __int64 result; // rax

  result = ActionsInspector__::vfunc_2(a1, a2, a5, a6, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_1C4030(a1);
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
