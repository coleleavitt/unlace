unsigned __int64 sub_62F8F0()
{
  __int64 v0; // r9
  __int64 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = -1;
  netnode_check(&v2, "$ upgrade 700", 0, 1);
  v3 = 1056964607;
  netnode_supset(v2, 0, &v3, 8, 65, v0);
  return v4 - __readfsqword(0x28u);
}
