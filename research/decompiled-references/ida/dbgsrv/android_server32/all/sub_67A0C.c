/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67A0C
// Address: 0x00067A0C

//----- (00067A0C) --------------------------------------------------------
void __fastcall sub_67A0C(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r0

  *a1 = &off_DA324;
  v2 = (void *)a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
    a1[17] = 0;
    a1[15] = 0;
  }
  v3 = sub_6BBD4(a1);
  operator delete(v3);
}
// DA324: using guessed type _UNKNOWN *off_DA324;
