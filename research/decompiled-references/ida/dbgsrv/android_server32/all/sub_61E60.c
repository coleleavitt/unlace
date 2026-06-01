/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61E60
// Address: 0x00061E60

//----- (00061E60) --------------------------------------------------------
void __fastcall sub_61E60(_DWORD *ptr)
{
  void *v2; // r0

  *ptr = &off_DA024;
  v2 = (void *)ptr[1];
  if ( v2 )
  {
    ptr[2] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// DA024: using guessed type _UNKNOWN *off_DA024;
