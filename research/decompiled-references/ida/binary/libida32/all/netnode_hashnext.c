__int64 __fastcall netnode_hashnext(unsigned int a1, const char *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // r12d
  __int64 v14; // rdi

  v14 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 || !a2 )
    return -1;
  v5 = a4;
  v6 = a3;
  v7 = a5;
  sub_78D080(v14, a1, a5, a2);
  return sub_78D550(v14, v7, a1, 0, v6, v5, 1);
}

