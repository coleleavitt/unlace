/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4118C
// Address: 0x0004118C

//----- (0004118C) --------------------------------------------------------
int __fastcall sub_4118C(int a1, void **a2, int a3)
{
  _DWORD *v3; // r10
  _DWORD *v7; // r0
  _DWORD *v8; // r9
  int v9; // r3
  const char *v10; // r0
  const char *v11; // r1
  int v12; // r9
  _DWORD *v13; // r4
  void *v14; // r0
  void *v15; // r0
  int v16; // r8
  int v17; // r5
  int i; // r3
  int v19; // r3
  void *v20; // r0
  void *v21; // r0
  unsigned __int8 *v22; // r0
  int v23; // r7
  int j; // r5
  int v25; // r3
  signed int v27; // r9
  unsigned int v28; // r11
  char *v29; // r10
  void *v30; // r0
  const void *v31; // r1
  int v32; // r2
  char *v33; // r3
  size_t v34; // r9
  size_t v35; // r11
  void *v36; // r1
  char *v37; // r1
  int v38; // r0
  size_t v39; // r8
  _DWORD *v40; // r5
  void *v41; // r10
  char *v42; // [sp+4h] [bp-20h]
  int v43; // [sp+8h] [bp-1Ch] BYREF
  _DWORD *v44; // [sp+Ch] [bp-18h]
  void *ptr; // [sp+10h] [bp-14h] BYREF
  char *v46; // [sp+14h] [bp-10h]
  unsigned int v47; // [sp+18h] [bp-Ch]

  v3 = (_DWORD *)(a1 + 4);
  v7 = sub_3DE34(*(_DWORD **)(a1 + 8), (_DWORD *)(a1 + 4), a3);
  if ( v3 == v7 )
    goto LABEL_27;
  v8 = v7;
  if ( *(_DWORD *)(a3 + 4) )
  {
    v9 = v7[5];
    v10 = *(const char **)a3;
    if ( v9 )
    {
LABEL_4:
      v11 = (const char *)v8[4];
      goto LABEL_5;
    }
  }
  else
  {
    v10 = (const char *)&dword_8DA5C;
    if ( v8[5] )
      goto LABEL_4;
  }
  v11 = (const char *)&dword_8DA5C;
LABEL_5:
  if ( strcmp(v10, v11) >= 0 )
  {
    v12 = v8[7];
    v13 = *((_DWORD **)*a2 + v12);
    if ( v13[17] )
      return -1;
    v14 = (void *)v13[4];
    if ( v14 )
    {
      v13[5] = 0;
      sub_77E08(v14);
      v13[4] = 0;
      v13[6] = 0;
    }
    v15 = (void *)v13[11];
    if ( v15 )
    {
      v16 = v13[12];
      if ( v16 )
      {
        v17 = 0;
        for ( i = v13[11]; ; i = v13[11] )
        {
          v19 = i + 16 * v17;
          v20 = *(void **)(v19 + 4);
          if ( v20 )
          {
            *(_DWORD *)(v19 + 8) = 0;
            sub_77E08(v20);
          }
          if ( v16 == ++v17 )
            break;
        }
        v15 = (void *)v13[11];
      }
      v13[12] = 0;
      sub_77E08(v15);
      v13[11] = 0;
      v13[13] = 0;
    }
    v21 = (void *)v13[14];
    if ( v21 )
    {
      v13[15] = 0;
      sub_77E08(v21);
      v13[14] = 0;
      v13[16] = 0;
    }
    v22 = (unsigned __int8 *)v13[8];
    if ( v22 )
    {
      v23 = v13[9];
      if ( v23 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v25 = 3 * j;
          sub_455C8(&v22[8 * v25]);
          v22 = (unsigned __int8 *)v13[8];
        }
      }
      v13[9] = 0;
      sub_77E08(v22);
      v13[8] = 0;
      v13[10] = 0;
    }
    v13[3] = 0;
    v13[17] = -1;
    return v12;
  }
LABEL_27:
  v27 = *(_DWORD *)(a1 + 36);
  ptr = nullptr;
  v46 = nullptr;
  v47 = 0;
  if ( !v27 )
  {
    v28 = 2;
    v29 = nullptr;
LABEL_29:
    v27 = (signed int)sub_77EB0((int)&ptr, (void *)v27, v28, 1u);
    ptr = (void *)v27;
    goto LABEL_33;
  }
  v28 = v27 + 1;
  v30 = sub_77E84(v27);
  v31 = *(const void **)(a1 + 32);
  v47 = v27;
  v29 = (char *)(v27 - 1);
  ptr = v30;
  memcpy(v30, v31, v27);
  v46 = (char *)v27;
  v27 = (signed int)ptr;
  if ( v28 > v47 )
    goto LABEL_29;
LABEL_33:
  v46 = (char *)v28;
  v29[v27] = 46;
  v29[(_DWORD)ptr + 1] = 0;
  v32 = *(_DWORD *)(a3 + 4);
  v33 = v46;
  if ( v32 )
  {
    v34 = v32 - 1;
    if ( v32 != 1 )
    {
      if ( v46 )
      {
        v42 = v46 - 1;
        v35 = (size_t)&v46[v34 - 1];
      }
      else
      {
        v35 = v32 - 1;
        v42 = nullptr;
      }
      v36 = ptr;
      if ( v35 + 1 > v47 )
      {
        v36 = sub_77EB0((int)&ptr, ptr, v35 + 1, 1u);
        ptr = v36;
      }
      v46 = (char *)(v35 + 1);
      *((_BYTE *)v36 + v35) = 0;
      memcpy(&v42[(_DWORD)ptr], *(const void **)a3, v34);
      v33 = v46;
    }
  }
  if ( v33 )
    v37 = (char *)ptr;
  else
    v37 = (char *)&dword_8DA5C;
  v38 = sub_3EDBC(a2, v37);
  v39 = *(_DWORD *)(a3 + 4);
  v12 = v38;
  if ( v39 )
  {
    v41 = sub_77E84(*(_DWORD *)(a3 + 4));
    memcpy(v41, *(const void **)a3, v39);
    v40 = sub_805CC(0x20u);
  }
  else
  {
    v40 = sub_805CC(0x20u);
    v41 = nullptr;
  }
  v40[4] = v41;
  v40[5] = v39;
  v40[6] = v39;
  v40[7] = v12;
  sub_4107C(&v43, a1, (int)(v40 + 4));
  if ( v44 )
  {
    sub_41130(a1, v43, v44, v40);
  }
  else
  {
    if ( v41 )
    {
      v40[5] = v44;
      sub_77E08(v41);
    }
    sub_80648(v40);
  }
  if ( ptr )
  {
    v46 = nullptr;
    sub_77E08(ptr);
  }
  return v12;
}
// 8DA5C: using guessed type int dword_8DA5C;
