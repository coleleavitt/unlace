/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41560
// Address: 0x00041560

//----- (00041560) --------------------------------------------------------
int __fastcall sub_41560(int a1, char *s)
{
  char **p_s1; // r10
  int v5; // r4
  pthread_mutex_t *v6; // r8
  _DWORD *v7; // r0
  int v8; // r9
  const char *v9; // r4
  size_t v10; // r11
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  int v13; // r3
  char *v14; // r0
  char *v15; // r0
  void *v17; // r0
  int v18; // r2
  char *v19; // r10
  _DWORD *v20; // r5
  int v21; // r4
  _DWORD *v22; // [sp+8h] [bp-1Ch] BYREF
  _DWORD *v23; // [sp+Ch] [bp-18h]
  char *s1; // [sp+10h] [bp-14h] BYREF
  size_t v25; // [sp+14h] [bp-10h]
  int v26; // [sp+18h] [bp-Ch]

  v5 = (int)strchr(s, 46);
  if ( !v5 )
    return v5;
  v6 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v7 = (_DWORD *)sub_3E348();
  v8 = sub_3F390(v7, s);
  if ( v8 == 0x7FFFFFFF )
  {
    v5 = 0;
    sub_7A128(v6);
    return v5;
  }
  v9 = (const char *)(v5 + 1);
  s1 = nullptr;
  v25 = 0;
  if ( !v9 )
    p_s1 = &s1;
  v26 = 0;
  if ( v9 )
  {
    p_s1 = &s1;
    v10 = strlen(v9);
    s1 = (char *)sub_77EB0((int)&s1, nullptr, v10 + 1, 1u);
    v25 = v10 + 1;
    memmove(s1, v9, v10);
    s1[v10] = 0;
  }
  v11 = sub_3DE34(*(_DWORD **)(a1 + 8), (_DWORD *)(a1 + 4), (int)p_s1);
  v12 = v11;
  if ( (_DWORD *)(a1 + 4) == v11 )
    goto LABEL_18;
  if ( v25 )
  {
    v13 = v11[5];
    v14 = s1;
    if ( v13 )
      goto LABEL_10;
LABEL_17:
    if ( strcmp(v14, (const char *)&dword_8DA5C) >= 0 )
      goto LABEL_11;
LABEL_18:
    v17 = sub_805CC(0x20u);
    v18 = (int)v12;
    v19 = s1;
    v20 = v17;
    v21 = v26;
    *((_DWORD *)v17 + 5) = v25;
    *((_DWORD *)v17 + 6) = v21;
    *((_DWORD *)v17 + 4) = v19;
    *((_DWORD *)v17 + 7) = 0;
    s1 = nullptr;
    v25 = 0;
    v26 = 0;
    sub_41418((int *)&v22, (_DWORD *)a1, v18, (const char **)v17 + 4);
    v12 = v22;
    if ( v23 )
    {
      v12 = sub_41130(a1, (int)v22, v23, v20);
    }
    else
    {
      if ( v19 )
      {
        v20[5] = v23;
        sub_77E08(v19);
      }
      sub_80648(v20);
    }
    goto LABEL_11;
  }
  v14 = (char *)&dword_8DA5C;
  if ( !v12[5] )
    goto LABEL_17;
LABEL_10:
  if ( strcmp(v14, (const char *)v12[4]) < 0 )
    goto LABEL_18;
LABEL_11:
  v15 = s1;
  v12[7] = v8;
  if ( v15 )
  {
    v25 = 0;
    sub_77E08(v15);
  }
  v5 = 1;
  sub_7A128(v6);
  return v5;
}
// 415F8: variable 'p_s1' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// D3A90: using guessed type int dword_D3A90;
