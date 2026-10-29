/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D280
// Address: 0x000000010001D280

//----- (000000010001D280) ----------------------------------------------------
void __fastcall sub_10001D280(__int64 a1)
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
