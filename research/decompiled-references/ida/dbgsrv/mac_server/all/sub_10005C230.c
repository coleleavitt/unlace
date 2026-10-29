/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C230
// Address: 0x000000010005C230

//----- (000000010005C230) ----------------------------------------------------
void __fastcall sub_10005C230(_QWORD *a1)
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
