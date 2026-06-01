/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17C10
// Address: 0x00017C10

//----- (00017C10) --------------------------------------------------------
int __fastcall sub_17C10(int a1, int a2)
{
  int v4; // r6
  char **v5; // r8
  int v6; // r3
  int v7; // r3
  _DWORD *v8; // r7
  int v9; // r10
  void **v10; // r6
  const char *v11; // r9
  const char *v12; // t1
  size_t v13; // r0
  void *v14; // r7
  size_t v15; // r10
  int v16; // r6
  unsigned int v17; // r2
  unsigned int v18; // r12
  char *v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r2
  int v22; // r2
  int v24; // r3
  char *v25; // r1
  int v26; // r0
  size_t v27; // [sp+8h] [bp-24h]
  int v28; // [sp+1Ch] [bp-10h] BYREF
  _DWORD v29[2]; // [sp+20h] [bp-Ch] BYREF

  *(_DWORD *)(a1 + 36) = 1065353216;
  v4 = _stack_chk_guard;
  *(_DWORD *)(a1 + 20) = a1 + 44;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)a1 = &off_CF510;
  v29[1] = v4;
  memset((void *)(a1 + 56), 0, 0x48u);
  memset((void *)(a1 + 128), 0, 0x108u);
  *(_BYTE *)(a1 + 392) = 0;
  *(_BYTE *)(a1 + 393) = 0;
  if ( off_D3138[0] )
  {
    v5 = off_D3138;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 16);
      v8 = *(_DWORD **)(a2 + 12);
      if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a2 + 20) )
      {
        v8 = sub_77EB0(a2 + 12, *(void **)(a2 + 12), v7 + 1, 0xCu);
        v7 = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 12) = v8;
      }
      v9 = 3 * v7;
      v10 = (void **)&v8[3 * v7];
      *v10 = nullptr;
      v10[1] = nullptr;
      v10[2] = nullptr;
      ++*(_DWORD *)(a2 + 16);
      v12 = *v5++;
      v11 = v12;
      if ( v12 )
      {
        v13 = strlen(v11);
        v14 = (void *)v8[v9];
        v15 = v13;
        if ( v13 )
        {
          v27 = v13 + 1;
          if ( v13 + 1 > (unsigned int)v10[2] )
          {
            v14 = sub_77EB0((int)v10, v14, v13 + 1, 1u);
            *v10 = v14;
          }
          v10[1] = (void *)v27;
          memmove(v14, v11, v15);
          *((_BYTE *)*v10 + v15) = 0;
          v14 = *v10;
          goto LABEL_12;
        }
      }
      else
      {
        v14 = (void *)v8[3 * v7];
      }
      v10[1] = nullptr;
LABEL_12:
      v25 = *(char **)(a2 + 24);
      v26 = *(_DWORD *)(a2 + 28);
      v16 = a2 + 24;
      v29[0] = v14;
      v17 = *(_DWORD *)(a2 + 32);
      v18 = v26 + 1;
      if ( v25 > (char *)v29 || v29 >= (_DWORD *)&v25[4 * v17] )
      {
        if ( v17 < v18 )
        {
          v25 = (char *)sub_77EB0(a2 + 24, v25, v26 + 1, 4u);
          v14 = (void *)v29[0];
          v26 = *(_DWORD *)(a2 + 28);
          *(_DWORD *)(a2 + 24) = v25;
        }
      }
      else if ( v17 < v18 )
      {
        v25 = (char *)sub_77EB0(a2 + 24, v25, v26 + 1, 4u);
        v26 = *(_DWORD *)(a2 + 28);
        *(_DWORD *)(a2 + 24) = v25;
      }
      *(_DWORD *)&v25[4 * v26] = v14;
      v6 = *(_DWORD *)(a2 + 28) + 1;
      *(_DWORD *)(a2 + 28) = v6;
      if ( !*v5 )
        goto LABEL_20;
    }
  }
  v6 = *(_DWORD *)(a2 + 28);
  v16 = a2 + 24;
LABEL_20:
  v19 = *(char **)(a2 + 24);
  v20 = *(_DWORD *)(a2 + 32);
  v28 = 0;
  v21 = v6 + 1;
  if ( v19 <= (char *)&v28 && &v28 < (int *)&v19[4 * v20] )
  {
    if ( v20 < v21 )
    {
      v19 = (char *)sub_77EB0(v16, v19, v21, 4u);
      v6 = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a2 + 24) = v19;
    }
    *(_DWORD *)&v19[4 * v6] = 0;
  }
  else
  {
    if ( v20 < v21 )
    {
      v19 = (char *)sub_77EB0(v16, v19, v21, 4u);
      v22 = v28;
      v6 = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a2 + 24) = v19;
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)&v19[4 * v6] = v22;
  }
  v24 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 48) = 1;
  *(_DWORD *)(a2 + 28) = v24 + 1;
  return a1;
}
// CF510: using guessed type _UNKNOWN *off_CF510;
// D3138: using guessed type char *off_D3138[3];
