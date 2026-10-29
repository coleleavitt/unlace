/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57BCC
// Address: 0x00057BCC

//----- (00057BCC) --------------------------------------------------------
_DWORD *__fastcall sub_57BCC(_DWORD *a1)
{
  *a1 = &off_D9E84;
  qsem_free(a1[2]);
  a1[1] = 0;
  a1[2] = 0;
  return a1;
}
// D9E84: using guessed type _UNKNOWN *off_D9E84;
