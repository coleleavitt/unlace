/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3470
// Address: 0x00000000000E3470

//----- (00000000000E3470) ----------------------------------------------------
_BYTE *__fastcall sub_E3470(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rax
  size_t v6; // rsi
  _BYTE *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  _BYTE *v10; // rax
  size_t v11; // rsi
  _BYTE *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  size_t v16; // rsi
  _BYTE *v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  _BYTE *result; // rax
  size_t v21; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 1 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 1 )
      v6 = v3 + 1;
    *(_QWORD *)(a2 + 16) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_QWORD *)a2 = v5;
    v3 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  v5[v3] = 40;
  ++*(_QWORD *)(a2 + 8);
  v7 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( v7[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v8 + 5 >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < v8 + 5 )
      v11 = v8 + 5;
    *(_QWORD *)(a2 + 16) = v11;
    v10 = realloc(*(void **)a2, v11);
    *(_QWORD *)a2 = v10;
    v8 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v10 = *(_BYTE **)a2;
  }
  v10[v8 + 4] = 40;
  *(_DWORD *)&v10[v8] = 541007913;
  *(_QWORD *)(a2 + 8) += 5LL;
  v12 = (_BYTE *)a1[3];
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v12 + 24LL))(v12, a2);
  if ( v12[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v12 + 32LL))(v12, a2);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(a2 + 16);
  if ( v13 + 5 >= v14 )
  {
    v16 = 2 * v14;
    if ( v16 < v13 + 5 )
      v16 = v13 + 5;
    *(_QWORD *)(a2 + 16) = v16;
    v15 = realloc(*(void **)a2, v16);
    *(_QWORD *)a2 = v15;
    v13 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v15 = *(_BYTE **)a2;
  }
  v15[v13 + 4] = 40;
  *(_DWORD *)&v15[v13] = 540680233;
  *(_QWORD *)(a2 + 8) += 5LL;
  v17 = (_BYTE *)a1[4];
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = *(_QWORD *)(a2 + 8);
  v19 = *(_QWORD *)(a2 + 16);
  if ( v18 + 1 >= v19 )
  {
    v21 = 2 * v19;
    if ( v21 < v18 + 1 )
      v21 = v18 + 1;
    *(_QWORD *)(a2 + 16) = v21;
    result = realloc(*(void **)a2, v21);
    *(_QWORD *)a2 = result;
    v18 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v18] = 41;
  ++*(_QWORD *)(a2 + 8);
  return result;
}
