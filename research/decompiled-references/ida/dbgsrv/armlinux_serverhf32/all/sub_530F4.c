/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_530F4
// Address: 0x000530F4

//----- (000530F4) --------------------------------------------------------
int __fastcall sub_530F4(_DWORD *a1, int a2, int a3)
{
  int v4; // r8
  int i; // r7
  _DWORD *v8; // r5
  void *v9; // r0
  void *v10; // r0
  int v11; // r2
  int (__fastcall *v12)(int, char **); // r7
  void *v13; // r0
  unsigned int v14; // r8
  unsigned int v15; // r9
  unsigned int j; // r5
  int v17; // r3
  void *v18; // r0
  unsigned int v19; // r3
  int v20; // r7
  _DWORD *v21; // r10
  int v22; // r0
  char *v23; // r1
  char *v24; // r5
  _DWORD *v25; // r3
  int v26; // r2
  void **v27; // r3
  unsigned int v28; // r6
  void *v30; // r0
  void *src; // [sp+4h] [bp-8h]

  v4 = a1[42];
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = (_DWORD *)(a1[41] + 32 * i);
      v9 = (void *)v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        sub_77E08(v9);
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v8[2] = 0;
        sub_77E08(v10);
      }
    }
  }
  v11 = *a1;
  a1[42] = 0;
  v12 = *(int (__fastcall **)(int, char **))(v11 + 12);
  if ( v12 == sub_52F88 )
  {
    v13 = (void *)a1[41];
    if ( !v13 )
    {
      v14 = *(_DWORD *)(a2 + 4);
      v15 = 0;
      if ( !v14 )
        return 1;
      goto LABEL_12;
    }
    sub_77E08(v13);
    a1[41] = 0;
    a1[43] = 0;
  }
  else
  {
    ((void (__fastcall *)(_DWORD *, _DWORD *, int))v12)(a1, a1 + 41, a3);
  }
  v14 = *(_DWORD *)(a2 + 4);
  v15 = a1[42];
  if ( v14 )
  {
LABEL_12:
    for ( j = 0; j < v14; ++j )
    {
      v17 = *(_DWORD *)a2 + 16 * j;
      v18 = *(void **)(v17 + 4);
      if ( v18 )
      {
        *(_DWORD *)(v17 + 8) = 0;
        sub_77E08(v18);
      }
    }
  }
  v19 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 0;
  if ( v19 < v15 )
    *(_DWORD *)a2 = sub_77EB0(a2, *(void **)a2, v15, 0x10u);
  if ( v15 )
  {
    v20 = 0;
    v21 = a1;
    do
    {
      v22 = *(_DWORD *)(a2 + 4);
      v23 = *(char **)a2;
      if ( (unsigned int)(v22 + 1) > *(_DWORD *)(a2 + 8) )
      {
        v23 = (char *)sub_77EB0(a2, v23, v22 + 1, 0x10u);
        v22 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v23;
      }
      v24 = &v23[16 * v22];
      *((_DWORD *)v24 + 1) = 0;
      *((_DWORD *)v24 + 2) = 0;
      *((_DWORD *)v24 + 3) = 0;
      ++*(_DWORD *)(a2 + 4);
      v25 = (_DWORD *)(32 * v20 + v21[41]);
      *(_DWORD *)v24 = *v25;
      v26 = (int)(v24 + 4);
      if ( v25[6] > 1u )
        v27 = (void **)(v25 + 5);
      else
        v27 = (void **)(v25 + 1);
      if ( (void **)v26 != v27 )
      {
        v28 = (unsigned int)v27[1];
        if ( v28 > 1 )
        {
          v30 = *((void **)v24 + 1);
          src = *v27;
          if ( v28 > *((_DWORD *)v24 + 3) )
          {
            v30 = sub_77EB0(v26, v30, v28, 1u);
            *((_DWORD *)v24 + 1) = v30;
          }
          *((_DWORD *)v24 + 2) = v28;
          memmove(v30, src, v28 - 1);
          *(_BYTE *)(*((_DWORD *)v24 + 1) + v28 - 1) = 0;
        }
        else
        {
          *((_DWORD *)v24 + 2) = 0;
        }
      }
      ++v20;
    }
    while ( v20 != v15 );
  }
  return 1;
}
