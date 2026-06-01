unsigned __int64 __fastcall sub_642860(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        double a5,
        double a6)
{
  unsigned __int64 v7[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  sub_505940(a1 + 2872, v7, a5, a6);
  sub_504B40(a1 + 2872);
  return v8 - __readfsqword(0x28u);
}
