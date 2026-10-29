/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61788
// Address: 0x00061788

//----- (00061788) --------------------------------------------------------
_BYTE *__fastcall sub_61788(int a1, int a2)
{
  const char *v4; // r10
  int v5; // r4
  size_t v6; // r8
  unsigned int v7; // r9
  unsigned int v8; // r0
  __int64 v9; // r2
  _BYTE *v10; // r0
  size_t v11; // r9
  unsigned int v12; // r0
  __int64 v13; // r2
  _BYTE *v14; // r0
  size_t v15; // r9
  unsigned int v16; // r0
  __int64 v17; // r2
  _BYTE *result; // r0
  size_t v19; // r6
  char *v20; // r0
  int v21; // r2
  int v22; // r10
  unsigned int v23; // r11
  int v24; // r8
  unsigned int v25; // r9
  int v26; // r10
  unsigned int v27; // r11
  char *v28; // r0
  int v29; // r2
  char *v30; // r0
  int v31; // r2
  char *v32; // r0
  int v33; // r2
  _BYTE v34[10]; // [sp+0h] [bp-14h] BYREF
  _BYTE v35[2]; // [sp+Ah] [bp-Ah] BYREF

  if ( *(_DWORD *)(a2 + 4) )
  {
    v4 = *(const char **)a2;
    if ( *(_DWORD *)a2 )
      goto LABEL_3;
LABEL_20:
    v5 = *(_DWORD *)(a1 + 4);
    v6 = 1;
    v7 = v5 + 1;
    v4 = &byte_8DEAC;
    if ( v5 != -1 )
      goto LABEL_21;
    goto LABEL_5;
  }
  v4 = (const char *)&dword_8DA5C;
  if ( !&dword_8DA5C )
    goto LABEL_20;
LABEL_3:
  v5 = *(_DWORD *)(a1 + 4);
  v6 = strlen(v4) + 1;
  v7 = v5 + v6;
  if ( !__CFADD__(v5, v6) )
  {
LABEL_21:
    if ( v5 >= v7 )
      goto LABEL_8;
    goto LABEL_22;
  }
LABEL_5:
  if ( (unsigned int)v5 <= 0x7FFFFFFE )
  {
    v7 = 0x7FFFFFFF;
LABEL_22:
    v20 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v7 )
    {
      v20 = (char *)sub_77EB0(a1, *(void **)a1, v7, 1u);
      v21 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v20;
    }
    else
    {
      v21 = v5;
    }
    memset(&v20[v21], 0, v7 - v21);
    *(_DWORD *)(a1 + 4) = v7;
    goto LABEL_8;
  }
  if ( v5 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_8:
  memcpy((void *)(*(_DWORD *)a1 + v5), v4, v6);
  v8 = *(_DWORD *)(a2 + 12);
  if ( v8 == -1 )
    v9 = 0;
  else
    v9 = v8 + 1LL;
  v10 = sub_760FC(v34, (unsigned int)v35, v9, HIDWORD(v9));
  v11 = v10 - v34;
  if ( v10 != v34 )
  {
    v22 = *(_DWORD *)(a1 + 4);
    v23 = v11 + v22;
    if ( __CFADD__(v11, v22) )
    {
      if ( (unsigned int)v22 > 0x7FFFFFFE )
      {
        if ( v22 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_51;
      }
      v23 = 0x7FFFFFFF;
    }
    else if ( v22 >= v23 )
    {
LABEL_51:
      memcpy((void *)(*(_DWORD *)a1 + v22), v34, v11);
      goto LABEL_11;
    }
    v32 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v23 )
    {
      v32 = (char *)sub_77EB0(a1, *(void **)a1, v23, 1u);
      v33 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v32;
    }
    else
    {
      v33 = *(_DWORD *)(a1 + 4);
    }
    memset(&v32[v33], 0, v23 - v33);
    *(_DWORD *)(a1 + 4) = v23;
    goto LABEL_51;
  }
LABEL_11:
  v12 = *(_DWORD *)(a2 + 16);
  if ( v12 == -1 )
    v13 = 0;
  else
    v13 = v12 + 1LL;
  v14 = sub_760FC(v34, (unsigned int)v35, v13, HIDWORD(v13));
  v15 = v14 - v34;
  if ( v14 != v34 )
  {
    v26 = *(_DWORD *)(a1 + 4);
    v27 = v15 + v26;
    if ( __CFADD__(v15, v26) )
    {
      if ( (unsigned int)v26 > 0x7FFFFFFE )
      {
        if ( v26 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_47;
      }
      v27 = 0x7FFFFFFF;
    }
    else if ( v26 >= v27 )
    {
LABEL_47:
      memcpy((void *)(*(_DWORD *)a1 + v26), v34, v15);
      goto LABEL_14;
    }
    v28 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v27 )
    {
      v28 = (char *)sub_77EB0(a1, *(void **)a1, v27, 1u);
      v29 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v28;
    }
    else
    {
      v29 = *(_DWORD *)(a1 + 4);
    }
    memset(&v28[v29], 0, v27 - v29);
    *(_DWORD *)(a1 + 4) = v27;
    goto LABEL_47;
  }
LABEL_14:
  v16 = *(_DWORD *)(a2 + 20);
  if ( v16 == -1 )
    v17 = 0;
  else
    v17 = v16 + 1LL;
  result = sub_760FC(v34, (unsigned int)v35, v17, HIDWORD(v17));
  v19 = result - v34;
  if ( result != v34 )
  {
    v24 = *(_DWORD *)(a1 + 4);
    v25 = v19 + v24;
    if ( __CFADD__(v19, v24) )
    {
      if ( (unsigned int)v24 > 0x7FFFFFFE )
      {
        if ( v24 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        return memcpy((void *)(*(_DWORD *)a1 + v24), v34, v19);
      }
      v25 = 0x7FFFFFFF;
    }
    else if ( v24 >= v25 )
    {
      return memcpy((void *)(*(_DWORD *)a1 + v24), v34, v19);
    }
    v30 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v25 )
    {
      v30 = (char *)sub_77EB0(a1, *(void **)a1, v25, 1u);
      v31 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v30;
    }
    else
    {
      v31 = *(_DWORD *)(a1 + 4);
    }
    memset(&v30[v31], 0, v25 - v31);
    *(_DWORD *)(a1 + 4) = v25;
    return memcpy((void *)(*(_DWORD *)a1 + v24), v34, v19);
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
