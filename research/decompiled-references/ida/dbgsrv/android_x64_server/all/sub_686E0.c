/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_686E0
// Address: 0x00000000000686E0

//----- (00000000000686E0) ----------------------------------------------------
void __fastcall sub_686E0(__int64 a1)
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
