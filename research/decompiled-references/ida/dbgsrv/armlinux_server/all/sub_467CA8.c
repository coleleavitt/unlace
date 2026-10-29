/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467CA8
// Address: 0x0000000000467CA8

//----- (0000000000467CA8) ----------------------------------------------------
void __fastcall sub_467CA8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    j__free(v3);
  }
}
