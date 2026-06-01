/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6249C
// Address: 0x0006249C

//----- (0006249C) --------------------------------------------------------
void __fastcall sub_6249C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  *ptr = &off_DA038;
  v2 = (void *)ptr[7];
  if ( v2 )
  {
    ptr[8] = 0;
    qfree(v2);
    ptr[9] = 0;
    ptr[7] = 0;
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// DA038: using guessed type _UNKNOWN *off_DA038;
