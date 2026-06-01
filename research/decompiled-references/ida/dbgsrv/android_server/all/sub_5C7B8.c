/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C7B8
// Address: 0x000000000005C7B8

//----- (000000000005C7B8) ----------------------------------------------------
void __fastcall sub_5C7B8(__int64 a1)
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
