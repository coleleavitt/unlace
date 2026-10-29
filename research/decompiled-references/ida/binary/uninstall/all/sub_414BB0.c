__int64 __fastcall sub_414BB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int *v5; // rbx
  __int64 v6; // rbp
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax

  if ( (unsigned int)(a3 - 2) > 1 )
  {
    sub_458930(a2, 1, a4, "varName ?increment?");
    return 1;
  }
  else
  {
    if ( a3 == 3 )
      v5 = *(int **)(a4 + 16);
    else
      v5 = (int *)sub_47BD00(1);
    ++*v5;
    v6 = sub_4A40B0(a2, *(_QWORD *)(a4 + 8), 0, v5, 512);
    v7 = *v5 - 1;
    v8 = *v5 == 1;
    *v5 = v7;
    if ( v7 < 0 || v8 )
      sub_47B120(v5);
    result = 1;
    if ( v6 )
    {
      sub_48AFD0(a2, v6);
      return 0;
    }
  }
  return result;
}

