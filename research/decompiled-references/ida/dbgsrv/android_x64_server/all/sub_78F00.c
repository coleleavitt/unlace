/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78F00
// Address: 0x0000000000078F00

//----- (0000000000078F00) ----------------------------------------------------
void __fastcall sub_78F00(__int64 a1)
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
