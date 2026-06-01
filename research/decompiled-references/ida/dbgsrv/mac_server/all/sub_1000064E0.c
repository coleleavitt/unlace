/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000064E0
// Address: 0x00000001000064E0

//----- (00000001000064E0) ----------------------------------------------------
void __fastcall sub_1000064E0(_QWORD *a1)
{
  void *v2; // rdi

  v2 = (void *)a1[262];
  if ( v2 )
  {
    a1[263] = 0;
    qfree(v2);
    a1[262] = 0;
    a1[264] = 0;
  }
}
