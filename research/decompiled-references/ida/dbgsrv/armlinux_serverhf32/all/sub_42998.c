/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42998
// Address: 0x00042998

//----- (00042998) --------------------------------------------------------
int __fastcall sub_42998(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r4
  int v7; // r7
  int v8; // r11
  const char *v9; // r0
  const char *v10; // r1
  _DWORD *v11; // r3
  int v12; // r2
  _DWORD *v13; // r10
  const char *v14; // r0
  unsigned int v16; // r4
  _DWORD *v17; // r6
  const char *v18; // r7
  _DWORD *v19; // r0
  int v20; // r4
  int v21; // r3
  const char *v22; // r0
  const char *v23; // r1
  _DWORD *v24; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)a2[2];
  v24 = a2 + 1;
  if ( v3 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( !v7 )
      goto LABEL_10;
LABEL_3:
    v8 = v3[5];
    v9 = *(const char **)a3;
    if ( v8 )
    {
LABEL_4:
      v10 = (const char *)v3[4];
      goto LABEL_5;
    }
    while ( 1 )
    {
      v10 = (const char *)&dword_8DA5C;
LABEL_5:
      if ( strcmp(v9, v10) >= 0 )
      {
        v11 = (_DWORD *)v3[3];
        v12 = 0;
      }
      else
      {
        v11 = (_DWORD *)v3[2];
        v12 = 1;
      }
      if ( !v11 )
        break;
      v3 = v11;
      if ( v7 )
        goto LABEL_3;
LABEL_10:
      v8 = v3[5];
      v9 = (const char *)&dword_8DA5C;
      if ( v8 )
        goto LABEL_4;
    }
    v13 = v3;
    if ( !v12 )
    {
      if ( !v8 )
        goto LABEL_14;
      goto LABEL_20;
    }
  }
  else
  {
    v3 = a2 + 1;
  }
  v13 = (_DWORD *)a2[3];
  if ( v13 == v3 )
    goto LABEL_22;
  v13 = v3;
  v3 = (_DWORD *)sub_812CC(v3);
  v7 = *(_DWORD *)(a3 + 4);
  if ( !v3[5] )
  {
LABEL_14:
    v14 = (const char *)&dword_8DA5C;
    if ( v7 )
      goto LABEL_15;
LABEL_21:
    if ( strcmp(v14, (const char *)&dword_8DA5C) >= 0 )
      goto LABEL_16;
    goto LABEL_22;
  }
LABEL_20:
  v14 = (const char *)v3[4];
  if ( !v7 )
    goto LABEL_21;
LABEL_15:
  if ( strcmp(v14, *(const char **)a3) >= 0 )
  {
LABEL_16:
    *(_DWORD *)a1 = v3;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_22:
  if ( !v13 )
  {
    v3 = nullptr;
    goto LABEL_16;
  }
  if ( v24 == v13 )
  {
    v16 = 1;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 4) )
      v22 = *(const char **)a3;
    else
      v22 = (const char *)&dword_8DA5C;
    if ( v13[5] )
      v23 = (const char *)v13[4];
    else
      v23 = (const char *)&dword_8DA5C;
    v16 = (unsigned int)strcmp(v22, v23) >> 31;
  }
  v17 = sub_805CC(0x1Cu);
  v18 = *(const char **)a3;
  v19 = (_DWORD *)v16;
  v20 = *(_DWORD *)(a3 + 8);
  v17[5] = *(_DWORD *)(a3 + 4);
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v17[4] = v18;
  v17[6] = v20;
  sub_8132C(v19, v17, v13, v24);
  v21 = a2[5];
  *(_DWORD *)a1 = v17;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v21 + 1;
  return a1;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
