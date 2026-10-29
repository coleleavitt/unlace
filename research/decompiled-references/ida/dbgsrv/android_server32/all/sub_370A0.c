/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_370A0
// Address: 0x000370A0

//----- (000370A0) --------------------------------------------------------
void __fastcall sub_370A0(_DWORD *ptr)
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
