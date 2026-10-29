unsigned __int64 sub_52FC80()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v0 = *(_QWORD *)(qword_2CCB598 + 1808);
  netnode_check(&v3, "$ structs", 0, 0);
  v1 = v3;
  *(_QWORD *)(v0 + 72) = v3;
  if ( v1 == -1 )
    return v4 - __readfsqword(0x28u);
  else
    return sub_52F980((__int64 *)(v0 + 32), 1);
}
