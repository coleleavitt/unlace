/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2FD0
// Address: 0x000D2FD0

//----- (000D2FD0) --------------------------------------------------------
char *__cdecl sub_D2FD0(int a1, char **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  char *v7; // ecx
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  _BYTE *v11; // edi
  char *v12; // ecx
  unsigned int v13; // eax
  char *result; // eax
  size_t v15; // eax

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
  v6 = *(_BYTE **)(a1 + 8);
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
  *(_WORD *)&v7[(_DWORD)v9] = 23337;
  a2[1] += 2;
  v11 = *(_BYTE **)(a1 + 12);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 12))(v11, a2);
  if ( v11[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 16))(v11, a2);
  v12 = a2[1];
  v13 = (unsigned int)a2[2];
  if ( (unsigned int)(v12 + 1) >= v13 )
  {
    v15 = 2 * v13;
    if ( v15 < (unsigned int)(v12 + 1) )
      v15 = (size_t)(v12 + 1);
    a2[2] = (char *)v15;
    result = (char *)realloc(*a2, v15);
    *a2 = result;
    v12 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v12[(_DWORD)result] = 93;
  ++a2[1];
  return result;
}
