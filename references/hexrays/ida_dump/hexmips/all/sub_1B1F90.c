__int64 __fastcall sub_1B1F90(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v5; // rbx

  v5 = a3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == -1 )
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 24LL) + 16LL);
  if ( sub_32BF20(a2, v5) == v5 )
    sub_67670((__int64 *)a1, (__int64)"%a", 0.0);
  else
    sub_67670((__int64 *)a1, (__int64)"%a(%a)", 0.0, a5);
  return a1;
}
