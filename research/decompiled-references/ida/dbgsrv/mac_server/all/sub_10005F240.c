/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F240
// Address: 0x000000010005F240

//----- (000000010005F240) ----------------------------------------------------
void __fastcall sub_10005F240(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
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
