/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57C08
// Address: 0x00057C08

//----- (00057C08) --------------------------------------------------------
void __fastcall sub_57C08(_DWORD *a1)
{
  *a1 = &off_D9E84;
  qsem_free(a1[2]);
  operator delete(a1);
}
// D9E84: using guessed type _UNKNOWN *off_D9E84;
