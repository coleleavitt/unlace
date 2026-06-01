/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485458
// Address: 0x0000000000485458

//----- (0000000000485458) ----------------------------------------------------
void __fastcall sub_485458(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = *(void **)(a1 + 48);
  if ( v2 != (void *)-1LL )
  {
    iconv_close(v2);
    *(_QWORD *)(a1 + 48) = -1;
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
