__int64 __fastcall sub_640490(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-28h] BYREF

  v2[1] = __readfsqword(0x28u);
  v2[0] = -1;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  netnode_check(v2, "$ loader name", 0, 1);
  if ( netnode_qsupstr(v2[0], a1, 1, 83) <= 0 )
    sub_378C70((__int64)"Can't determine the loader name");
  return a1;
}
