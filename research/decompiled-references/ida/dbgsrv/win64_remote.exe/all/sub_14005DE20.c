/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DE20
// Address: 0x000000014005DE20

//----- (000000014005DE20) ----------------------------------------------------
__int8 *sub_14005DE20(__int8 *a1, __int64 a2, char *a3, ...)
{
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_14005DE40(a1, a2, a3, (__int64)va);
}
