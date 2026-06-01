/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FC1C
// Address: 0x0005FC1C

//----- (0005FC1C) --------------------------------------------------------
void __fastcall sub_5FC1C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  *ptr = &off_D9FE0;
  v2 = (void *)ptr[5];
  if ( v2 )
  {
    ptr[6] = 0;
    qfree(v2);
    ptr[7] = 0;
    ptr[5] = 0;
  }
  v3 = (void *)ptr[2];
  if ( v3 )
  {
    ptr[3] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// D9FE0: using guessed type _UNKNOWN *off_D9FE0;
