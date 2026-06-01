/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C308
// Address: 0x0007C308

//----- (0007C308) --------------------------------------------------------
void __fastcall sub_7C308(_DWORD *ptr)
{
  FILE *v2; // r0
  void *v3; // r0

  *ptr = &off_DB23C;
  v2 = (FILE *)ptr[6];
  if ( v2 )
    qfclose(v2);
  ptr[5] = 0;
  ptr[6] = 0;
  v3 = (void *)ptr[10];
  if ( v3 )
  {
    ptr[11] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// DB23C: using guessed type _UNKNOWN *off_DB23C;
