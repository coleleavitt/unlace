/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_620D0
// Address: 0x000620D0

//----- (000620D0) --------------------------------------------------------
int sub_620D0(char *a1, ...)
{
  int _10; // [sp+10h] [bp+4h]
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  qvprintf(a1, varg_r1);
  sub_62114("\n");
  return _10;
}
// 62100: variable '_10' is possibly undefined
