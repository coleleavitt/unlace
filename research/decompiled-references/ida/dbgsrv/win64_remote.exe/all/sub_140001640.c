/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140001640
// Address: 0x0000000140001640

//----- (0000000140001640) ----------------------------------------------------
void __fastcall sub_140001640(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
