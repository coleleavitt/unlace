unsigned __int64 __fastcall sub_1F1140(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v7 = *(_QWORD *)(a1 + 96);
  v10 = __readfsqword(0x28u);
  v9[0] = 0;
  v9[1] = v7;
  sub_1F0EE0(a1, a2, v9, a3, 0, a7, a4);
  return v10 - __readfsqword(0x28u);
}
