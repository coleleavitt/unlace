/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93868
// Address: 0x0000000000093868

//----- (0000000000093868) ----------------------------------------------------
void __fastcall sub_93868(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[1];
  *a1 = &off_15DF48;
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1);
}
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
