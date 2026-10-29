/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF760
// Address: 0x00000000000BF760

//----- (00000000000BF760) ----------------------------------------------------
void __fastcall sub_BF760(__int64 a1)
{
  FILE *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = &off_150688;
  v2 = *(FILE **)(a1 + 32);
  if ( v2 )
    qfclose(v2);
  *(_OWORD *)(a1 + 24) = 0;
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
}
// 150688: using guessed type _UNKNOWN *off_150688;
