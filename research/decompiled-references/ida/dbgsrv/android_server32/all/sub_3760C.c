/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3760C
// Address: 0x0003760C

//----- (0003760C) --------------------------------------------------------
void __fastcall sub_3760C(_DWORD *ptr)
{
  void *v2; // r0

  *ptr = &off_D64D4;
  v2 = (void *)ptr[7];
  if ( v2 )
  {
    ptr[8] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// D64D4: using guessed type _UNKNOWN *off_D64D4;
