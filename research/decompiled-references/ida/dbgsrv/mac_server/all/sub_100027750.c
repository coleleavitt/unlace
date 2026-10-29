/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027750
// Address: 0x0000000100027750

//----- (0000000100027750) ----------------------------------------------------
void __fastcall sub_100027750(__int64 a1)
{
  void *v2; // rdi

  free_idcv((unsigned __int8 *)(a1 + 24));
  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
