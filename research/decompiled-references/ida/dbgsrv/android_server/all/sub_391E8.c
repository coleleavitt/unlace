/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_391E8
// Address: 0x00000000000391E8

//----- (00000000000391E8) ----------------------------------------------------
void __fastcall sub_391E8(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

  sub_394DC(a1 + 72);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_39570(a1 + 24);
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
