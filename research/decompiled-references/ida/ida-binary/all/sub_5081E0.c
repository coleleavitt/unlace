bool __fastcall sub_5081E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v20[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v21; // [rsp+408h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  qvsnprintf(v20, 1024, a2, a3, a13, a14);
  return (int)sub_1697D0(
                (int)"Please enter a number\n\n%A\n\n <Input:D::40::>\n\n\n",
                (__int64)v20,
                a1,
                v14,
                v15,
                v16,
                a4,
                a5,
                a6,
                a7,
                v17,
                v18,
                a10,
                a11,
                v20[0]) > 0;
}
