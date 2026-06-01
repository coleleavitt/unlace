/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE3A0
// Address: 0x00000000000AE3A0

//----- (00000000000AE3A0) ----------------------------------------------------
void __fastcall sub_AE3A0(_QWORD *a1)
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
