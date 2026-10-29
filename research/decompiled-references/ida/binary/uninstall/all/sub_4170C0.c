__int64 __fastcall sub_4170C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD v9[3]; // [rsp+Ch] [rbp-Ch] BYREF

  if ( a3 == 2 )
  {
    v6 = *(_QWORD *)(a4 + 8);
    if ( *(_UNKNOWN ***)(v6 + 24) == &off_655E20 )
    {
      v8 = sub_47BD00(*(unsigned int *)(*(_QWORD *)(v6 + 32) + 8LL));
      sub_48AFD0(a2, v8);
      return 0;
    }
    else
    {
      result = sub_46FB10(a2, v6, v9);
      if ( !(_DWORD)result )
      {
        v7 = sub_47BD00(v9[0]);
        sub_48AFD0(a2, v7);
        return 0;
      }
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "list");
    return 1;
  }
  return result;
}

