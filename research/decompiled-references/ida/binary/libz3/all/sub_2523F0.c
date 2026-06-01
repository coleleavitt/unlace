__int64 __fastcall sub_2523F0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // rbp

  if ( !a2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 232) + 856LL);
  if ( a2 == 1 )
  {
    sub_251FD0(a1, *a3);
    return *a3;
  }
  else
  {
    v5 = sub_15E1AF0(*(_QWORD *)(a1 + 232));
    sub_251FD0(a1, v5);
    return v5;
  }
}

