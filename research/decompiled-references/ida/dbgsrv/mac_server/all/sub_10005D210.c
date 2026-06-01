/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D210
// Address: 0x000000010005D210

//----- (000000010005D210) ----------------------------------------------------
__int64 sub_10005D210(char *a1, ...)
{
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  qvprintf(a1, va);
  sub_10005D2D0("\n");
  return __stack_chk_guard;
}
