unsigned __int64 __fastcall sub_1DF70(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  char *v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r12

  v5 = sub_1C940((_QWORD *)a1, a2, a3, a4, a5);
  if ( !v5 )
    return 0;
  v6 = (__int64)v5;
  v7 = sub_C400(*(_QWORD **)(a1 + 40), 221);
  sub_C080(v7, v6, *(_QWORD **)(a1 + 40));
  return v7;
}
