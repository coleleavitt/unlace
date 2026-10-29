/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D970
// Address: 0x000000010006D970

//----- (000000010006D970) ----------------------------------------------------
void __fastcall sub_10006D970(_QWORD *a1)
{
  void *v2; // rdi

  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
