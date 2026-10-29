__int64 __fastcall sub_369B10(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  v2[0] = *(_QWORD *)(a1 + 8);
  netnode_kill((int)v2);
  return 0;
}
