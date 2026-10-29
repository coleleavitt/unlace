/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7290
// Address: 0x00000000000A7290

//----- (00000000000A7290) ----------------------------------------------------
void __fastcall sub_A7290(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  char *v7; // r13
  void *v8; // rdi
  size_t v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rax
  void *src; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+10h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = (32 * a2) | 8;
    v6 = a2;
    do
    {
      v7 = *(char **)a1;
      v8 = *(void **)(*(_QWORD *)a1 + v5);
      if ( v8 )
      {
        *(_QWORD *)&v7[v5 + 8] = 0;
        qfree(v8);
        *(_QWORD *)&v7[v5] = 0;
        *(_QWORD *)&v7[v5 + 16] = 0;
      }
      ++v6;
      v5 += 32;
    }
    while ( v6 < v4 );
    *(_QWORD *)(a1 + 8) = a2;
    return;
  }
  if ( v4 >= a2 )
    return;
  if ( *(_QWORD *)a1 > a3 || 32LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)a1 <= a3 )
  {
    sub_A7470(a1, a2, a3);
    return;
  }
  v17 = *(_QWORD *)a3;
  v10 = *(_QWORD *)(a3 + 16);
  if ( v10 )
  {
    src = qalloc_or_throw(*(_QWORD *)(a3 + 16));
    memcpy(src, *(const void **)(a3 + 8), v10);
    if ( *(_QWORD *)(a1 + 16) >= a2 )
      goto LABEL_16;
    goto LABEL_15;
  }
  src = nullptr;
  if ( *(_QWORD *)(a1 + 16) < a2 )
LABEL_15:
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x20u);
LABEL_16:
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 < a2 )
  {
    v12 = a2 - v11;
    v13 = (32 * v11) | 0x18;
    do
    {
      v14 = *(char **)a1;
      *(_QWORD *)&v14[v13 - 24] = v17;
      *(_OWORD *)&v14[v13 - 16] = 0;
      *(_QWORD *)&v14[v13] = 0;
      if ( v10 )
      {
        v15 = qalloc_or_throw(v10);
        *(_QWORD *)&v14[v13 - 16] = v15;
        *(_QWORD *)&v14[v13] = v10;
        memcpy(v15, src, v10);
        *(_QWORD *)&v14[v13 - 8] = v10;
      }
      v13 += 32;
      --v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  if ( src )
    qfree(src);
}
