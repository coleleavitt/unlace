/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B870
// Address: 0x000000014000B870

//----- (000000014000B870) ----------------------------------------------------
void __fastcall sub_14000B870(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
