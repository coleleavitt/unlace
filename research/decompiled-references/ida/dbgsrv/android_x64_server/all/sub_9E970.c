/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E970
// Address: 0x000000000009E970

//----- (000000000009E970) ----------------------------------------------------
__int64 __fastcall sub_9E970(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  size_t v3; // rbx
  void *v4; // rax
  size_t v5; // rbx
  void *v6; // rax
  __int64 v7; // rbx
  void *v8; // rax
  __int64 result; // rax

  v2 = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 16) = v3;
    memcpy(v4, *(const void **)a2, v3);
    v2 = 0;
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_OWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 40) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 40) = v5;
    memcpy(v6, *(const void **)(a2 + 24), v5);
    *(_QWORD *)(a1 + 32) = v5;
  }
  *(_OWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v7 = *(_QWORD *)(a2 + 56);
  if ( v7 )
  {
    v8 = qalloc_or_throw(16 * v7);
    *(_QWORD *)(a1 + 48) = v8;
    *(_QWORD *)(a1 + 64) = v7;
    memcpy(v8, *(const void **)(a2 + 48), 16 * v7);
    *(_QWORD *)(a1 + 56) = v7;
  }
  result = *(unsigned int *)(a2 + 72);
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
