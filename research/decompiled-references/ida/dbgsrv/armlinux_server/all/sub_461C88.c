/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461C88
// Address: 0x0000000000461C88

//----- (0000000000461C88) ----------------------------------------------------
void __fastcall sub_461C88(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v3);
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v4);
  }
}
