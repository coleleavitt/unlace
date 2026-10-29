/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D37C0
// Address: 0x000D37C0

//----- (000D37C0) --------------------------------------------------------
char *__cdecl sub_D37C0(int a1, char **a2)
{
  int *v2; // esi
  int v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  unsigned int *v6; // eax
  size_t v7; // eax
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  int v11; // eax
  int v12; // ecx
  size_t v13; // eax
  char *v14; // eax
  size_t v15; // edx
  size_t v16; // edx
  char *v17; // eax
  size_t v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  char *v21; // eax
  size_t v22; // eax
  int v23; // edi
  char *v24; // eax
  int v25; // ecx
  size_t v26; // eax
  _BYTE *v27; // esi
  int v28; // ecx
  char *v29; // eax
  size_t v30; // eax
  _BYTE *v31; // esi
  char *result; // eax
  int v33; // ecx
  unsigned int v34; // edx
  char *v35; // eax
  size_t v36; // eax
  int v37; // edi
  char *v38; // eax
  int v39; // ecx
  size_t v40; // eax
  _BYTE *v41; // esi
  int v42; // ecx
  size_t v43; // eax
  int *v44; // [esp+8h] [ebp-24h]
  unsigned int *v45; // [esp+Ch] [ebp-20h]
  int v46; // [esp+10h] [ebp-1Ch]
  int v47; // [esp+10h] [ebp-1Ch]
  char v48; // [esp+14h] [ebp-18h]
  char v49; // [esp+14h] [ebp-18h]
  int v50; // [esp+18h] [ebp-14h]
  int v51; // [esp+18h] [ebp-14h]

  v2 = (int *)(a2 + 1);
  v3 = (int)a2[1];
  if ( *(_BYTE *)(a1 + 28) )
  {
    v4 = (unsigned int)a2[2];
    if ( v3 + 11 >= v4 )
    {
      v7 = 2 * v4;
      if ( v7 < v3 + 11 )
        v7 = v3 + 11;
      a2[2] = (char *)v7;
      v5 = (char *)realloc(*a2, v7);
      *a2 = v5;
      v3 = (int)a2[1];
    }
    else
    {
      v5 = *a2;
    }
    qmemcpy(&v5[v3], "::operator ", 11);
    v6 = (unsigned int *)(a2 + 2);
    v3 = *v2 + 11;
    *v2 = v3;
  }
  else
  {
    v6 = (unsigned int *)(a2 + 2);
  }
  v45 = v6;
  v8 = *v6;
  if ( v3 + 3 >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < v3 + 3 )
      v10 = v3 + 3;
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v3 = (int)a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v9[v3 + 2] = 119;
  *(_WORD *)&v9[v3] = 25966;
  v11 = *v2;
  v12 = *v2 + 3;
  *v2 = v12;
  if ( *(_BYTE *)(a1 + 29) )
  {
    v13 = v11 + 5;
    if ( v13 >= *v45 )
    {
      v15 = 2 * *v45;
      if ( v15 < v13 )
        v15 = v13;
      a2[2] = (char *)v15;
      v14 = (char *)realloc(*a2, v15);
      *a2 = v14;
      v12 = (int)a2[1];
    }
    else
    {
      v14 = *a2;
    }
    *(_WORD *)&v14[v12] = 23899;
    v12 = *v2 + 2;
    *v2 = v12;
  }
  v16 = v12 + 1;
  if ( v12 + 1 >= *v45 )
  {
    v18 = 2 * *v45;
    if ( v18 < v16 )
      v18 = v12 + 1;
    a2[2] = (char *)v18;
    v17 = (char *)realloc(*a2, v18);
    *a2 = v17;
    v12 = (int)a2[1];
    v16 = v12 + 1;
  }
  else
  {
    v17 = *a2;
  }
  *v2 = v16;
  v17[v12] = 32;
  v44 = (int *)(a2 + 1);
  if ( *(_DWORD *)(a1 + 12) )
  {
    v19 = *v2;
    v20 = *v2 + 1;
    if ( v20 >= *v45 )
    {
      v22 = 2 * *v45;
      if ( v22 < v20 )
        v22 = *v2 + 1;
      a2[2] = (char *)v22;
      v21 = (char *)realloc(*a2, v22);
      *a2 = v21;
      v19 = (int)a2[1];
    }
    else
    {
      v21 = *a2;
    }
    v21[v19] = 40;
    v23 = *v2 + 1;
    *v2 = v23;
    if ( *(_DWORD *)(a1 + 12) )
    {
      v46 = 0;
      v48 = 1;
      do
      {
        v50 = v23;
        if ( (v48 & 1) == 0 )
        {
          if ( v23 + 2 >= *v45 )
          {
            v26 = 2 * *v45;
            if ( v26 < v23 + 2 )
              v26 = v23 + 2;
            a2[2] = (char *)v26;
            v24 = (char *)realloc(*a2, v26);
            *a2 = v24;
            v25 = (int)a2[1];
          }
          else
          {
            v24 = *a2;
            v25 = v23;
          }
          *(_WORD *)&v24[v25] = 8236;
          v23 = *v44 + 2;
          *v44 = v23;
        }
        v27 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v46);
        (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v27 + 12))(v27, a2);
        if ( v27[5] != 1 )
          (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v27 + 16))(v27, a2);
        v28 = *v44;
        if ( v23 == *v44 )
        {
          v23 = v50;
          *v44 = v50;
          v28 = v50;
        }
        else
        {
          v48 = 0;
          v23 = *v44;
        }
        ++v46;
      }
      while ( v46 != *(_DWORD *)(a1 + 12) );
    }
    else
    {
      v28 = v23;
    }
    if ( v28 + 1 >= *v45 )
    {
      v30 = 2 * *v45;
      if ( v30 < v28 + 1 )
        v30 = v28 + 1;
      a2[2] = (char *)v30;
      v29 = (char *)realloc(*a2, v30);
      *a2 = v29;
      v28 = (int)a2[1];
    }
    else
    {
      v29 = *a2;
    }
    v29[v28] = 41;
    ++*v44;
  }
  v31 = *(_BYTE **)(a1 + 16);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v31 + 12))(v31, a2);
  if ( v31[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v31 + 16))(v31, a2);
  result = (char *)a1;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v33 = *v44;
    v34 = *v44 + 1;
    if ( v34 >= *v45 )
    {
      v36 = 2 * *v45;
      if ( v36 < v34 )
        v36 = *v44 + 1;
      a2[2] = (char *)v36;
      v35 = (char *)realloc(*a2, v36);
      *a2 = v35;
      v33 = (int)a2[1];
    }
    else
    {
      v35 = *a2;
    }
    v35[v33] = 40;
    v37 = *v44 + 1;
    *v44 = v37;
    if ( *(_DWORD *)(a1 + 24) )
    {
      v47 = 0;
      v49 = 1;
      do
      {
        v51 = v37;
        if ( (v49 & 1) == 0 )
        {
          if ( v37 + 2 >= *v45 )
          {
            v40 = 2 * *v45;
            if ( v40 < v37 + 2 )
              v40 = v37 + 2;
            a2[2] = (char *)v40;
            v38 = (char *)realloc(*a2, v40);
            *a2 = v38;
            v39 = (int)a2[1];
          }
          else
          {
            v38 = *a2;
            v39 = v37;
          }
          *(_WORD *)&v38[v39] = 8236;
          v37 = *v44 + 2;
          *v44 = v37;
        }
        v41 = *(_BYTE **)(*(_DWORD *)(a1 + 20) + 4 * v47);
        (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v41 + 12))(v41, a2);
        if ( v41[5] != 1 )
          (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v41 + 16))(v41, a2);
        v42 = *v44;
        if ( v37 == *v44 )
        {
          v37 = v51;
          *v44 = v51;
          v42 = v51;
        }
        else
        {
          v49 = 0;
          v37 = *v44;
        }
        ++v47;
      }
      while ( v47 != *(_DWORD *)(a1 + 24) );
    }
    else
    {
      v42 = v37;
    }
    if ( v42 + 1 >= *v45 )
    {
      v43 = 2 * *v45;
      if ( v43 < v42 + 1 )
        v43 = v42 + 1;
      a2[2] = (char *)v43;
      result = (char *)realloc(*a2, v43);
      *a2 = result;
      v42 = (int)a2[1];
    }
    else
    {
      result = *a2;
    }
    result[v42] = 41;
    ++*v44;
  }
  return result;
}
