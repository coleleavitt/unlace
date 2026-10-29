/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61AB0
// Address: 0x00061AB0

//----- (00061AB0) --------------------------------------------------------
void *__fastcall sub_61AB0(int a1, int a2)
{
  _BYTE *v4; // r0
  size_t v5; // r9
  _BYTE *v6; // r0
  size_t v7; // r8
  unsigned int v8; // r0
  __int64 v9; // r2
  _BYTE *v10; // r0
  size_t v11; // r8
  const char *v12; // r8
  size_t v13; // r6
  int v14; // r4
  unsigned int v15; // r7
  char *v17; // r0
  int v18; // r2
  int v19; // r9
  unsigned int v20; // r10
  int v21; // r10
  unsigned int v22; // r11
  int v23; // r9
  unsigned int v24; // r10
  char *v25; // r0
  int v26; // r2
  char *v27; // r0
  int v28; // r2
  char *v29; // r0
  int v30; // r2
  _BYTE v31[5]; // [sp+8h] [bp-14h] BYREF
  _BYTE v32[5]; // [sp+Dh] [bp-Fh] BYREF
  _BYTE v33[2]; // [sp+12h] [bp-Ah] BYREF

  v4 = sub_75FB0(v31, (unsigned int)v32, *(_DWORD *)a2);
  v5 = v4 - v31;
  if ( v4 != v31 )
  {
    v21 = *(_DWORD *)(a1 + 4);
    v22 = v5 + v21;
    if ( __CFADD__(v5, v21) )
    {
      if ( (unsigned int)v21 > 0x7FFFFFFE )
      {
        if ( v21 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_44;
      }
      v22 = 0x7FFFFFFF;
    }
    else if ( v21 >= v22 )
    {
LABEL_44:
      memcpy((void *)(*(_DWORD *)a1 + v21), v31, v5);
      goto LABEL_2;
    }
    v27 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v22 )
    {
      v27 = (char *)sub_77EB0(a1, *(void **)a1, v22, 1u);
      v28 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v27;
    }
    else
    {
      v28 = *(_DWORD *)(a1 + 4);
    }
    memset(&v27[v28], 0, v22 - v28);
    *(_DWORD *)(a1 + 4) = v22;
    goto LABEL_44;
  }
LABEL_2:
  v6 = sub_75FB0(v31, (unsigned int)v32, *(unsigned __int8 *)(a2 + 4));
  v7 = v6 - v31;
  if ( v6 == v31 )
    goto LABEL_3;
  v19 = *(_DWORD *)(a1 + 4);
  v20 = v7 + v19;
  if ( __CFADD__(v7, v19) )
  {
    if ( (unsigned int)v19 > 0x7FFFFFFE )
    {
      if ( v19 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_46;
    }
    v20 = 0x7FFFFFFF;
    goto LABEL_59;
  }
  if ( v19 < v20 )
  {
LABEL_59:
    v29 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v20 )
    {
      v29 = (char *)sub_77EB0(a1, *(void **)a1, v20, 1u);
      v30 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v29;
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 4);
    }
    memset(&v29[v30], 0, v20 - v30);
    *(_DWORD *)(a1 + 4) = v20;
  }
LABEL_46:
  memcpy((void *)(*(_DWORD *)a1 + v19), v31, v7);
LABEL_3:
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 == -1 )
    v9 = 0;
  else
    v9 = v8 + 1LL;
  v10 = sub_760FC(v31, (unsigned int)v33, v9, HIDWORD(v9));
  v11 = v10 - v31;
  if ( v10 != v31 )
  {
    v23 = *(_DWORD *)(a1 + 4);
    v24 = v11 + v23;
    if ( __CFADD__(v11, v23) )
    {
      if ( (unsigned int)v23 > 0x7FFFFFFE )
      {
        if ( v23 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_42;
      }
      v24 = 0x7FFFFFFF;
    }
    else if ( v23 >= v24 )
    {
LABEL_42:
      memcpy((void *)(*(_DWORD *)a1 + v23), v31, v11);
      goto LABEL_6;
    }
    v25 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v24 )
    {
      v25 = (char *)sub_77EB0(a1, *(void **)a1, v24, 1u);
      v26 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v25;
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 4);
    }
    memset(&v25[v26], 0, v24 - v26);
    *(_DWORD *)(a1 + 4) = v24;
    goto LABEL_42;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 16) )
  {
    v12 = *(const char **)(a2 + 12);
    if ( v12 )
    {
LABEL_8:
      v13 = strlen(v12) + 1;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = (const char *)&dword_8DA5C;
    if ( &dword_8DA5C )
      goto LABEL_8;
  }
  v13 = 1;
  v12 = &byte_8DEAC;
LABEL_9:
  v14 = *(_DWORD *)(a1 + 4);
  v15 = v14 + v13;
  if ( !__CFADD__(v14, v13) )
  {
    if ( v14 >= v15 )
      return memcpy((void *)(*(_DWORD *)a1 + v14), v12, v13);
    goto LABEL_16;
  }
  if ( (unsigned int)v14 <= 0x7FFFFFFE )
  {
    v15 = 0x7FFFFFFF;
LABEL_16:
    v17 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v15 )
    {
      v17 = (char *)sub_77EB0(a1, *(void **)a1, v15, 1u);
      v18 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v17;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 4);
    }
    memset(&v17[v18], 0, v15 - v18);
    *(_DWORD *)(a1 + 4) = v15;
    return memcpy((void *)(*(_DWORD *)a1 + v14), v12, v13);
  }
  if ( v14 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  return memcpy((void *)(*(_DWORD *)a1 + v14), v12, v13);
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
