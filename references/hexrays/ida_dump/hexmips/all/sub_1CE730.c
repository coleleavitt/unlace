bool __fastcall sub_1CE730(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _QWORD vars0[24]; // [rsp+0h] [rbp+0h] BYREF
  _QWORD varsC0[9]; // [rsp+C0h] [rbp+C0h] BYREF

  varsC0[3] = __readfsqword(0x28u);
  sub_3F7AA0(vars0, a1, *(_QWORD *)(a2 + 40));
  vars0[0] = &off_4CBED0;
  vars0[23] = a2;
  varsC0[0] = 0xFFFFFFFF00000000LL;
  varsC0[1] = 0;
  v4 = sub_3F99C0(vars0, a3);
  vars0[0] = &off_4CBED0;
  sub_118BA0((__int64)varsC0);
  vars0[0] = &off_4CA410;
  sub_3F7B90(vars0);
  return v4 == 0;
}
