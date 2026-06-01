/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054D70
// Address: 0x0000000100054D70

//----- (0000000100054D70) ----------------------------------------------------
__int64 __fastcall sub_100054D70(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int128 v4; // xmm1
  void *v5; // rdi

  v3 = *a2;
  *a2 = 0;
  v4 = *(_OWORD *)(a2 + 1);
  *(_OWORD *)(a2 + 1) = 0;
  v5 = *(void **)a1;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
  }
  *(_QWORD *)a1 = v3;
  *(_OWORD *)(a1 + 8) = v4;
  return a1;
}
