/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B780
// Address: 0x000000014000B780

//----- (000000014000B780) ----------------------------------------------------
void __fastcall sub_14000B780(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    j_free(v2);
    a1[3] = 0;
    a1[5] = 0;
  }
}
