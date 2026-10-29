/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5E30
// Address: 0x00000000000E5E30

//----- (00000000000E5E30) ----------------------------------------------------
_BYTE *__fastcall sub_E5E30(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rax
  size_t v6; // rsi
  _BYTE *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  _BYTE *result; // rax
  size_t v11; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 9 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 9 )
      v6 = v3 + 9;
    *(_QWORD *)(a2 + 16) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_QWORD *)a2 = v5;
    v3 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  *(_QWORD *)&v5[v3] = 0x7470656378656F6ELL;
  v5[v3 + 8] = 40;
  *(_QWORD *)(a2 + 8) += 9LL;
  v7 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( v7[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v8 + 1 >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < v8 + 1 )
      v11 = v8 + 1;
    *(_QWORD *)(a2 + 16) = v11;
    result = realloc(*(void **)a2, v11);
    *(_QWORD *)a2 = result;
    v8 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v8] = 41;
  ++*(_QWORD *)(a2 + 8);
  return result;
}
