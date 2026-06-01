/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003FF70
// Address: 0x000000014003FF70

//----- (000000014003FF70) ----------------------------------------------------
void __fastcall sub_14003FF70(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v4);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
