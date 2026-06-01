__int64 sub_366540()
{
  unsigned int v1; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  netnode_check(&v1, "$ original user", 0, 0);
  netnode_rename(v1, &byte_22CD811, 0);
  netnode_kill((int)&v1);
  return 0;
}

