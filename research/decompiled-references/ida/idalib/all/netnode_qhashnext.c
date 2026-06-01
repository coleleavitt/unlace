__int64 __fastcall netnode_qhashnext(__int64 a1, __int64 a2, const char *a3, int a4)
{
  __int64 v4; // r13
  int v5; // r12d
  __int64 v11; // rdi

  v11 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 || !a3 )
    JUMPOUT(0x7ADDF0);
  v4 = a2;
  v5 = a4;
  sub_7AD400(v11, a1, a4, a3, 1);
  return sub_7AD990(v11, v5, a1, v4, 0, 0, 1);
}
