/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AC40
// Address: 0x000000000040AC40

//----- (000000000040AC40) ----------------------------------------------------
void __fastcall sub_40AC40(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

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
