/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80700
// Address: 0x0000000000080700

//----- (0000000000080700) ----------------------------------------------------
__int64 __fastcall sub_80700(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int128 v4; // xmm0
  size_t v5; // r15
  void *v6; // rax

  v4 = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v5;
    memcpy(v6, *(const void **)a2, v5);
    v4 = 0;
    *(_QWORD *)(a1 + 8) = v5;
  }
  *(_BYTE *)(a1 + 24) = 2;
  *(_OWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 48) = 0;
  return copy_idcv((char *)(a1 + 24), (char *)(a2 + 24), *(double *)&v4, a4);
}
