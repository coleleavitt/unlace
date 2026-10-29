/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4684A0
// Address: 0x00000000004684A0

//----- (00000000004684A0) ----------------------------------------------------
void __fastcall sub_4684A0(__int64 a1)
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
