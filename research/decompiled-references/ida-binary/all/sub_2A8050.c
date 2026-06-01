__int64 __fastcall sub_2A8050(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+0h] [rbp-28h] BYREF
  int v3; // [rsp+10h] [rbp-18h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2[1] = a1;
  v2[0] = &grcb_coldef;
  v3 = 0;
  sub_2B37F0(a1 + 192, v2, 1, 0);
  result = 32772;
  if ( v3 != 1 )
    return 32770;
  return result;
}
