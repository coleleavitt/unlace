/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000058C0
// Address: 0x00000001000058C0

//----- (00000001000058C0) ----------------------------------------------------
void __fastcall sub_1000058C0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
    a1[6] = 0;
    a1[8] = 0;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
    a1[3] = 0;
    a1[5] = 0;
  }
}
