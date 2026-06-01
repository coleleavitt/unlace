/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C4F8
// Address: 0x000000000047C4F8

//----- (000000000047C4F8) ----------------------------------------------------
void __fastcall sub_47C4F8(__int64 a1)
{
  void *v1; // x1

  v1 = *(void **)(a1 + 8);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    j__free(v1);
  }
}
