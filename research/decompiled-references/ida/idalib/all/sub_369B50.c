__int64 sub_369B50()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-18h] BYREF

  v1[1] = __readfsqword(0x28u);
  netnode_check(v1, "$ original user", 0, 0);
  netnode_rename(v1[0], &byte_22F0C30, 0);
  netnode_kill((int)v1);
  return 0;
}
