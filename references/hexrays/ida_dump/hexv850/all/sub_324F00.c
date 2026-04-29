__int64 __fastcall sub_324F00(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  netnode_check(v4, "$ tls", 0, 0);
  v1 = netnode_altval(v4[0], 0, 65);
  v2 = v1 - 1;
  if ( v1 && a1 )
    *a1 = netnode_altval(v4[0], -1, 65);
  return v2;
}
