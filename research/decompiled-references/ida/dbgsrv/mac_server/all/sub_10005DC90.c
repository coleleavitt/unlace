/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DC90
// Address: 0x000000010005DC90

//----- (000000010005DC90) ----------------------------------------------------
void __fastcall sub_10005DC90(__int64 a1)
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
