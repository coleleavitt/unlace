__int64 __fastcall sub_2E3F60(__int64 *a1, _QWORD *a2)
{
  char v3[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  getinf_buf(1, v3, 16);
  return sub_2E3EC0(a1, v3, a2);
}
