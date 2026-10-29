__int64 __fastcall sub_2A7FE0(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-28h] BYREF
  int v3; // [rsp+10h] [rbp-18h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2[1] = a1;
  v2[0] = &grcb_toggle_contents;
  v3 = 0;
  sub_2B37F0(a1 + 192, v2, 1, 0);
  return (unsigned __int8)(v3 > 0) << 16;
}
