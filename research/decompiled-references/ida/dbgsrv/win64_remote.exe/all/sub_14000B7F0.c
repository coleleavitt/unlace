/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B7F0
// Address: 0x000000014000B7F0

//----- (000000014000B7F0) ----------------------------------------------------
void __fastcall sub_14000B7F0(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j_free(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j_free(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
