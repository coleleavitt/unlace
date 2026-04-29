__int64 __fastcall sub_2B0D70(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // edx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = ea2node(a1);
  v2 = netnode_altval(v1, 2, 65);
  v3 = 0;
  v5[0] = v2 - 1;
  if ( v2 )
  {
    netnode_supdel(v1, 2, 65);
    netnode_kill(v5);
    return 1;
  }
  return v3;
}
