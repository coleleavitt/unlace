__int64 __fastcall TSegTransBox__::vfunc_2(_QWORD *a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 4 )
      {
        v6 = result;
        if ( (_DWORD)result == 3 )
        {
          sub_37BEA0((__int64)a1);
          LODWORD(result) = 3;
        }
        else if ( (_DWORD)result == 4 )
        {
          sub_37CFA0(a1);
          LODWORD(result) = v6;
        }
        else if ( (_DWORD)result == 1 )
        {
          sub_37BB80((__int64)a1);
          LODWORD(result) = v6;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_37BB90((__int64)a1);
          else
            sub_37BB70((__int64)a1);
          LODWORD(result) = v6;
        }
      }
      return (unsigned int)(result - 5);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 4 )
        **a4 = 0;
      return (unsigned int)(result - 5);
    }
  }
  return result;
}
