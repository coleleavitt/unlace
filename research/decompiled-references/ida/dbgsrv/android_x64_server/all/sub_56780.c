/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56780
// Address: 0x0000000000056780

//----- (0000000000056780) ----------------------------------------------------
void __fastcall sub_56780(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  void *v3; // rax
  size_t v4; // r12
  void *v5; // rax
  __int128 v6; // xmm0

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 16) = v2;
    memcpy(v3, *(const void **)a2, v2);
    *(_QWORD *)(a1 + 8) = v2;
  }
  sub_5D0A0((char **)(a1 + 24), (__int64 *)(a2 + 24));
  *(_OWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a1 + 48) = v5;
    *(_QWORD *)(a1 + 64) = v4;
    memcpy(v5, *(const void **)(a2 + 48), v4);
    *(_QWORD *)(a1 + 56) = v4;
  }
  v6 = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 81) = *(_OWORD *)(a2 + 81);
  *(_OWORD *)(a1 + 72) = v6;
}
