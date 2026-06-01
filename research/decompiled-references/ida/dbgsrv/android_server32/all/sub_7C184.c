/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C184
// Address: 0x0007C184

//----- (0007C184) --------------------------------------------------------
void __fastcall sub_7C184(_DWORD *ptr)
{
  void *v2; // r0

  *ptr = &off_DB228;
  v2 = (void *)ptr[5];
  if ( v2 )
  {
    ptr[6] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// DB228: using guessed type _UNKNOWN *off_DB228;
