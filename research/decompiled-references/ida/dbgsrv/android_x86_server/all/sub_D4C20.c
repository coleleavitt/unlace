/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4C20
// Address: 0x000D4C20

//----- (000D4C20) --------------------------------------------------------
int __cdecl sub_D4C20(int a1, char **a2)
{
  _BYTE *v2; // edi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  _BYTE *v7; // edi
  int result; // eax

  v2 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = a2[1];
  v4 = (unsigned int)a2[2];
  if ( (unsigned int)(v3 + 2) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned int)(v3 + 2) )
      v6 = (size_t)(v3 + 2);
    a2[2] = (char *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = a2[1];
  }
  else
  {
    v5 = *a2;
  }
  *(_WORD *)&v3[(_DWORD)v5] = 14906;
  a2[1] += 2;
  v7 = *(_BYTE **)(a1 + 12);
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v7 + 12))(v7, a2);
  if ( v7[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v7 + 16))(v7, a2);
  return result;
}
