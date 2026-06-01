/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002D00
// Address: 0x0000000100002D00

//----- (0000000100002D00) ----------------------------------------------------
__int64 sub_100002D00(__int64 a1, char *a2, ...)
{
  va_list va; // [rsp+B0h] [rbp-30h] BYREF

  va_start(va, a2);
  sub_10000C630(a1, a2, va);
  return a1;
}
