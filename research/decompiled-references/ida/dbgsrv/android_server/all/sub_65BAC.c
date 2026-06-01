/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65BAC
// Address: 0x0000000000065BAC

//----- (0000000000065BAC) ----------------------------------------------------
void __fastcall sub_65BAC(__int64 a1)
{
  void *v2; // x0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
