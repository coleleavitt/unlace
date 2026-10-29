/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65BD8
// Address: 0x0000000000065BD8

//----- (0000000000065BD8) ----------------------------------------------------
void __fastcall sub_65BD8(__int64 a1)
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
