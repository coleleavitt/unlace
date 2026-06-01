unsigned __int64 sub_612F90()
{
  unsigned int v1; // [rsp+0h] [rbp-18h] BYREF
  int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v1 = -1;
  netnode_check(&v1, "$ upgrade 700", 0, 1);
  v2 = 1056964607;
  netnode_supset(v1, 0, &v2, 4, 65);
  v2 = 0;
  netnode_supset(v1, 1, &v2, 4, 65);
  return v3 - __readfsqword(0x28u);
}

