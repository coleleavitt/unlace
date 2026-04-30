__int64 __fastcall sub_192240(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  v2[0] = -1;
  addr_from_tag(v2, a1);
  return v2[0];
}
