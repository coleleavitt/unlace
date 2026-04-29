unsigned __int64 __fastcall sub_1FAF0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // r14d
  char *v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // r12

  v5 = a2 + 1;
  v6 = sub_1C940((_QWORD *)a1, a2 + 1, a3, a4, a5);
  if ( !v6 )
    return 0;
  v7 = (__int64)v6;
  v8 = sub_C400(*(_QWORD **)(a1 + 40), 221);
  sub_C080(v8, v7, *(_QWORD **)(a1 + 40));
  if ( !v8 )
    return 0;
  v9 = sub_1F6A0(a1, v5);
  if ( !v9 )
    return 0;
  v10 = sub_1F0C0(a1, v5);
  if ( !v10 )
    return 0;
  v11 = sub_C400(*(_QWORD **)(a1 + 40), 171);
  sub_C080(v11, v8, *(_QWORD **)(a1 + 40));
  sub_C080(v11, v9, *(_QWORD **)(a1 + 40));
  sub_C080(v11, v10, *(_QWORD **)(a1 + 40));
  return v11;
}
