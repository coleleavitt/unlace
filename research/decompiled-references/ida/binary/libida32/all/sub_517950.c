__int64 sub_517950()
{
  __int64 v0; // rbp
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  void *v3; // rdi

  v0 = qword_2CA1698;
  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1680) + 1616LL);
  if ( *(_BYTE *)(v1 + 64) )
    sub_517580((__int64 *)(v1 + 32), 0);
  if ( *(_QWORD *)(v1 + 48) )
  {
    if ( !under_debugger )
      interr(3210);
    BUG();
  }
  v2 = *(_QWORD **)(v0 + 1616);
  sub_5165A0((__int64)v2);
  v3 = (void *)v2[5];
  if ( v3 )
  {
    v2[6] = 0;
    qfree(v3);
    v2[5] = 0;
    v2[7] = 0;
  }
  return netnode_kill((int)v2 + 68);
}

