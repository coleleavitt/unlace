/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A560
// Address: 0x000000010006A560

//----- (000000010006A560) ----------------------------------------------------
void __fastcall sub_10006A560(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
}
