/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000746B0
// Address: 0x00000001000746B0

//----- (00000001000746B0) ----------------------------------------------------
int sub_1000746B0(char *a1, ...)
{
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  return qveprintf(a1, va);
}
