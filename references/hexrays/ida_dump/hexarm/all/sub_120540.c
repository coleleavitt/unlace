__int64 __fastcall sub_120540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  char v6; // al
  _DWORD *v7; // rdi
  __int64 v8; // r13

  v5 = *(unsigned int *)(a1 + 4);
  v6 = *(_BYTE *)a1;
  if ( (int)v5 > 8 )
  {
    if ( v6 == 4 )
    {
      v7 = *(_DWORD **)(a1 + 8);
      if ( (unsigned int)(*v7 - 8) <= 1 )
      {
        if ( (unsigned __int8)sub_120540(v7 + 8, a2, a3) )
        {
          **(_DWORD **)(a1 + 8) = 8;
          return 1;
        }
        return 0;
      }
    }
    if ( !under_debugger )
      sub_3835A0(52629);
LABEL_15:
    BUG();
  }
  if ( v6 != 2 )
  {
    if ( !under_debugger )
      sub_3835A0(50280);
    goto LABEL_15;
  }
  v8 = -a3;
  if ( a3 != sub_32AEF0(-a3, v5, 1) )
  {
    sub_120450(a1, a2, v8, *(_DWORD *)(a1 + 4), **(_QWORD **)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
    return 1;
  }
  return 0;
}
