/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000358A0
// Address: 0x00000001000358A0

//----- (00000001000358A0) ----------------------------------------------------
void __noreturn sub_1000358A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        ...)
{
  va_list va; // [xsp+60h] [xbp+60h] BYREF

  va_start(va, a12);
  sub_100006678((__int64 *)va);
  JUMPOUT(0x1000358ACLL);
}
// 1000358A8: control flows out of bounds to 1000358AC
