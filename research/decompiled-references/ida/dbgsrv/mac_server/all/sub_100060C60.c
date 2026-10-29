/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060C60
// Address: 0x0000000100060C60

//----- (0000000100060C60) ----------------------------------------------------
void __fastcall sub_100060C60(__int64 a1)
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
