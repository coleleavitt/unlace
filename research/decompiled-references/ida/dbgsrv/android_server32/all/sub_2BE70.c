/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BE70
// Address: 0x0002BE70

//----- (0002BE70) --------------------------------------------------------
bool sub_2BE70(int a1, int a2, ...)
{
  _BYTE v4[1004]; // [sp+14h] [bp-420h] BYREF
  va_list va; // [sp+42Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_2B784(a1, v4, 1024, a2, (int *)va);
  sub_2BC80((int)"%s");
  return a2 < 19;
}
