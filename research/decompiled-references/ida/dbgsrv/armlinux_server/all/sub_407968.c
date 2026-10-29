/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407968
// Address: 0x0000000000407968

//----- (0000000000407968) ----------------------------------------------------
void __fastcall sub_407968(_QWORD *a1)
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
