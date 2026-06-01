/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B730
// Address: 0x000000014000B730

//----- (000000014000B730) ----------------------------------------------------
void __fastcall sub_14000B730(_QWORD *a1)
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
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    j_free(v3);
    a1[1] = 0;
    a1[3] = 0;
  }
}
