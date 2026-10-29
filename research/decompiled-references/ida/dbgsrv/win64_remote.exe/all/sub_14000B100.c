/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B100
// Address: 0x000000014000B100

//----- (000000014000B100) ----------------------------------------------------
void __fastcall sub_14000B100(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    j_free(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
