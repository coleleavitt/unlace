__int64 __fastcall sub_36DDA0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  netnode_check(v6, "$ got", 0, 0);
  v2 = netnode_exist(v6);
  v3 = -1;
  if ( v2 )
  {
    v4 = netnode_altval(v6[0], 0, 65);
    v3 = node2ea(v4 - 1);
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
