/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7470
// Address: 0x00000000000A7470

//----- (00000000000A7470) ----------------------------------------------------
unsigned __int64 __fastcall sub_A7470(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  char *v7; // r14
  size_t v8; // r13
  void *v9; // rax

  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x20u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
  {
    v5 = a2 - v4;
    v6 = (32 * v4) | 0x18;
    do
    {
      v7 = *(char **)a1;
      *(_QWORD *)&v7[v6 - 24] = *(_QWORD *)a3;
      *(_OWORD *)&v7[v6 - 16] = 0;
      *(_QWORD *)&v7[v6] = 0;
      v8 = *(_QWORD *)(a3 + 16);
      if ( v8 )
      {
        v9 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
        *(_QWORD *)&v7[v6 - 16] = v9;
        *(_QWORD *)&v7[v6] = v8;
        memcpy(v9, *(const void **)(a3 + 8), v8);
        *(_QWORD *)&v7[v6 - 8] = v8;
      }
      v6 += 32;
      --v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return a2;
}
