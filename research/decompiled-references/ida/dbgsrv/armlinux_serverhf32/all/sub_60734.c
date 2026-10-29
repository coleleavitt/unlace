/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60734
// Address: 0x00060734

//----- (00060734) --------------------------------------------------------
_DWORD *__fastcall sub_60734(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // r4
  int v7; // r7
  int v8; // r5
  const char *v9; // r0
  const char *v10; // r1
  _DWORD *v11; // r3
  int v12; // r2
  _DWORD *v13; // r10
  const char *v14; // r0
  const char *v15; // r1
  int v16; // r0
  bool v17; // nf
  _DWORD *result; // r0

  v4 = *(_DWORD **)(a2 + 8);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( !v7 )
      goto LABEL_10;
LABEL_3:
    v8 = v4[5];
    v9 = *(const char **)a3;
    if ( v8 )
    {
LABEL_4:
      v10 = (const char *)v4[4];
      goto LABEL_5;
    }
    while ( 1 )
    {
      v10 = (const char *)&dword_8DA5C;
LABEL_5:
      if ( strcmp(v9, v10) >= 0 )
      {
        v11 = (_DWORD *)v4[3];
        v12 = 0;
      }
      else
      {
        v11 = (_DWORD *)v4[2];
        v12 = 1;
      }
      if ( !v11 )
        break;
      v4 = v11;
      if ( v7 )
        goto LABEL_3;
LABEL_10:
      v8 = v4[5];
      v9 = (const char *)&dword_8DA5C;
      if ( v8 )
        goto LABEL_4;
    }
    if ( !v12 )
    {
      v13 = v4;
      if ( !v8 )
        goto LABEL_14;
LABEL_24:
      v14 = (const char *)v4[4];
      if ( v7 )
        goto LABEL_15;
LABEL_25:
      v15 = (const char *)&dword_8DA5C;
      goto LABEL_16;
    }
  }
  else
  {
    v4 = (_DWORD *)(a2 + 4);
  }
  if ( *(_DWORD **)(a2 + 12) == v4 )
  {
    *a1 = 0;
    a1[1] = v4;
    return a1;
  }
  v13 = v4;
  v4 = (_DWORD *)sub_812CC(v4);
  v7 = *(_DWORD *)(a3 + 4);
  if ( v4[5] )
    goto LABEL_24;
LABEL_14:
  v14 = (const char *)&dword_8DA5C;
  if ( !v7 )
    goto LABEL_25;
LABEL_15:
  v15 = *(const char **)a3;
LABEL_16:
  v16 = strcmp(v14, v15);
  v17 = v16 < 0;
  if ( v16 < 0 )
  {
    *a1 = 0;
    a1[1] = v13;
  }
  result = a1;
  if ( !v17 )
  {
    *a1 = v4;
    a1[1] = 0;
  }
  return result;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
