unsigned __int64 __fastcall sub_1C95E0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v5[3] = a3;
  v5[1] = a1;
  v5[2] = a2;
  v6 = 0;
  v7 = 0;
  v5[0] = off_4B22C0;
  v8 = a4;
  sub_1C8840(a1, a2, v5);
  v5[0] = &unk_4BEE68;
  qfree(v6);
  return v9 - __readfsqword(0x28u);
}
