/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5210
// Address: 0x000D5210

//----- (000D5210) --------------------------------------------------------
_BYTE *__cdecl sub_D5210(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // edi
  _BYTE *v5; // eax
  size_t v6; // eax
  _DWORD *v7; // edx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int v12; // ecx
  size_t v13; // eax
  _DWORD *v14; // esi
  _BYTE *v15; // esi
  _DWORD *v16; // edi
  int v17; // ebx
  void *v18; // eax
  void **v19; // edi
  unsigned int v20; // edx
  size_t v21; // edx
  void **v22; // esi
  unsigned int v23; // eax
  _BYTE *result; // eax
  size_t v25; // eax
  int v26; // [esp+Ch] [ebp-20h]
  char v27; // [esp+10h] [ebp-1Ch]
  int v28; // [esp+14h] [ebp-18h]
  int v29; // [esp+18h] [ebp-14h]

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = a1;
  if ( v2 + 1 >= v3 )
  {
    v6 = 2 * v3;
    if ( v6 < v2 + 1 )
      v6 = v2 + 1;
    *(_DWORD *)(a2 + 8) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_DWORD *)a2 = v5;
    v2 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  v7 = (_DWORD *)a2;
  v5[v2] = 60;
  v8 = *(_DWORD *)(a2 + 4) + 1;
  *(_DWORD *)(a2 + 4) = v8;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v26 = 0;
    v27 = 1;
    do
    {
      v9 = v8;
      v28 = v8;
      if ( (v27 & 1) == 0 )
      {
        v10 = v7[2];
        if ( v8 + 2 >= v10 )
        {
          v13 = 2 * v10;
          if ( v13 < v8 + 2 )
            v13 = v8 + 2;
          v7[2] = v13;
          v14 = v7;
          v11 = (char *)realloc((void *)*v7, v13);
          v7 = v14;
          *v14 = v11;
          v12 = v14[1];
        }
        else
        {
          v11 = (char *)*v7;
          v12 = v8;
        }
        *(_WORD *)&v11[v12] = 8236;
        v9 = v7[1] + 2;
        v7[1] = v9;
      }
      v29 = v9;
      v15 = *(_BYTE **)(*(_DWORD *)(v4 + 8) + 4 * v26);
      v16 = v7;
      (*(void (__cdecl **)(_BYTE *, _DWORD *))(*(_DWORD *)v15 + 12))(v15, v7);
      if ( v15[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, _DWORD *))(*(_DWORD *)v15 + 16))(v15, v16);
      v17 = v16[1];
      v7 = v16;
      if ( v29 == v17 )
      {
        v8 = v28;
        v16[1] = v28;
        v17 = v28;
      }
      else
      {
        v27 = 0;
        v8 = v16[1];
      }
      ++v26;
      v4 = a1;
    }
    while ( v26 != *(_DWORD *)(a1 + 12) );
    if ( v17 )
      goto LABEL_22;
LABEL_29:
    v22 = (void **)v7;
    v17 = 0;
    goto LABEL_31;
  }
  v17 = v8;
  if ( !v8 )
    goto LABEL_29;
LABEL_22:
  v18 = (void *)*v7;
  if ( *(_BYTE *)(*v7 + v17 - 1) == 62 )
  {
    v19 = (void **)v7;
    v20 = v7[2];
    if ( v17 + 1 >= v20 )
    {
      v21 = 2 * v20;
      if ( v21 < v17 + 1 )
        v21 = v17 + 1;
      v19[2] = (void *)v21;
      v18 = realloc(v18, v21);
      *v19 = v18;
      v17 = (int)v19[1];
    }
    *((_BYTE *)v18 + v17) = 32;
    v17 = (int)v19[1] + 1;
    v22 = v19;
    v19[1] = (void *)v17;
  }
  else
  {
    v22 = (void **)v7;
  }
LABEL_31:
  v23 = (unsigned int)v22[2];
  if ( v17 + 1 >= v23 )
  {
    v25 = 2 * v23;
    if ( v25 < v17 + 1 )
      v25 = v17 + 1;
    v22[2] = (void *)v25;
    result = realloc(*v22, v25);
    *v22 = result;
    v17 = (int)v22[1];
  }
  else
  {
    result = *v22;
  }
  result[v17] = 62;
  v22[1] = (char *)v22[1] + 1;
  return result;
}
