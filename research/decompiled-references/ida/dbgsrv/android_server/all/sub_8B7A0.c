/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B7A0
// Address: 0x000000000008B7A0

//----- (000000000008B7A0) ----------------------------------------------------
void __fastcall sub_8B7A0(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[1];
  *a1 = &off_15DF48;
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
