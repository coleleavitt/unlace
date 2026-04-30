__int64 __fastcall sub_371B80(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int128 v14; // [rsp+8h] [rbp-20h]
  unsigned __int64 v15; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  return sub_371840(a1, a2, a3, (__int64)&v13, 1, a4, 0.0, a6, a7, a8, a9, a10, a11, a12);
}
