/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28C8C
// Address: 0x00028C8C

//----- (00028C8C) --------------------------------------------------------
int sub_28C8C(int a1, const char *a2, ...)
{
  va_list va; // [sp+1Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_3717C(a1, a2, (int)va);
  return a1;
}
