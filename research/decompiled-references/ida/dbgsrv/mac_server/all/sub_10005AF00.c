/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AF00
// Address: 0x000000010005AF00

//----- (000000010005AF00) ----------------------------------------------------
void __fastcall sub_10005AF00(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
