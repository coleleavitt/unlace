/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FBA8
// Address: 0x0005FBA8

//----- (0005FBA8) --------------------------------------------------------
void __fastcall sub_5FBA8(_DWORD *ptr)
{
  void *v2; // r0

  *ptr = &off_D9FC8;
  v2 = (void *)ptr[2];
  if ( v2 )
  {
    ptr[3] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// D9FC8: using guessed type _UNKNOWN *off_D9FC8;
