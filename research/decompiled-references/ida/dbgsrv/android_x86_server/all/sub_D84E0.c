/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D84E0
// Address: 0x000D84E0

//----- (000D84E0) --------------------------------------------------------
int __cdecl sub_D84E0(int a1, char **a2)
{
  _BYTE *v2; // eax
  char v3; // cl
  char *v4; // ecx
  unsigned int v5; // eax
  char *v6; // eax
  size_t v7; // eax
  _BYTE *v8; // eax
  char v9; // cl
  char v10; // cl
  char *v11; // ecx
  unsigned int v12; // eax
  char *v13; // eax
  size_t v14; // eax
  _DWORD *v15; // esi
  int result; // eax
  char *v17; // ecx
  unsigned int v18; // eax
  char *v19; // eax
  size_t v20; // eax

  (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  v2 = *(_BYTE **)(a1 + 8);
  v3 = v2[6];
  if ( !v3 || v3 == 2 && (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 4))(v2, a2) )
  {
    v4 = a2[1];
    v5 = (unsigned int)a2[2];
    if ( (unsigned int)(v4 + 1) >= v5 )
    {
      v7 = 2 * v5;
      if ( v7 < (unsigned int)(v4 + 1) )
        v7 = (size_t)(v4 + 1);
      a2[2] = (char *)v7;
      v6 = (char *)realloc(*a2, v7);
      *a2 = v6;
      v4 = a2[1];
    }
    else
    {
      v6 = *a2;
    }
    v4[(_DWORD)v6] = 32;
    ++a2[1];
  }
  v8 = *(_BYTE **)(a1 + 8);
  v9 = v8[6];
  if ( !v9 )
    goto LABEL_17;
  if ( v9 == 2 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v8 + 4))(v8, a2) )
    {
LABEL_17:
      v11 = a2[1];
      v12 = (unsigned int)a2[2];
      if ( (unsigned int)(v11 + 2) >= v12 )
      {
        v14 = 2 * v12;
        if ( v14 < (unsigned int)(v11 + 2) )
          v14 = (size_t)(v11 + 2);
        a2[2] = (char *)v14;
        v13 = (char *)realloc(*a2, v14);
        *a2 = v13;
        v11 = a2[1];
      }
      else
      {
        v13 = *a2;
      }
      v15 = a2 + 1;
      *(_WORD *)&v11[(_DWORD)v13] = 9768;
      result = 2;
      goto LABEL_29;
    }
    v8 = *(_BYTE **)(a1 + 8);
  }
  v10 = v8[7];
  if ( !v10 || v10 == 2 && (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v8 + 8))(v8, a2) )
    goto LABEL_17;
  v17 = a2[1];
  v18 = (unsigned int)a2[2];
  if ( (unsigned int)(v17 + 1) >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < (unsigned int)(v17 + 1) )
      v20 = (size_t)(v17 + 1);
    a2[2] = (char *)v20;
    v19 = (char *)realloc(*a2, v20);
    *a2 = v19;
    v17 = a2[1];
  }
  else
  {
    v19 = *a2;
  }
  v15 = a2 + 1;
  v17[(_DWORD)v19] = 38;
  result = 1;
LABEL_29:
  *v15 += result;
  return result;
}
