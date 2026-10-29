__int64 __fastcall netnode_qhashprev(unsigned int a1, __int64 a2, const char *a3, int a4)
{
  __int64 v4; // r13
  int v5; // r12d
  __int64 v11; // rdi

  v11 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 || !a3 )
    return -1;
  v4 = a2;
  v5 = a4;
  sub_78D080(v11, a1, a4, a3);
  return sub_78D550(v11, v5, a1, v4, 0, 0, 0);
}

