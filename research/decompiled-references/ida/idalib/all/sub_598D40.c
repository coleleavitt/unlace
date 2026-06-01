__int64 __fastcall sub_598D40(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp

  v4 = switch_dbctx(*(int *)(a1 + 8));
  v5 = v4;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      return sub_7BECC0(*(_QWORD *)(v4 + 1672) + 2400LL, v4, a2, 80);
    if ( a3 || (unsigned __int8)sub_7BE710(*(_QWORD *)(v4 + 1672) + 2400LL, v4, a2, 4176) )
      return a2;
  }
  return sub_7BEBF0(*(_QWORD *)(v5 + 1672) + 2400LL, v5, a2, 80);
}
