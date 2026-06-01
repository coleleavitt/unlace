/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_382A8
// Address: 0x000382A8

//----- (000382A8) --------------------------------------------------------
int __fastcall sub_382A8(int a1)
{
  int v2; // r9
  _DWORD *v3; // r0
  unsigned int v4; // r10
  size_t v5; // r8
  int *v6; // r7
  void **v7; // r1
  int v8; // r3
  unsigned int v9; // r0
  unsigned int v10; // r2
  int v11; // r3
  void **v12; // r1
  int v13; // r3
  int v14; // r6
  void *v15; // r1
  void *v16; // r0
  unsigned int v17; // r0
  int v18; // r1
  _WORD *v19; // r3
  unsigned int v21; // r7
  void *v22; // r8
  void *v23; // r6
  void **v24; // r1
  void *v25; // r0
  int v26; // r3
  _WORD *v27; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  unsigned int v29; // [sp+4h] [bp-Ch]
  void *v30; // [sp+8h] [bp-8h]

  v2 = a1 + 92;
  v3 = *(_DWORD **)(*(_DWORD *)(a1 + 192) + 4 * (*(_DWORD *)(a1 + 196) + 0x3FFFFFFF));
  if ( *v3 != 1 )
  {
    v4 = 1;
    v5 = 0;
    ptr = nullptr;
    v6 = (int *)&byte_8DEAC;
    v29 = 0;
    v30 = nullptr;
LABEL_3:
    ptr = sub_77EB0((int)&ptr, nullptr, v4, 1u);
    v29 = v4;
    memmove(ptr, v6, v5);
    *((_BYTE *)ptr + v5) = 0;
    goto LABEL_4;
  }
  v26 = v3[2];
  if ( *(_DWORD *)(v26 + 4) )
    v6 = *(int **)v26;
  else
    v6 = &dword_8DA5C;
  ptr = nullptr;
  v29 = 0;
  v30 = nullptr;
  if ( v6 )
  {
    v5 = strlen((const char *)v6);
    v4 = v5 + 1;
    goto LABEL_3;
  }
LABEL_4:
  v8 = *(_DWORD *)(a1 + 96);
  v7 = *(void ***)(a1 + 92);
  v9 = *(_DWORD *)(a1 + 100);
  v10 = v8 + 1;
  if ( v7 <= &ptr && &ptr < &v7[3 * v9] )
  {
    v22 = ptr;
    v21 = v29;
    v23 = v30;
    ptr = nullptr;
    v29 = 0;
    v30 = nullptr;
    if ( v9 < v10 )
    {
      v7 = (void **)sub_77EB0(v2, v7, v10, 0xCu);
      v8 = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v7;
    }
    v7[3 * v8] = v22;
    v24 = &v7[3 * v8];
    v24[1] = (void *)v21;
    v24[2] = v23;
    v25 = ptr;
    ++*(_DWORD *)(a1 + 96);
    if ( v25 )
    {
      v29 = 0;
      sub_77E08(v25);
    }
  }
  else
  {
    if ( v9 < v10 )
    {
      v7 = (void **)sub_77EB0(v2, v7, v10, 0xCu);
      v8 = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v7;
    }
    v11 = 3 * v8;
    v7[v11] = ptr;
    v12 = &v7[v11];
    v12[1] = (void *)v29;
    v12[2] = v30;
    ++*(_DWORD *)(a1 + 96);
  }
  v13 = *(_DWORD *)(a1 + 148);
  v14 = *(_DWORD *)(a1 + 116);
  v15 = *(void **)(a1 + 144);
  if ( (unsigned int)(v13 + 1) > *(_DWORD *)(a1 + 152) )
  {
    v16 = sub_77EB0(a1 + 144, v15, v13 + 1, 4u);
    v13 = *(_DWORD *)(a1 + 148);
    v15 = v16;
    *(_DWORD *)(a1 + 144) = v16;
  }
  *((_DWORD *)v15 + v13) = v14;
  v17 = *(_DWORD *)(a1 + 188);
  v18 = *(_DWORD *)(a1 + 184);
  ++*(_DWORD *)(a1 + 148);
  if ( v18 + 1 > v17 )
  {
    v27 = sub_77EB0(a1 + 180, *(void **)(a1 + 180), v18 + 1, 2u);
    v18 = *(_DWORD *)(a1 + 184);
    v19 = v27;
    *(_DWORD *)(a1 + 180) = v27;
  }
  else
  {
    v19 = *(_WORD **)(a1 + 180);
  }
  v19[v18] = 0;
  ++*(_DWORD *)(a1 + 184);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
