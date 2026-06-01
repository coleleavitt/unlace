/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9854C
// Address: 0x000000000009854C

//----- (000000000009854C) ----------------------------------------------------
void *__fastcall sub_9854C(__int64 a1, __int64 a2)
{
  size_t v4; // x21
  void *v5; // x0
  int v6; // w8
  size_t v7; // x21
  void *v8; // x0

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 24) = v4;
    memcpy(v5, *(const void **)(a2 + 8), v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  v6 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = v6;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
  {
    v8 = qalloc_or_throw(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(a1 + 56) = v7;
    memcpy(v8, *(const void **)(a2 + 40), v7);
    *(_QWORD *)(a1 + 48) = v7;
  }
  return memcpy((void *)(a1 + 64), (const void *)(a2 + 64), 0x170u);
}
