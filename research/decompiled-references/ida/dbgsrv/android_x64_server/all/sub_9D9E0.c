/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D9E0
// Address: 0x000000000009D9E0

//----- (000000000009D9E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9D9E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  char *v7; // r15
  size_t v8; // rbx
  void *v9; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = a1;
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x38u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
  {
    v5 = a2 - v4;
    v6 = 56 * v4 + 32;
    do
    {
      v7 = *(char **)a1;
      *(_QWORD *)&v7[v6 - 32] = *(_QWORD *)a3;
      *(_OWORD *)&v7[v6 - 24] = 0;
      *(_QWORD *)&v7[v6 - 8] = 0;
      v8 = *(_QWORD *)(a3 + 16);
      if ( v8 )
      {
        v9 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
        *(_QWORD *)&v7[v6 - 24] = v9;
        *(_QWORD *)&v7[v6 - 8] = v8;
        memcpy(v9, *(const void **)(a3 + 8), v8);
        a1 = v11;
        *(_QWORD *)&v7[v6 - 16] = v8;
      }
      *(_DWORD *)&v7[v6 + 16] = *(_DWORD *)(a3 + 48);
      *(_OWORD *)&v7[v6] = *(_OWORD *)(a3 + 32);
      v6 += 56;
      --v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return a2;
}
