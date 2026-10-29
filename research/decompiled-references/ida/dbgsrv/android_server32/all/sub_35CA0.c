/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35CA0
// Address: 0x00035CA0

//----- (00035CA0) --------------------------------------------------------
void __fastcall sub_35CA0(_DWORD *ptr)
{
  void *v2; // r0

  *ptr = &off_D64C0;
  v2 = (void *)ptr[7];
  if ( v2 )
  {
    ptr[8] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// D64C0: using guessed type _UNKNOWN *off_D64C0;
