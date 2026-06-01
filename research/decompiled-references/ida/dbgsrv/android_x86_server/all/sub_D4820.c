/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4820
// Address: 0x000D4820

//----- (000D4820) --------------------------------------------------------
_BYTE *__cdecl sub_D4820(_DWORD *a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  void *v4; // eax
  size_t v5; // eax
  int v6; // ecx
  size_t v7; // esi
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  int v11; // esi
  unsigned int v12; // eax
  char *v13; // eax
  size_t v14; // eax
  void **v15; // edx
  int v16; // edi
  int v17; // esi
  int v18; // eax
  unsigned int v19; // eax
  char *v20; // eax
  int v21; // ecx
  size_t v22; // eax
  void **v23; // esi
  _BYTE *v24; // esi
  void **v25; // edi
  int v26; // ecx
  void **v27; // esi
  unsigned int v28; // eax
  _BYTE *result; // eax
  size_t v30; // eax
  const void *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+Ch] [ebp-20h]
  char v33; // [esp+10h] [ebp-1Ch]
  int v34; // [esp+14h] [ebp-18h]
  int v35; // [esp+18h] [ebp-14h]

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 7) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 7) )
      v5 = (size_t)(v2 + 7);
    a2[2] = (void *)v5;
    v4 = realloc(*a2, v5);
    *a2 = v4;
    v2 = (char *)a2[1];
  }
  else
  {
    v4 = *a2;
  }
  v2[(_DWORD)v4 + 6] = 97;
  *(_WORD *)&v2[(_DWORD)v4 + 4] = 25698;
  *(_DWORD *)&v2[(_DWORD)v4] = 1835101223;
  v6 = (int)a2[1] + 7;
  a2[1] = (void *)v6;
  v7 = a1[5] - a1[4];
  if ( v7 )
  {
    v31 = (const void *)a1[4];
    v8 = (unsigned int)a2[2];
    if ( v6 + v7 >= v8 )
    {
      v10 = 2 * v8;
      if ( v10 < v6 + v7 )
        v10 = v6 + v7;
      a2[2] = (void *)v10;
      v9 = (char *)realloc(*a2, v10);
      *a2 = v9;
      v6 = (int)a2[1];
    }
    else
    {
      v9 = (char *)*a2;
    }
    memmove(&v9[v6], v31, v7);
    v11 = (int)a2[1] + v7;
    a2[1] = (void *)v11;
    v6 = v11;
  }
  v12 = (unsigned int)a2[2];
  if ( v6 + 2 >= v12 )
  {
    v14 = 2 * v12;
    if ( v14 < v6 + 2 )
      v14 = v6 + 2;
    a2[2] = (void *)v14;
    v13 = (char *)realloc(*a2, v14);
    *a2 = v13;
    v6 = (int)a2[1];
  }
  else
  {
    v13 = (char *)*a2;
  }
  v15 = a2;
  *(_WORD *)&v13[v6] = 10279;
  v16 = (int)a2[1] + 2;
  a2[1] = (void *)v16;
  if ( a1[3] )
  {
    v17 = 0;
    v33 = 1;
    do
    {
      v18 = v16;
      v32 = v17;
      if ( (v33 & 1) == 0 )
      {
        v19 = (unsigned int)v15[2];
        if ( v16 + 2 >= v19 )
        {
          v22 = 2 * v19;
          if ( v22 < v16 + 2 )
            v22 = v16 + 2;
          v15[2] = (void *)v22;
          v23 = v15;
          v20 = (char *)realloc(*v15, v22);
          v15 = v23;
          v17 = v32;
          *v15 = v20;
          v21 = (int)v15[1];
        }
        else
        {
          v20 = (char *)*v15;
          v21 = v16;
        }
        *(_WORD *)&v20[v21] = 8236;
        v18 = (int)v15[1] + 2;
        v15[1] = (void *)v18;
      }
      v35 = v18;
      v34 = v16;
      v24 = *(_BYTE **)(a1[2] + 4 * v17);
      v25 = v15;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v24 + 12))(v24, v15);
      if ( v24[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v24 + 16))(v24, v25);
      v26 = (int)v25[1];
      v15 = v25;
      if ( v35 == v26 )
      {
        v16 = v34;
        v15[1] = (void *)v34;
        v26 = v34;
      }
      else
      {
        v33 = 0;
        v16 = (int)v25[1];
      }
      v17 = v32 + 1;
    }
    while ( v32 + 1 != a1[3] );
  }
  else
  {
    v26 = v16;
  }
  v27 = v15;
  v28 = (unsigned int)v15[2];
  if ( v26 + 1 >= v28 )
  {
    v30 = 2 * v28;
    if ( v30 < v26 + 1 )
      v30 = v26 + 1;
    v15[2] = (void *)v30;
    result = realloc(*v15, v30);
    *v27 = result;
    v26 = (int)v27[1];
  }
  else
  {
    result = *v15;
  }
  result[v26] = 41;
  v27[1] = (char *)v27[1] + 1;
  return result;
}
