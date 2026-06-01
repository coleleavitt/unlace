/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000060A0
// Address: 0x00000001000060A0

//----- (00000001000060A0) ----------------------------------------------------
void __fastcall sub_1000060A0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
    a1[4] = 0;
    a1[6] = 0;
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3);
    a1[1] = 0;
    a1[3] = 0;
  }
}
