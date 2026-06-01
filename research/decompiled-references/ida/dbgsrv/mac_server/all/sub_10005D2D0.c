/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D2D0
// Address: 0x000000010005D2D0

//----- (000000010005D2D0) ----------------------------------------------------
int sub_10005D2D0(char *a1, ...)
{
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  return qvprintf(a1, va);
}
