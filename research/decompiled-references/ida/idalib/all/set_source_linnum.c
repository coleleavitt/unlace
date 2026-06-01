unsigned __int64 __fastcall set_source_linnum(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  set_abits(a1, 1);
  v5 = a2 + 1;
  v2 = ea2node(a1);
  netnode_supset(v2, 9, &v5, 8, 65, v3);
  return v6 - __readfsqword(0x28u);
}
