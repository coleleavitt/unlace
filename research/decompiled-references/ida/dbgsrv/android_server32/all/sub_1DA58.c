/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DA58
// Address: 0x0001DA58

//----- (0001DA58) --------------------------------------------------------
int sub_1DA58(int a1, const char *a2, ...)
{
  va_list va; // [sp+1Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_26F18(a1, a2, (int)va);
  return a1;
}
