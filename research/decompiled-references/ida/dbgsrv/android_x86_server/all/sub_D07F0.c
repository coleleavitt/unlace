/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D07F0
// Address: 0x000D07F0

//----- (000D07F0) --------------------------------------------------------
_BYTE *__cdecl sub_D07F0(_DWORD *a1, char **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // esi
  char *v7; // ecx
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  void **v11; // edx
  int v12; // edi
  int v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  char *v16; // eax
  int v17; // ecx
  size_t v18; // eax
  void **v19; // esi
  _BYTE *v20; // esi
  void **v21; // edi
  int v22; // ecx
  void **v23; // esi
  unsigned int v24; // eax
  _BYTE *result; // eax
  size_t v26; // eax
  int v27; // [esp+Ch] [ebp-20h]
  char v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h]

  v2 = a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 1) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 1) )
      v5 = (size_t)(v2 + 1);
    a2[2] = (char *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = a2[1];
  }
  else
  {
    v4 = *a2;
  }
  v2[(_DWORD)v4] = 40;
  ++a2[1];
  v6 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 16))(v6, a2);
  v7 = a2[1];
  v8 = (unsigned int)a2[2];
  if ( (unsigned int)(v7 + 2) >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < (unsigned int)(v7 + 2) )
      v10 = (size_t)(v7 + 2);
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v7 = a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v11 = (void **)a2;
  *(_WORD *)&v7[(_DWORD)v9] = 10281;
  v12 = (int)(a2[1] + 2);
  a2[1] = (char *)v12;
  if ( a1[4] )
  {
    v13 = 0;
    v28 = 1;
    do
    {
      v14 = v12;
      v27 = v13;
      if ( (v28 & 1) == 0 )
      {
        v15 = (unsigned int)v11[2];
        if ( v12 + 2 >= v15 )
        {
          v18 = 2 * v15;
          if ( v18 < v12 + 2 )
            v18 = v12 + 2;
          v11[2] = (void *)v18;
          v19 = v11;
          v16 = (char *)realloc(*v11, v18);
          v11 = v19;
          v13 = v27;
          *v11 = v16;
          v17 = (int)v11[1];
        }
        else
        {
          v16 = (char *)*v11;
          v17 = v12;
        }
        *(_WORD *)&v16[v17] = 8236;
        v14 = (int)v11[1] + 2;
        v11[1] = (void *)v14;
      }
      v30 = v14;
      v29 = v12;
      v20 = *(_BYTE **)(a1[3] + 4 * v13);
      v21 = v11;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v20 + 12))(v20, v11);
      if ( v20[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v20 + 16))(v20, v21);
      v22 = (int)v21[1];
      v11 = v21;
      if ( v30 == v22 )
      {
        v12 = v29;
        v11[1] = (void *)v29;
        v22 = v29;
      }
      else
      {
        v28 = 0;
        v12 = (int)v21[1];
      }
      v13 = v27 + 1;
    }
    while ( v27 + 1 != a1[4] );
  }
  else
  {
    v22 = v12;
  }
  v23 = v11;
  v24 = (unsigned int)v11[2];
  if ( v22 + 1 >= v24 )
  {
    v26 = 2 * v24;
    if ( v26 < v22 + 1 )
      v26 = v22 + 1;
    v11[2] = (void *)v26;
    result = realloc(*v11, v26);
    *v23 = result;
    v22 = (int)v23[1];
  }
  else
  {
    result = *v11;
  }
  result[v22] = 41;
  v23[1] = (char *)v23[1] + 1;
  return result;
}
