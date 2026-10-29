/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F550
// Address: 0x000000010005F550

//----- (000000010005F550) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005F550(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  char *v7; // r13
  size_t v8; // rbx
  void *v9; // rax
  size_t v10; // rbx
  void *v11; // rax

  sub_10005F6A0((char **)a1, a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2 - v4;
  if ( a2 > v4 )
  {
    v6 = 432 * v4 + 64;
    do
    {
      v7 = *(char **)a1;
      *(_QWORD *)&v7[v6 - 64] = *(_QWORD *)a3;
      *(_OWORD *)&v7[v6 - 56] = 0;
      *(_QWORD *)&v7[v6 - 40] = 0;
      v8 = *(_QWORD *)(a3 + 16);
      if ( v8 )
      {
        v9 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
        *(_QWORD *)&v7[v6 - 56] = v9;
        *(_QWORD *)&v7[v6 - 40] = v8;
        memcpy(v9, *(const void **)(a3 + 8), v8);
        *(_QWORD *)&v7[v6 - 48] = v8;
      }
      *(_DWORD *)&v7[v6 - 32] = *(_DWORD *)(a3 + 32);
      *(_OWORD *)&v7[v6 - 24] = 0;
      *(_QWORD *)&v7[v6 - 8] = 0;
      v10 = *(_QWORD *)(a3 + 48);
      if ( v10 )
      {
        v11 = qalloc_or_throw(*(_QWORD *)(a3 + 48));
        *(_QWORD *)&v7[v6 - 24] = v11;
        *(_QWORD *)&v7[v6 - 8] = v10;
        memcpy(v11, *(const void **)(a3 + 40), v10);
        *(_QWORD *)&v7[v6 - 16] = v10;
      }
      memcpy(&v7[v6], (const void *)(a3 + 64), 0x170u);
      v6 += 432;
      --v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return a2;
}
