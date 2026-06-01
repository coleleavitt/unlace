bool __fastcall sub_651000(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[3] = __readfsqword(0x28u);
  v7[0] = off_2B37210;
  v7[1] = a3;
  return (int)sub_650CF0(a2, (__int64)v7, a1, nullptr, 0, a6) > 0;
}
