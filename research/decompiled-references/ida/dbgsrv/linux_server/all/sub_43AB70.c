/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AB70
// Address: 0x000000000043AB70

//----- (000000000043AB70) ----------------------------------------------------
__int64 __fastcall sub_43AB70(
        const char *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[3] = __readfsqword(0x28u);
  result = 0;
  if ( a3 )
  {
    v13[1] = a2;
    v13[0] = &off_4C2C28;
    return sub_43A520(a1, a3, a4, (__int64)v13, 0, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  return result;
}
// 4C2C28: using guessed type __int64 (__fastcall *off_4C2C28)();
