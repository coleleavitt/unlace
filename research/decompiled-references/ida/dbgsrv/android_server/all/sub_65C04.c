/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65C04
// Address: 0x0000000000065C04

//----- (0000000000065C04) ----------------------------------------------------
void __fastcall sub_65C04(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
