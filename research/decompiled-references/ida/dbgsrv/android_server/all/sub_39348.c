/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39348
// Address: 0x0000000000039348

//----- (0000000000039348) ----------------------------------------------------
void __fastcall sub_39348(__int64 a1)
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
