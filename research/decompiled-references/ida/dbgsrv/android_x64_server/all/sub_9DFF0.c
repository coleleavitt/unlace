/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DFF0
// Address: 0x000000000009DFF0

//----- (000000000009DFF0) ----------------------------------------------------
void *__fastcall sub_9DFF0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  size_t v3; // r15
  void *v4; // rax
  size_t v5; // r15
  void *v6; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 24) = v3;
    memcpy(v4, *(const void **)(a2 + 8), v3);
    v2 = 0;
    *(_QWORD *)(a1 + 16) = v3;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
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
  return memcpy((void *)(a1 + 64), (const void *)(a2 + 64), 0x170u);
}
