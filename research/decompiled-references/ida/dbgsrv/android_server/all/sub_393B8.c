/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_393B8
// Address: 0x00000000000393B8

//----- (00000000000393B8) ----------------------------------------------------
void __fastcall sub_393B8(_QWORD *a1)
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
