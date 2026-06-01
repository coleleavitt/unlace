/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41418
// Address: 0x00041418

//----- (00041418) --------------------------------------------------------
int *__fastcall sub_41418(int *a1, _DWORD *a2, int a3, const char **a4)
{
  _DWORD *v5; // r4
  const char *v8; // r10
  const char *v9; // r11
  int v11; // r0
  int v12; // r11
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r1
  int v16; // r0
  int v17; // r11
  const char *v18; // r1

  v5 = (_DWORD *)a3;
  if ( (_DWORD *)a3 == a2 + 1 )
  {
    if ( !a2[5] )
      goto LABEL_22;
    v5 = (_DWORD *)a2[4];
    if ( v5[5] )
    {
      v14 = (const char *)v5[4];
      if ( a4[1] )
      {
LABEL_19:
        v15 = *a4;
        goto LABEL_20;
      }
    }
    else
    {
      v14 = (const char *)&dword_8DA5C;
      if ( a4[1] )
        goto LABEL_19;
    }
    v15 = (const char *)&dword_8DA5C;
LABEL_20:
    if ( strcmp(v14, v15) < 0 )
      goto LABEL_21;
LABEL_22:
    sub_4107C(a1, (int)a2, (int)a4);
    return a1;
  }
  if ( a4[1] )
  {
    v8 = *a4;
    if ( *(_DWORD *)(a3 + 20) )
      goto LABEL_4;
  }
  else
  {
    v8 = (const char *)&dword_8DA5C;
    if ( *(_DWORD *)(a3 + 20) )
    {
LABEL_4:
      v9 = *(const char **)(a3 + 16);
      if ( strcmp(v8, v9) >= 0 )
        goto LABEL_5;
LABEL_10:
      if ( (_DWORD *)a2[3] != v5 )
      {
        v11 = sub_812CC(v5);
        v12 = v11;
        if ( *(_DWORD *)(v11 + 20) )
          v13 = *(const char **)(v11 + 16);
        else
          v13 = (const char *)&dword_8DA5C;
        if ( strcmp(v13, v8) >= 0 )
          goto LABEL_22;
        if ( !*(_DWORD *)(v12 + 12) )
        {
          *a1 = 0;
          a1[1] = v12;
          return a1;
        }
      }
      *a1 = (int)v5;
      a1[1] = (int)v5;
      return a1;
    }
  }
  v9 = (const char *)&dword_8DA5C;
  if ( strcmp(v8, (const char *)&dword_8DA5C) < 0 )
    goto LABEL_10;
LABEL_5:
  if ( strcmp(v9, v8) >= 0 )
  {
    *a1 = (int)v5;
    a1[1] = 0;
    return a1;
  }
  if ( (_DWORD *)a2[4] == v5 )
  {
LABEL_21:
    *a1 = 0;
    a1[1] = (int)v5;
    return a1;
  }
  v16 = sub_81290((int)v5);
  v17 = v16;
  if ( *(_DWORD *)(v16 + 20) )
    v18 = *(const char **)(v16 + 16);
  else
    v18 = (const char *)&dword_8DA5C;
  if ( strcmp(v8, v18) >= 0 )
    goto LABEL_22;
  if ( v5[3] )
  {
    *a1 = v17;
    a1[1] = v17;
  }
  else
  {
    *a1 = 0;
    a1[1] = (int)v5;
  }
  return a1;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
