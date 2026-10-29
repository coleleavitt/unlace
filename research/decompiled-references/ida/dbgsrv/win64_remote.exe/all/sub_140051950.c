/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051950
// Address: 0x0000000140051950

//----- (0000000140051950) ----------------------------------------------------
unsigned __int64 __fastcall sub_140051950(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  size_t v10; // r14
  void *v11; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x20u);
  result = *(_QWORD *)(a1 + 8);
  if ( result < a2 )
  {
    v7 = 32 * result;
    v8 = a2 - result;
    do
    {
      v9 = v7 + *(_QWORD *)a1;
      *(_DWORD *)v9 = *(_DWORD *)a3;
      result = *(unsigned int *)(a3 + 4);
      *(_DWORD *)(v9 + 4) = result;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      v10 = *(_QWORD *)(a3 + 16);
      if ( v10 )
      {
        v11 = sub_14005AAA0(*(_QWORD *)(a3 + 16));
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v9 + 24) = v10;
        result = (unsigned __int64)memcpy(v11, *(const void **)(a3 + 8), v10);
        *(_QWORD *)(v9 + 16) = v10;
      }
      v7 += 32;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
