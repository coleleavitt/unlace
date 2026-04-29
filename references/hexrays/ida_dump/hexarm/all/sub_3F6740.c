__int64 __fastcall sub_3F6740(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, char a5, double a6)
{
  _DWORD *v7; // rcx
  __int64 result; // rax

  v7 = *(_DWORD **)(a1 + 832);
  result = (unsigned int)a2;
  if ( v7[20] == 8 )
  {
    if ( v7[120] == (_DWORD)a2 )
    {
      if ( a4 == -1 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC865u, a2, a6);
        BUG();
      }
      sub_3F56D0(a1, 3u, a3, 0, 0x3BEA45E214ADDC55LL, (int)a4, 0);
      return a4;
    }
    else if ( a5 )
    {
      if ( v7[107] == (_DWORD)a2 )
        return sub_3F5420(a1, a6);
    }
  }
  return result;
}
