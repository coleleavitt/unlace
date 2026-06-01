/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E2A60
// Address: 0x00000000000E2A60

//----- (00000000000E2A60) ----------------------------------------------------
__int64 __fastcall sub_E2A60(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  size_t v5; // rcx
  _BYTE *v6; // rax
  size_t v7; // rsi
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  _BYTE *v11; // rax
  size_t v12; // rsi
  _BYTE *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  size_t v16; // rcx
  _BYTE *v17; // rax
  size_t v18; // rsi
  _BYTE *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  _BYTE *v22; // rax
  size_t v23; // rsi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v3 + 1;
  if ( v3 + 1 >= v4 )
  {
    v7 = 2 * v4;
    if ( v7 < v5 )
      v7 = v3 + 1;
    *(_QWORD *)(a2 + 16) = v7;
    v6 = realloc(*(void **)a2, v7);
    *(_QWORD *)a2 = v6;
    v3 = *(_QWORD *)(a2 + 8);
    v5 = v3 + 1;
  }
  else
  {
    v6 = *(_BYTE **)a2;
  }
  *(_QWORD *)(a2 + 8) = v5;
  v6[v3] = 91;
  v8 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2);
  if ( v8[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  if ( v9 + 5 >= v10 )
  {
    v12 = 2 * v10;
    if ( v12 < v9 + 5 )
      v12 = v9 + 5;
    *(_QWORD *)(a2 + 16) = v12;
    v11 = realloc(*(void **)a2, v12);
    *(_QWORD *)a2 = v11;
    v9 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v11 = *(_BYTE **)a2;
  }
  v11[v9 + 4] = 32;
  *(_DWORD *)&v11[v9] = 774778400;
  *(_QWORD *)(a2 + 8) += 5LL;
  v13 = (_BYTE *)a1[3];
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v13 + 24LL))(v13, a2);
  if ( v13[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v13 + 32LL))(v13, a2);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  v16 = v14 + 1;
  if ( v14 + 1 >= v15 )
  {
    v18 = 2 * v15;
    if ( v18 < v16 )
      v18 = v14 + 1;
    *(_QWORD *)(a2 + 16) = v18;
    v17 = realloc(*(void **)a2, v18);
    *(_QWORD *)a2 = v17;
    v14 = *(_QWORD *)(a2 + 8);
    v16 = v14 + 1;
  }
  else
  {
    v17 = *(_BYTE **)a2;
  }
  *(_QWORD *)(a2 + 8) = v16;
  v17[v14] = 93;
  v19 = (_BYTE *)a1[4];
  if ( (unsigned __int8)(v19[8] - 43) >= 2u )
  {
    v20 = *(_QWORD *)(a2 + 8);
    v21 = *(_QWORD *)(a2 + 16);
    if ( v20 + 3 >= v21 )
    {
      v23 = 2 * v21;
      if ( v23 < v20 + 3 )
        v23 = v20 + 3;
      *(_QWORD *)(a2 + 16) = v23;
      v22 = realloc(*(void **)a2, v23);
      *(_QWORD *)a2 = v22;
      v20 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v22 = *(_BYTE **)a2;
    }
    v22[v20 + 2] = 32;
    *(_WORD *)&v22[v20] = 15648;
    *(_QWORD *)(a2 + 8) += 3LL;
    v19 = (_BYTE *)a1[4];
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v19 + 24LL))(v19, a2);
  if ( v19[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v19 + 32LL))(v19, a2);
  return result;
}
