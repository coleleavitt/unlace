/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001330
// Address: 0x0000000100001330

//----- (0000000100001330) ----------------------------------------------------
void __fastcall sub_100001330(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
