/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003910
// Address: 0x0000000100003910

//----- (0000000100003910) ----------------------------------------------------
void __fastcall sub_100003910(_QWORD *a1)
{
  void *v2; // rdi

  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
