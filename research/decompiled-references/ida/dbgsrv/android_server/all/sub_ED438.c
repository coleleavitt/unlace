/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED438
// Address: 0x00000000000ED438

//----- (00000000000ED438) ----------------------------------------------------
_BYTE *__fastcall sub_ED438(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  _BYTE *v7; // x0
  _BYTE *v8; // x0
  size_t v9; // x1
  _BYTE *v10; // x0
  __int64 v11; // x8
  _QWORD *v12; // x20
  unsigned __int64 v13; // x10
  _BYTE *result; // x0
  _BYTE *v15; // x0
  size_t v16; // x1
  __int64 v17; // x8
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _BYTE *v20; // x0
  size_t v21; // x1

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = *(_BYTE **)(a1 + 16);
  if ( !v4[10] || v4[10] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 16);
    if ( v5 + 1 >= v6 )
    {
      v8 = *(_BYTE **)a2;
      if ( 2 * v6 >= v5 + 1 )
        v9 = 2 * v6;
      else
        v9 = v5 + 1;
      *(_QWORD *)(a2 + 16) = v9;
      v7 = realloc(v8, v9);
      v5 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v7;
    }
    else
    {
      v7 = *(_BYTE **)a2;
    }
    v7[v5] = 32;
    ++*(_QWORD *)(a2 + 8);
  }
  v10 = *(_BYTE **)(a1 + 16);
  if ( !v10[10] )
    goto LABEL_18;
  if ( v10[10] == 2 )
  {
    if ( ((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 8LL))(v10, a2) & 1) != 0 )
    {
LABEL_18:
      v12 = (_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v11 + 2 >= v13 )
      {
        v15 = *(_BYTE **)a2;
        if ( 2 * v13 >= v11 + 2 )
          v16 = 2 * v13;
        else
          v16 = v11 + 2;
        *(_QWORD *)(a2 + 16) = v16;
        result = realloc(v15, v16);
        v11 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_BYTE **)a2;
      }
      *(_WORD *)&result[v11] = 9768;
      v17 = 2;
      goto LABEL_32;
    }
    v10 = *(_BYTE **)(a1 + 16);
  }
  if ( !v10[11]
    || v10[11] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 16LL))(v10, a2) & 1) != 0 )
  {
    goto LABEL_18;
  }
  v12 = (_QWORD *)(a2 + 8);
  v18 = *(_QWORD *)(a2 + 8);
  v19 = *(_QWORD *)(a2 + 16);
  if ( v18 + 1 >= v19 )
  {
    v20 = *(_BYTE **)a2;
    if ( 2 * v19 >= v18 + 1 )
      v21 = 2 * v19;
    else
      v21 = v18 + 1;
    *(_QWORD *)(a2 + 16) = v21;
    result = realloc(v20, v21);
    v18 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = result;
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v18] = 38;
  v17 = 1;
LABEL_32:
  *v12 += v17;
  return result;
}
