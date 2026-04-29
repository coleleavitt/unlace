unsigned __int64 __fastcall sub_61330(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = -1;
  v5 = a3;
  v3 = sub_1AACF0(a3, a2, a1);
  sub_1AC5E0(a1, a2, sub_60380, &v5);
  sub_1AB7B0(a2, v3);
  return v7 - __readfsqword(0x28u);
}
