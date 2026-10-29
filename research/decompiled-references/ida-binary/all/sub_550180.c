__int64 __fastcall text_area_dialog_t__::vfunc_2(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v6 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_529D70(a1, **(_BYTE **)(a4 + 8));
          LODWORD(result) = 1;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_529D80(a1);
          else
            sub_529FD0(a1);
          LODWORD(result) = v6;
        }
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}
