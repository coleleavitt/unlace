/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_687E0
// Address: 0x00000000000687E0

//----- (00000000000687E0) ----------------------------------------------------
void __fastcall sub_687E0(_QWORD *a1)
{
  void *v2; // rdi

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
