/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54A14
// Address: 0x0000000000054A14

//----- (0000000000054A14) ----------------------------------------------------
long double __fastcall sub_54A14(__int64 a1, __int64 a2)
{
  size_t v2; // x21
  void *v5; // x0
  size_t v6; // x22
  void *v7; // x0
  long double result; // q0
  __int128 v9; // q1

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v2;
    memcpy(v5, *(const void **)a2, v2);
    *(_QWORD *)(a1 + 8) = v2;
  }
  sub_5AE24((_QWORD *)(a1 + 24), (__int64 *)(a2 + 24));
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v6 = *(_QWORD *)(a2 + 56);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a1 + 48) = v7;
    *(_QWORD *)(a1 + 64) = v6;
    memcpy(v7, *(const void **)(a2 + 48), v6);
    *(_QWORD *)(a1 + 56) = v6;
  }
  result = *(long double *)(a2 + 81);
  v9 = *(_OWORD *)(a2 + 72);
  *(long double *)(a1 + 81) = result;
  *(_OWORD *)(a1 + 72) = v9;
  return result;
}
