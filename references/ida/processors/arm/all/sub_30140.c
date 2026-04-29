unsigned __int64 sub_30140()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  pack_dd();
  pack_dw();
  pack_dq();
  netnode_supset();
  return v1 - __readfsqword(0x28u);
}
