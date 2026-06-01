/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61268
// Address: 0x00061268

//----- (00061268) --------------------------------------------------------
void *__fastcall sub_61268(int a1, unsigned int *a2)
{
  __int64 v4; // r2
  _BYTE *v5; // r0
  size_t v6; // r9
  unsigned int v7; // r0
  __int64 v8; // r2
  _BYTE *v9; // r0
  size_t v10; // r8
  const char *v11; // r8
  size_t v12; // r6
  int v13; // r4
  unsigned int v14; // r7
  char *v16; // r0
  int v17; // r2
  int v18; // r10
  unsigned int v19; // r11
  int v20; // r9
  unsigned int v21; // r10
  char *v22; // r0
  int v23; // r2
  char *v24; // r0
  int v25; // r2
  _BYTE v26[10]; // [sp+8h] [bp-14h] BYREF
  _BYTE v27[2]; // [sp+12h] [bp-Ah] BYREF

  if ( *a2 == -1 )
    v4 = 0;
  else
    v4 = *a2 + 1LL;
  v5 = sub_760FC(v26, (unsigned int)v27, v4, HIDWORD(v4));
  v6 = v5 - v26;
  if ( v5 == v26 )
    goto LABEL_4;
  v18 = *(_DWORD *)(a1 + 4);
  v19 = v6 + v18;
  if ( __CFADD__(v6, v18) )
  {
    if ( (unsigned int)v18 > 0x7FFFFFFE )
    {
      if ( v18 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_40;
    }
    v19 = 0x7FFFFFFF;
    goto LABEL_48;
  }
  if ( v18 < v19 )
  {
LABEL_48:
    v24 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v19 )
    {
      v24 = (char *)sub_77EB0(a1, *(void **)a1, v19, 1u);
      v25 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v24;
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 4);
    }
    memset(&v24[v25], 0, v19 - v25);
    *(_DWORD *)(a1 + 4) = v19;
  }
LABEL_40:
  memcpy((void *)(*(_DWORD *)a1 + v18), v26, v6);
LABEL_4:
  v7 = a2[1];
  if ( v7 == -1 )
    v8 = 0;
  else
    v8 = v7 + 1LL;
  v9 = sub_760FC(v26, (unsigned int)v27, v8, HIDWORD(v8));
  v10 = v9 - v26;
  if ( v9 != v26 )
  {
    v20 = *(_DWORD *)(a1 + 4);
    v21 = v10 + v20;
    if ( __CFADD__(v10, v20) )
    {
      if ( (unsigned int)v20 > 0x7FFFFFFE )
      {
        if ( v20 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_38;
      }
      v21 = 0x7FFFFFFF;
    }
    else if ( v20 >= v21 )
    {
LABEL_38:
      memcpy((void *)(*(_DWORD *)a1 + v20), v26, v10);
      goto LABEL_7;
    }
    v22 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v21 )
    {
      v22 = (char *)sub_77EB0(a1, *(void **)a1, v21, 1u);
      v23 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v22;
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 4);
    }
    memset(&v22[v23], 0, v21 - v23);
    *(_DWORD *)(a1 + 4) = v21;
    goto LABEL_38;
  }
LABEL_7:
  if ( a2[3] )
  {
    v11 = (const char *)a2[2];
    if ( v11 )
    {
LABEL_9:
      v12 = strlen(v11) + 1;
      goto LABEL_10;
    }
  }
  else
  {
    v11 = (const char *)&dword_8DA5C;
    if ( &dword_8DA5C )
      goto LABEL_9;
  }
  v12 = 1;
  v11 = &byte_8DEAC;
LABEL_10:
  v13 = *(_DWORD *)(a1 + 4);
  v14 = v13 + v12;
  if ( !__CFADD__(v13, v12) )
  {
    if ( v13 >= v14 )
      return memcpy((void *)(*(_DWORD *)a1 + v13), v11, v12);
    goto LABEL_17;
  }
  if ( (unsigned int)v13 <= 0x7FFFFFFE )
  {
    v14 = 0x7FFFFFFF;
LABEL_17:
    v16 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v14 )
    {
      v16 = (char *)sub_77EB0(a1, *(void **)a1, v14, 1u);
      v17 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v16;
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 4);
    }
    memset(&v16[v17], 0, v14 - v17);
    *(_DWORD *)(a1 + 4) = v14;
    return memcpy((void *)(*(_DWORD *)a1 + v13), v11, v12);
  }
  if ( v13 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  return memcpy((void *)(*(_DWORD *)a1 + v13), v11, v12);
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
