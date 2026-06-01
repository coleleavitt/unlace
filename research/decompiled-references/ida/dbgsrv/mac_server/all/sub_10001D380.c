/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D380
// Address: 0x000000010001D380

//----- (000000010001D380) ----------------------------------------------------
void **__fastcall sub_10001D380(void **a1, __int64 *a2)
{
  void **v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r13
  char *v5; // r14
  __int64 v6; // rbx
  size_t v7; // r15
  void *v8; // rax
  size_t v9; // r15
  void *v10; // rax
  void *v12; // [rsp+10h] [rbp-30h]

  v2 = a1;
  v3 = a2[1];
  if ( v3 )
  {
    *a1 = qalloc_or_throw(80 * v3);
    a1[2] = (void *)v3;
    v4 = 64;
    v12 = (void *)v3;
    do
    {
      v5 = (char *)*v2;
      v6 = *a2;
      *(_OWORD *)&v5[v4 - 64] = *(_OWORD *)(*a2 + v4 - 64);
      *(_OWORD *)&v5[v4 - 48] = 0;
      *(_QWORD *)&v5[v4 - 32] = 0;
      v7 = *(_QWORD *)(v6 + v4 - 40);
      if ( v7 )
      {
        v8 = qalloc_or_throw(*(_QWORD *)(v6 + v4 - 40));
        *(_QWORD *)&v5[v4 - 48] = v8;
        *(_QWORD *)&v5[v4 - 32] = v7;
        memcpy(v8, *(const void **)(v6 + v4 - 48), v7);
        *(_QWORD *)&v5[v4 - 40] = v7;
      }
      *(_OWORD *)&v5[v4 - 24] = 0;
      *(_QWORD *)&v5[v4 - 8] = 0;
      v9 = *(_QWORD *)(v6 + v4 - 16);
      if ( v9 )
      {
        v10 = qalloc_or_throw(*(_QWORD *)(v6 + v4 - 16));
        *(_QWORD *)&v5[v4 - 24] = v10;
        *(_QWORD *)&v5[v4 - 8] = v9;
        memcpy(v10, *(const void **)(v6 + v4 - 24), v9);
        *(_QWORD *)&v5[v4 - 16] = v9;
      }
      *(_WORD *)&v5[v4 + 8] = *(_WORD *)(v6 + v4 + 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)(v6 + v4);
      v4 += 80;
      --v3;
      v2 = a1;
    }
    while ( v3 );
    a1[1] = v12;
  }
  return v2;
}
