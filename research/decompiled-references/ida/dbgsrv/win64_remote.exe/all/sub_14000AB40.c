/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AB40
// Address: 0x000000014000AB40

//----- (000000014000AB40) ----------------------------------------------------
void __fastcall sub_14000AB40(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    j_free(v2);
    a1[4] = 0;
    a1[6] = 0;
  }
}
