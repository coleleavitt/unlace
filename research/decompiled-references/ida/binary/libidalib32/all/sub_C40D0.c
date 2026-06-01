unsigned __int64 sub_C40D0()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  netnode_check();
  netnode_hashset();
  return v1 - __readfsqword(0x28u);
}

