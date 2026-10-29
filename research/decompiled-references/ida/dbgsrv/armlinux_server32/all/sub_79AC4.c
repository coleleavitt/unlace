/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79AC4
// Address: 0x00079AC4

//----- (00079AC4) --------------------------------------------------------
_DWORD *sub_79AC4(_DWORD *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_7F548(a1, a2, (int)varg_r2);
}
