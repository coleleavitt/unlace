bool __fastcall sub_42B090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[3] = __readfsqword(0x28u);
  v4 = sub_634F70(a2);
  v6[0] = sub_634EF0(a2);
  v6[1] = v4;
  return (unsigned int)sub_7BD850(a2, a3, v6, 0) == 0;
}
