__int64 __fastcall sub_4148B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx

  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "formatString ?arg arg ...?");
    return 1;
  }
  else
  {
    v7 = *(_QWORD *)(a4 + 8);
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 )
      v8 = sub_47B3B0(v7);
    v9 = sub_490BD0(a2, v8, (unsigned int)(a3 - 2), a4 + 16);
    v10 = 1;
    if ( v9 )
    {
      sub_48AFD0(a2, v9);
      return 0;
    }
    return v10;
  }
}

