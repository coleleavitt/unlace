__int64 __fastcall sub_238CF0(double a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+10h] [rbp-48h]
  unsigned __int64 v4; // [rsp+38h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2[0] = 0;
  v2[1] = 1208;
  v3 = dword_8CC428;
  sub_238AE0((double *)&qword_8CC2B0, (__int64)v2, a1);
  sub_238680((__int64)v2, (const char *)v2);
  return 1;
}
