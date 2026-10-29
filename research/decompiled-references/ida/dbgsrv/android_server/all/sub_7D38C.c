/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D38C
// Address: 0x000000000007D38C

//----- (000000000007D38C) ----------------------------------------------------
void __fastcall sub_7D38C(__int64 a1)
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
