/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60DA4
// Address: 0x00060DA4

//----- (00060DA4) --------------------------------------------------------
void *__fastcall sub_60DA4(int a1, int a2)
{
  unsigned int v4; // r0
  __int64 v5; // r2
  _BYTE *v6; // r0
  size_t v7; // r9
  int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // off
  unsigned int v11; // r3
  _BYTE *v12; // r0
  size_t v13; // r9
  int v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // off
  unsigned int v17; // r3
  _BYTE *v18; // r0
  size_t v19; // r7
  _BYTE *v20; // r0
  size_t v21; // r7
  const char *v22; // r10
  int v23; // r4
  size_t v24; // r7
  unsigned int v25; // r9
  const char *v26; // r8
  size_t v27; // r6
  int v28; // r4
  unsigned int v29; // r7
  char *v31; // r0
  int v32; // r2
  char *v33; // r0
  int v34; // r2
  int v35; // r10
  unsigned int v36; // r11
  int v37; // r9
  unsigned int v38; // r10
  int v39; // r9
  unsigned int v40; // r10
  int v41; // r10
  unsigned int v42; // r11
  char *v43; // r0
  int v44; // r2
  char *v45; // r0
  int v46; // r2
  char *v47; // r0
  int v48; // r2
  char *v49; // r0
  int v50; // r2
  _BYTE v51[5]; // [sp+8h] [bp-14h] BYREF
  _BYTE v52[5]; // [sp+Dh] [bp-Fh] BYREF
  _BYTE v53[2]; // [sp+12h] [bp-Ah] BYREF

  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 == -1 )
    v5 = 0;
  else
    v5 = v4 + 1LL;
  v6 = sub_760FC(v51, (unsigned int)v53, v5, HIDWORD(v5));
  v7 = v6 - v51;
  if ( v6 == v51 )
    goto LABEL_4;
  v35 = *(_DWORD *)(a1 + 4);
  v36 = v7 + v35;
  if ( __CFADD__(v7, v35) )
  {
    if ( (unsigned int)v35 > 0x7FFFFFFE )
    {
      if ( v35 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_46;
    }
    v36 = 0x7FFFFFFF;
    goto LABEL_78;
  }
  if ( v35 < v36 )
  {
LABEL_78:
    v45 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v36 )
    {
      v45 = (char *)sub_77EB0(a1, *(void **)a1, v36, 1u);
      v46 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v45;
    }
    else
    {
      v46 = *(_DWORD *)(a1 + 4);
    }
    memset(&v45[v46], 0, v36 - v46);
    *(_DWORD *)(a1 + 4) = v36;
  }
LABEL_46:
  memcpy((void *)(*(_DWORD *)a1 + v35), v51, v7);
LABEL_4:
  v8 = *(_DWORD *)a2 - 16 * *(_DWORD *)(a2 + 32);
  if ( v8 == -1 )
  {
    v9 = 0;
    v11 = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(unsigned int)v8 + 1) >> 32;
    v9 = v8 + 1;
    v11 = v10;
  }
  v12 = sub_760FC(v51, (unsigned int)v53, v9, v11);
  v13 = v12 - v51;
  if ( v12 != v51 )
  {
    v41 = *(_DWORD *)(a1 + 4);
    v42 = v13 + v41;
    if ( __CFADD__(v13, v41) )
    {
      if ( (unsigned int)v41 > 0x7FFFFFFE )
      {
        if ( v41 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_69;
      }
      v42 = 0x7FFFFFFF;
    }
    else if ( v41 >= v42 )
    {
LABEL_69:
      memcpy((void *)(*(_DWORD *)a1 + v41), v51, v13);
      goto LABEL_7;
    }
    v49 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v42 )
    {
      v49 = (char *)sub_77EB0(a1, *(void **)a1, v42, 1u);
      v50 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v49;
    }
    else
    {
      v50 = *(_DWORD *)(a1 + 4);
    }
    memset(&v49[v50], 0, v42 - v50);
    *(_DWORD *)(a1 + 4) = v42;
    goto LABEL_69;
  }
LABEL_7:
  v14 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  if ( v14 == -1 )
  {
    v15 = 0;
    v17 = 0;
  }
  else
  {
    v16 = ((unsigned __int64)(unsigned int)v14 + 1) >> 32;
    v15 = v14 + 1;
    v17 = v16;
  }
  v18 = sub_760FC(v51, (unsigned int)v53, v15, v17);
  v19 = v18 - v51;
  if ( v18 != v51 )
  {
    v39 = *(_DWORD *)(a1 + 4);
    v40 = v19 + v39;
    if ( __CFADD__(v19, v39) )
    {
      if ( (unsigned int)v39 > 0x7FFFFFFE )
      {
        if ( v39 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_71;
      }
      v40 = 0x7FFFFFFF;
    }
    else if ( v39 >= v40 )
    {
LABEL_71:
      memcpy((void *)(*(_DWORD *)a1 + v39), v51, v19);
      goto LABEL_10;
    }
    v47 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v40 )
    {
      v47 = (char *)sub_77EB0(a1, *(void **)a1, v40, 1u);
      v48 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v47;
    }
    else
    {
      v48 = *(_DWORD *)(a1 + 4);
    }
    memset(&v47[v48], 0, v40 - v48);
    *(_DWORD *)(a1 + 4) = v40;
    goto LABEL_71;
  }
LABEL_10:
  v20 = sub_75FB0(v51, (unsigned int)v52, *(unsigned __int8 *)(a2 + 37) | (16 * *(unsigned __int8 *)(a2 + 36)));
  v21 = v20 - v51;
  if ( v20 == v51 )
    goto LABEL_11;
  v37 = *(_DWORD *)(a1 + 4);
  v38 = v21 + v37;
  if ( __CFADD__(v21, v37) )
  {
    if ( (unsigned int)v37 > 0x7FFFFFFE )
    {
      if ( v37 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_52;
    }
    v38 = 0x7FFFFFFF;
    goto LABEL_73;
  }
  if ( v37 < v38 )
  {
LABEL_73:
    v43 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v38 )
    {
      v43 = (char *)sub_77EB0(a1, *(void **)a1, v38, 1u);
      v44 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v43;
    }
    else
    {
      v44 = *(_DWORD *)(a1 + 4);
    }
    memset(&v43[v44], 0, v38 - v44);
    *(_DWORD *)(a1 + 4) = v38;
  }
LABEL_52:
  memcpy((void *)(*(_DWORD *)a1 + v37), v51, v21);
LABEL_11:
  if ( *(_DWORD *)(a2 + 12) )
  {
    v22 = *(const char **)(a2 + 8);
    if ( v22 )
      goto LABEL_13;
LABEL_28:
    v23 = *(_DWORD *)(a1 + 4);
    v24 = 1;
    v25 = v23 + 1;
    v22 = &byte_8DEAC;
    if ( v23 != -1 )
      goto LABEL_29;
    goto LABEL_15;
  }
  v22 = (const char *)&dword_8DA5C;
  if ( !&dword_8DA5C )
    goto LABEL_28;
LABEL_13:
  v23 = *(_DWORD *)(a1 + 4);
  v24 = strlen(v22) + 1;
  v25 = v23 + v24;
  if ( !__CFADD__(v23, v24) )
  {
LABEL_29:
    if ( v23 >= v25 )
      goto LABEL_18;
    goto LABEL_30;
  }
LABEL_15:
  if ( (unsigned int)v23 <= 0x7FFFFFFE )
  {
    v25 = 0x7FFFFFFF;
LABEL_30:
    v31 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v25 )
    {
      v31 = (char *)sub_77EB0(a1, *(void **)a1, v25, 1u);
      v32 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v31;
    }
    else
    {
      v32 = v23;
    }
    memset(&v31[v32], 0, v25 - v32);
    *(_DWORD *)(a1 + 4) = v25;
    goto LABEL_18;
  }
  if ( v23 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_18:
  memcpy((void *)(*(_DWORD *)a1 + v23), v22, v24);
  if ( *(_DWORD *)(a2 + 24) )
  {
    v26 = *(const char **)(a2 + 20);
    if ( v26 )
    {
LABEL_20:
      v27 = strlen(v26) + 1;
      goto LABEL_21;
    }
  }
  else
  {
    v26 = (const char *)&dword_8DA5C;
    if ( &dword_8DA5C )
      goto LABEL_20;
  }
  v27 = 1;
  v26 = &byte_8DEAC;
LABEL_21:
  v28 = *(_DWORD *)(a1 + 4);
  v29 = v28 + v27;
  if ( !__CFADD__(v28, v27) )
  {
    if ( v28 >= v29 )
      return memcpy((void *)(*(_DWORD *)a1 + v28), v26, v27);
    goto LABEL_35;
  }
  if ( (unsigned int)v28 <= 0x7FFFFFFE )
  {
    v29 = 0x7FFFFFFF;
LABEL_35:
    v33 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v29 )
    {
      v33 = (char *)sub_77EB0(a1, *(void **)a1, v29, 1u);
      v34 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v33;
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 4);
    }
    memset(&v33[v34], 0, v29 - v34);
    *(_DWORD *)(a1 + 4) = v29;
    return memcpy((void *)(*(_DWORD *)a1 + v28), v26, v27);
  }
  if ( v28 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  return memcpy((void *)(*(_DWORD *)a1 + v28), v26, v27);
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
