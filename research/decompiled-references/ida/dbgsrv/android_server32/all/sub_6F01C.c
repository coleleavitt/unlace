/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F01C
// Address: 0x0006F01C

//----- (0006F01C) --------------------------------------------------------
void __fastcall sub_6F01C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  *ptr = &off_DA9CC;
  v2 = (void *)ptr[8];
  if ( v2 )
  {
    ptr[9] = 0;
    qfree(v2);
    ptr[10] = 0;
    ptr[8] = 0;
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// DA9CC: using guessed type _UNKNOWN *off_DA9CC;
