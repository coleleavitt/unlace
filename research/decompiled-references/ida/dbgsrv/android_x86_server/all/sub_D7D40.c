/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7D40
// Address: 0x000D7D40

//----- (000D7D40) --------------------------------------------------------
char *__cdecl sub_D7D40(int a1, char **a2)
{
  _BYTE *v2; // eax
  char v3; // cl
  char v4; // cl
  char *v5; // ecx
  unsigned int v6; // eax
  char *v7; // eax
  size_t v8; // eax
  char *v9; // ecx
  char v10; // al
  char *v11; // ecx
  unsigned int v12; // eax
  char *v13; // eax
  size_t v14; // eax
  _BYTE *v15; // edi
  char *v16; // ecx
  unsigned int v17; // eax
  char *result; // eax
  size_t v19; // eax

  (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12), a2);
  v2 = *(_BYTE **)(a1 + 12);
  v3 = v2[6];
  if ( !v3 )
    goto LABEL_8;
  if ( v3 == 2 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 4))(v2, a2) )
    {
LABEL_8:
      v5 = a2[1];
      v6 = (unsigned int)a2[2];
      if ( (unsigned int)(v5 + 1) >= v6 )
      {
        v8 = 2 * v6;
        if ( v8 < (unsigned int)(v5 + 1) )
          v8 = (size_t)(v5 + 1);
        a2[2] = (char *)v8;
        v7 = (char *)realloc(*a2, v8);
        *a2 = v7;
        v5 = a2[1];
      }
      else
      {
        v7 = *a2;
      }
      v9 = &v5[(_DWORD)v7];
      v10 = 40;
      goto LABEL_20;
    }
    v2 = *(_BYTE **)(a1 + 12);
  }
  v4 = v2[7];
  if ( !v4 || v4 == 2 && (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 8))(v2, a2) )
    goto LABEL_8;
  v11 = a2[1];
  v12 = (unsigned int)a2[2];
  if ( (unsigned int)(v11 + 1) >= v12 )
  {
    v14 = 2 * v12;
    if ( v14 < (unsigned int)(v11 + 1) )
      v14 = (size_t)(v11 + 1);
    a2[2] = (char *)v14;
    v13 = (char *)realloc(*a2, v14);
    *a2 = v13;
    v11 = a2[1];
  }
  else
  {
    v13 = *a2;
  }
  v9 = &v11[(_DWORD)v13];
  v10 = 32;
LABEL_20:
  *v9 = v10;
  ++a2[1];
  v15 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v15 + 12))(v15, a2);
  if ( v15[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v15 + 16))(v15, a2);
  v16 = a2[1];
  v17 = (unsigned int)a2[2];
  if ( (unsigned int)(v16 + 3) >= v17 )
  {
    v19 = 2 * v17;
    if ( v19 < (unsigned int)(v16 + 3) )
      v19 = (size_t)(v16 + 3);
    a2[2] = (char *)v19;
    result = (char *)realloc(*a2, v19);
    *a2 = result;
    v16 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v16[(_DWORD)result + 2] = 42;
  *(_WORD *)&v16[(_DWORD)result] = 14906;
  a2[1] += 3;
  return result;
}
