__int64 __fastcall sub_415870(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  _BOOL4 v7; // edx
  __int64 v8; // rax

  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    if ( !*(_QWORD *)(v5 + 8) )
      sub_47B3B0(v5);
    v6 = sub_49B280(a2);
    v7 = 0;
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 8) != 0;
    v8 = sub_47BD00(v7);
    sub_48AFD0(a2, v8);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "varName");
    return 1;
  }
}

