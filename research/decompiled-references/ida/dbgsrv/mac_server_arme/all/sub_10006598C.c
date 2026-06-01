/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006598C
// Address: 0x000000010006598C

//----- (000000010006598C) ----------------------------------------------------
__int64 __fastcall sub_10006598C(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = *(void **)(a1 + 72);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v5 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
