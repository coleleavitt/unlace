__int64 __fastcall sub_4199B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int *v5; // rbp
  int v6; // eax
  bool v7; // zf

  if ( a3 == 1 )
  {
    v5 = (int *)sub_46C500(a2);
    result = 1;
    if ( v5 )
    {
      sub_48AFD0(a2, v5);
      v6 = *v5 - 1;
      v7 = *v5 == 1;
      *v5 = v6;
      if ( v6 < 0 || v7 )
        sub_47B120(v5);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, 0);
    return 1;
  }
  return result;
}

