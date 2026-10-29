/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004E350
// Address: 0x000000014004E350

//----- (000000014004E350) ----------------------------------------------------
unsigned __int64 __fastcall sub_14004E350(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  _BYTE *v9; // rbx
  size_t v10; // r14
  void *v11; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x38u);
  result = *(_QWORD *)(a1 + 8);
  if ( result < a2 )
  {
    v7 = 56 * result;
    v8 = a2 - result;
    do
    {
      v9 = *(_BYTE **)a1;
      *(_QWORD *)&v9[v7] = *(_QWORD *)a3;
      *(_QWORD *)&v9[v7 + 8] = 0;
      *(_QWORD *)&v9[v7 + 16] = 0;
      *(_QWORD *)&v9[v7 + 24] = 0;
      v10 = *(_QWORD *)(a3 + 16);
      if ( v10 )
      {
        v11 = sub_14005AAA0(*(_QWORD *)(a3 + 16));
        *(_QWORD *)&v9[v7 + 8] = v11;
        *(_QWORD *)&v9[v7 + 24] = v10;
        memcpy(v11, *(const void **)(a3 + 8), v10);
        *(_QWORD *)&v9[v7 + 16] = v10;
      }
      *(_DWORD *)&v9[v7 + 32] = *(_DWORD *)(a3 + 32);
      *(_DWORD *)&v9[v7 + 36] = *(_DWORD *)(a3 + 36);
      v9[v7 + 40] = *(_BYTE *)(a3 + 40);
      *(_DWORD *)&v9[v7 + 44] = *(_DWORD *)(a3 + 44);
      result = *(unsigned int *)(a3 + 48);
      *(_DWORD *)&v9[v7 + 48] = result;
      v7 += 56;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
