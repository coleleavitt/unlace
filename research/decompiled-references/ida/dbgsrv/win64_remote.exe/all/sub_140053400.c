/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053400
// Address: 0x0000000140053400

//----- (0000000140053400) ----------------------------------------------------
void __fastcall sub_140053400(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    j_free(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    j_free(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    j_free(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
}
