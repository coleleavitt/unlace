/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411CA0
// Address: 0x0000000000411CA0

//----- (0000000000411CA0) ----------------------------------------------------
void __fastcall sub_411CA0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v2);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v3);
  }
}
