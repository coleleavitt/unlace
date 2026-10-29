/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F8E8
// Address: 0x0007F8E8

//----- (0007F8E8) --------------------------------------------------------
void __fastcall sub_7F8E8(_DWORD *a1)
{
  *a1 = &off_D9E84;
  qsem_free(a1[2]);
  operator delete(a1);
}
// D9E84: using guessed type _UNKNOWN *off_D9E84;
