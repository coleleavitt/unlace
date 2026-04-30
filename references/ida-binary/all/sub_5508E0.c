__int64 __fastcall WaitDialog__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v6 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_541FD0(a1);
          LODWORD(result) = 1;
        }
        else
        {
          sub_541FC0(a1);
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
