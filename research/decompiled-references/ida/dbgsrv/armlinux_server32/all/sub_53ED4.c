/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53ED4
// Address: 0x00053ED4

//----- (00053ED4) --------------------------------------------------------
int sub_53ED4(int result, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  if ( *(_BYTE *)(result + 412) )
    return sub_53710(0, *(_BYTE **)(result + 248), a2, (int)varg_r2);
  return result;
}
