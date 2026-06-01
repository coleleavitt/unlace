unsigned __int64 __fastcall sub_4ADAB0(__int64 *a1, __int64 *a2)
{
  __int64 v3[53]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v4; // [rsp+1A8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+1B8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_49B590((__int64)v3, a1);
  v4 = a1[53];
  sub_494DC0((__int64)a1, a2);
  a1[53] = a2[53];
  sub_494DC0((__int64)a2, v3);
  a2[53] = v4;
  sub_496580((__int64)v3);
  return v5 - __readfsqword(0x28u);
}
