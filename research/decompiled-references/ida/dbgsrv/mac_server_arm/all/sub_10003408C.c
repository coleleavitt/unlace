/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003408C
// Address: 0x000000010003408C

//----- (000000010003408C) ----------------------------------------------------
void __noreturn sub_10003408C(
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
  sub_100006228((__int64 *)va);
  JUMPOUT(0x100034098LL);
}
// 100034094: control flows out of bounds to 100034098
