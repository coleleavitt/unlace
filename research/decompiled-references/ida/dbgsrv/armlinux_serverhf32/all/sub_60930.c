/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60930
// Address: 0x00060930

//----- (00060930) --------------------------------------------------------
void __fastcall sub_60930(int a1, int a2, const char *a3)
{
  _DWORD *v5; // r4
  char *v6; // r0
  const char *v7; // r1
  size_t v8; // r0
  size_t v9; // r5
  _DWORD *v10; // r0
  size_t v11; // r10
  const char **v12; // r11
  _DWORD *v13; // r2
  int v14; // r10
  int v15; // r0
  unsigned int v16; // r7
  void *v17; // r0
  void *v18; // r0
  void *v19; // r0
  void *v20; // r0
  const char *v21; // r0
  const char *v22; // r1
  unsigned int v23; // r0
  int v24; // [sp+4h] [bp-20h]
  _DWORD *v25; // [sp+4h] [bp-20h]
  int v26; // [sp+8h] [bp-1Ch] BYREF
  int v27; // [sp+Ch] [bp-18h]
  char *s1; // [sp+10h] [bp-14h] BYREF
  size_t v29; // [sp+14h] [bp-10h]
  int v30; // [sp+18h] [bp-Ch]

  if ( a3 )
  {
    s1 = nullptr;
    v29 = 0;
    v30 = 0;
    sub_5D780(a2, (int)&s1);
    v5 = sub_57AF0(*(_DWORD **)(a1 + 8), (_DWORD *)(a1 + 4), (int)&s1);
    if ( (_DWORD *)(a1 + 4) == v5
      || (!v29 ? (v6 = (char *)&dword_8DA5C) : (v6 = s1),
          !v5[5] ? (v7 = (const char *)&dword_8DA5C) : (v7 = (const char *)v5[4]),
          strcmp(v6, v7) < 0) )
    {
      v24 = (int)v5;
      v10 = sub_805CC(0x28u);
      v11 = v29;
      v5 = v10;
      v12 = (const char **)(v10 + 4);
      v10[4] = 0;
      v10[5] = 0;
      v10[6] = 0;
      if ( v11 )
      {
        v18 = sub_77E84(v11);
        v5[4] = v18;
        v5[6] = v11;
        memcpy(v18, s1, v11);
        v5[5] = v11;
      }
      v5[7] = 0;
      v5[8] = 0;
      v5[9] = 0;
      sub_607E8(&v26, (_DWORD *)a1, v24, v12);
      v14 = v26;
      v13 = (_DWORD *)v27;
      if ( v27 )
      {
        v15 = v26;
        if ( v26 )
          v15 = 1;
        if ( a1 + 4 == v27 )
          v15 |= 1u;
        if ( !v15 )
        {
          if ( v5[5] )
            v21 = (const char *)v5[4];
          else
            v21 = (const char *)&dword_8DA5C;
          if ( *(_DWORD *)(v27 + 20) )
            v22 = *(const char **)(v27 + 16);
          else
            v22 = (const char *)&dword_8DA5C;
          v25 = (_DWORD *)v27;
          v23 = strcmp(v21, v22);
          v13 = v25;
          v15 = v23 >> 31;
        }
        sub_8132C((_DWORD *)v15, v5, v13, (_DWORD *)(a1 + 4));
        ++*(_DWORD *)(a1 + 20);
        v8 = strlen(a3);
        v9 = v8;
        if ( !v8 )
          goto LABEL_9;
        goto LABEL_22;
      }
      v19 = (void *)v5[4];
      if ( v19 )
      {
        v5[5] = v27;
        sub_77E08(v19);
      }
      v20 = v5;
      v5 = (_DWORD *)v14;
      sub_80648(v20);
    }
    v8 = strlen(a3);
    v9 = v8;
    if ( !v8 )
    {
LABEL_9:
      v5[8] = v8;
LABEL_10:
      if ( s1 )
      {
        v29 = 0;
        sub_77E08(s1);
      }
      return;
    }
LABEL_22:
    v16 = v8 + 1;
    v17 = (void *)v5[7];
    if ( v16 > v5[9] )
    {
      v17 = sub_77EB0((int)(v5 + 7), (void *)v5[7], v16, 1u);
      v5[7] = v17;
    }
    v5[8] = v16;
    memmove(v17, a3, v9);
    *(_BYTE *)(v5[7] + v9) = 0;
    goto LABEL_10;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
