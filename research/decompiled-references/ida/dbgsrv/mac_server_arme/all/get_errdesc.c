/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x000000010006C2E4

//----- (000000010006C2E4) ----------------------------------------------------
__int64 __fastcall get_errdesc(const void *a1, int a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x19
  size_t v6; // x0
  size_t v7; // x22
  unsigned __int64 v8; // x23
  _QWORD *v9; // x1
  __int64 v10; // x8
  bool v11; // cf
  __int64 v12; // x8
  __int64 v13; // x22
  _QWORD *v14; // x1
  const char *v15; // x0
  const char *v16; // x20
  size_t v17; // x0
  size_t v18; // x21
  _QWORD *v19; // x1
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x23
  size_t v23; // x24
  unsigned __int64 v24; // x22

  off_1000A5688();
  v5 = v4;
  if ( a1 && (v6 = strlen((const char *)a1)) != 0 )
  {
    v7 = v6;
    v8 = v6 + 1;
    v9 = (_QWORD *)v5[25];
    if ( v5[27] < v6 + 1 )
    {
      v9 = qvector_reserve(v5 + 25, v9, v8, 1u);
      v5[25] = v9;
    }
    v5[26] = v8;
    memmove(v9, a1, v7);
    *(_BYTE *)(v5[25] + v7) = 0;
    v10 = v5[26];
  }
  else
  {
    v10 = 0;
    v5[26] = 0;
  }
  v11 = v10 != 0;
  v12 = v10 - 1;
  if ( v11 )
    v13 = v12;
  else
    v13 = 0;
  v14 = (_QWORD *)v5[25];
  if ( v5[27] < (unsigned __int64)(v13 + 3) )
  {
    v14 = qvector_reserve(v5 + 25, v14, v13 + 3, 1u);
    v5[25] = v14;
  }
  v5[26] = v13 + 3;
  *((_BYTE *)v14 + v13 + 2) = 0;
  *(_WORD *)(v5[25] + v13) = 8250;
  v15 = j__qstrerror(a2);
  if ( v15 )
  {
    v16 = v15;
    v17 = strlen(v15);
    v18 = v17;
    v19 = (_QWORD *)v5[25];
    v20 = v5[26];
    v11 = v20 != 0;
    v21 = v20 - 1;
    if ( v11 )
      v22 = v21;
    else
      v22 = 0;
    v23 = v22 + v17;
    v24 = v22 + v17 + 1;
    if ( v5[27] < v24 )
    {
      v19 = qvector_reserve(v5 + 25, v19, v24, 1u);
      v5[25] = v19;
    }
    v5[26] = v24;
    *((_BYTE *)v19 + v23) = 0;
    memmove((void *)(v5[25] + v22), v16, v18);
  }
  return v5[25];
}
// 10006C314: variable 'v4' is possibly undefined
// 1000A5688: using guessed type void (*off_1000A5688)(void);
