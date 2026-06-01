/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4243D0
// Address: 0x00000000004243D0

//----- (00000000004243D0) ----------------------------------------------------
void __fastcall sub_4243D0(__int64 a1)
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
