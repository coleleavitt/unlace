/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A0C
// Address: 0x00063A0C

//----- (00063A0C) --------------------------------------------------------
void *__fastcall sub_63A0C(int a1, unsigned int *a2)
{
  _BYTE *v4; // r0
  size_t v5; // r9
  const char *v6; // r9
  size_t v7; // r6
  int v8; // r4
  unsigned int v9; // r7
  char *v11; // r0
  int v12; // r2
  int v13; // r10
  unsigned int v14; // r11
  char *v15; // r0
  int v16; // r2
  _BYTE v17[5]; // [sp+4h] [bp-10h] BYREF
  _BYTE v18[3]; // [sp+9h] [bp-Bh] BYREF

  v4 = sub_76118(v17, (unsigned int)v18, a2[1]);
  v5 = v4 - v17;
  if ( v4 != v17 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    v14 = v5 + v13;
    if ( __CFADD__(v5, v13) )
    {
      if ( (unsigned int)v13 > 0x7FFFFFFE )
      {
        if ( v13 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_25;
      }
      v14 = 0x7FFFFFFF;
    }
    else if ( v13 >= v14 )
    {
LABEL_25:
      memcpy((void *)(*(_DWORD *)a1 + v13), v17, v5);
      goto LABEL_2;
    }
    v15 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v14 )
    {
      v15 = (char *)sub_78018(a1, *(void **)a1, v14, 1u);
      v16 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v15;
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 4);
    }
    memset(&v15[v16], 0, v14 - v16);
    *(_DWORD *)(a1 + 4) = v14;
    goto LABEL_25;
  }
LABEL_2:
  if ( a2[3] )
  {
    v6 = (const char *)a2[2];
    if ( v6 )
    {
LABEL_4:
      v7 = strlen(v6) + 1;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = (const char *)&dword_8DB98;
    if ( &dword_8DB98 )
      goto LABEL_4;
  }
  v7 = 1;
  v6 = &byte_8DFE8;
LABEL_5:
  v8 = *(_DWORD *)(a1 + 4);
  v9 = v8 + v7;
  if ( !__CFADD__(v8, v7) )
  {
    if ( v8 >= v9 )
      return memcpy((void *)(*(_DWORD *)a1 + v8), v6, v7);
    goto LABEL_12;
  }
  if ( (unsigned int)v8 <= 0x7FFFFFFE )
  {
    v9 = 0x7FFFFFFF;
LABEL_12:
    v11 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v9 )
    {
      v11 = (char *)sub_78018(a1, *(void **)a1, v9, 1u);
      v12 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v11;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 4);
    }
    memset(&v11[v12], 0, v9 - v12);
    *(_DWORD *)(a1 + 4) = v9;
    return memcpy((void *)(*(_DWORD *)a1 + v8), v6, v7);
  }
  if ( v8 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  return memcpy((void *)(*(_DWORD *)a1 + v8), v6, v7);
}
// 8DB98: using guessed type int dword_8DB98;
// 8DFE8: using guessed type char byte_8DFE8;
