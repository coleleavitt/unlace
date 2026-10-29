/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53D50
// Address: 0x00053D50

//----- (00053D50) --------------------------------------------------------
int sub_53D50(int result, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  if ( *(_BYTE *)(result + 412) )
    return sub_5358C(0, *(_BYTE **)(result + 248), a2, (int)varg_r2);
  return result;
}
