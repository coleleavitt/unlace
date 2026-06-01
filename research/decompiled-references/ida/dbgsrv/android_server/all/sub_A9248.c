/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9248
// Address: 0x00000000000A9248

//----- (00000000000A9248) ----------------------------------------------------
void __fastcall sub_A9248(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
