/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B9C0
// Address: 0x000000014000B9C0

//----- (000000014000B9C0) ----------------------------------------------------
void __fastcall sub_14000B9C0(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    j_free(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
}
