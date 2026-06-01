/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DBFC
// Address: 0x000000010003DBFC

//----- (000000010003DBFC) ----------------------------------------------------
void __noreturn sub_10003DBFC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        ...)
{
  va_list va; // [xsp+48h] [xbp+48h] BYREF

  va_start(va, a9);
  sub_1000349EC((unsigned __int8 *)va);
  JUMPOUT(0x10003DC5CLL);
}
// 10003DC44: control flows out of bounds to 10003DC5C
