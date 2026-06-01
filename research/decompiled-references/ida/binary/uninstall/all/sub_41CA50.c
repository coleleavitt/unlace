__int64 __fastcall sub_41CA50(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rax

  if ( a3 == 2 )
  {
    v5 = sub_490D40(*(_QWORD *)(a4 + 8));
    sub_48AFD0(a2, v5);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "string");
    return 1;
  }
}

