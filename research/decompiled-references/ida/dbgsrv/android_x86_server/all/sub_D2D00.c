/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2D00
// Address: 0x000D2D00

//----- (000D2D00) --------------------------------------------------------
int __cdecl sub_D2D00(int a1, char **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  int result; // eax

  v2 = a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 11) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 11) )
      v5 = (size_t)(v2 + 11);
    a2[2] = (char *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = a2[1];
  }
  else
  {
    v4 = *a2;
  }
  qmemcpy(&v2[(_DWORD)v4], "operator\"\" ", 11);
  a2[1] += 11;
  v6 = *(_BYTE **)(a1 + 8);
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 16))(v6, a2);
  return result;
}
