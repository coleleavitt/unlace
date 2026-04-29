unsigned __int64 sub_40BFE0()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v6; // [rsp+28h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  v0 = netnode_altval() - 2;
  if ( v0 < 0 )
    sub_6C720((__int64)"Unbounded history max idx: (none)\n", 1);
  else
    sub_6C720((__int64)"Unbounded history max idx: %zd\n", v0);
  v1 = netnode_supfirst();
  if ( v1 != -1 )
  {
    v2 = 0;
    do
    {
      v3 = netnode_altval() - 1;
      v4 = netnode_altval() - 1;
      netnode_qsupstr();
      sub_6C720((__int64)"%d. idx[%llX] flink = %llX blink = %llX str = \"%s\"\n", v2++, v1, v3, v4, s1);
      v1 = netnode_supnext();
    }
    while ( v1 != -1 );
  }
  return v6 - __readfsqword(0x28u);
}
