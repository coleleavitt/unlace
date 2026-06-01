__int64 __fastcall sub_415640(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rax

  if ( a3 == 2 )
  {
    v5 = sub_4802B0(*(_QWORD *)(a4 + 8));
    v6 = sub_47BD00(v5 != 0);
    sub_48AFD0(a2, v6);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "command");
    return 1;
  }
}

