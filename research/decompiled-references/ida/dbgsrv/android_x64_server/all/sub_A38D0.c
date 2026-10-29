/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A38D0
// Address: 0x00000000000A38D0

//----- (00000000000A38D0) ----------------------------------------------------
__int64 __fastcall sub_A38D0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  size_t v3; // r15
  void *v4; // rax
  size_t v5; // r15
  void *v6; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v2 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 24));
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 32) = v3;
    memcpy(v4, *(const void **)(a2 + 16), v3);
    v2 = 0;
    *(_QWORD *)(a1 + 24) = v3;
  }
  *(_OWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 56) = v5;
    memcpy(v6, *(const void **)(a2 + 40), v5);
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 72);
  result = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}
