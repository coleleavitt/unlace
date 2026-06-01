/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80EF0
// Address: 0x0000000000080EF0

//----- (0000000000080EF0) ----------------------------------------------------
char *__fastcall sub_80EF0(__int64 a1, __int64 a2, __int128 *a3)
{
  char **v5; // rdi
  __int64 v6; // rcx
  char *result; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rsi

  v5 = (char **)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 72) >= (unsigned __int64)(v6 + 1) )
  {
    result = *v5;
  }
  else
  {
    result = (char *)qvector_reserve((__int64)v5, *(char **)(a1 + 56), v6 + 1, 0x38u);
    *(_QWORD *)(a1 + 56) = result;
    v6 = *(_QWORD *)(a1 + 64);
  }
  v8 = 56 * v6;
  *(_OWORD *)&result[v8] = 0;
  *(_QWORD *)&result[v8 + 16] = 0;
  ++*(_QWORD *)(a1 + 64);
  *(_QWORD *)&result[v8 + 24] = *(_QWORD *)a1;
  *(_QWORD *)&result[v8 + 32] = *(_QWORD *)(a1 + 8);
  *(_DWORD *)&result[v8 + 48] = *(_DWORD *)(a1 + 80);
  *(_QWORD *)&result[v8 + 40] = a2;
  if ( a3 )
  {
    v9 = *a3;
    v10 = *((_QWORD *)a3 + 2);
    *(_QWORD *)a3 = *(_QWORD *)&result[v8];
    *((_QWORD *)a3 + 1) = *(_QWORD *)&result[v8 + 8];
    *((_QWORD *)a3 + 2) = *(_QWORD *)&result[v8 + 16];
    *(_OWORD *)&result[v8] = v9;
    *(_QWORD *)&result[v8 + 16] = v10;
  }
  return result;
}
