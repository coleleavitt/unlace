__int64 sub_52FD50()
{
  __int64 v0; // rbp
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  void *v3; // rdi

  v0 = qword_2CCB598;
  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1872) + 1808LL);
  if ( *(_BYTE *)(v1 + 64) )
    sub_52F980((__int64 *)(v1 + 32), 0);
  if ( *(_QWORD *)(v1 + 48) )
  {
    if ( !under_debugger )
      interr(3210);
    BUG();
  }
  v2 = *(_QWORD **)(v0 + 1808);
  sub_52E9E0((__int64)v2);
  v3 = (void *)v2[5];
  if ( v3 )
  {
    v2[6] = 0;
    qfree(v3);
    v2[5] = 0;
    v2[7] = 0;
  }
  return netnode_kill((int)v2 + 72);
}
