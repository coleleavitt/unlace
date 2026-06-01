/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067430
// Address: 0x0000000100067430

//----- (0000000100067430) ----------------------------------------------------
void __fastcall sub_100067430(_QWORD *a1)
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
