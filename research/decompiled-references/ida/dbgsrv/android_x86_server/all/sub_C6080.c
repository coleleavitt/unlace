/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6080
// Address: 0x000C6080

//----- (000C6080) --------------------------------------------------------
int __cdecl sub_C6080(int a1, char **a2)
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
  int result; // eax

  v2 = a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 24) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 24) )
      v5 = (size_t)(v2 + 24);
    a2[2] = (char *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = a2[1];
  }
  else
  {
    v4 = *a2;
  }
  qmemcpy(&v2[(_DWORD)v4], "construction vtable for ", 24);
  a2[1] += 24;
  v6 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 16))(v6, a2);
  v7 = a2[1];
  v8 = (unsigned int)a2[2];
  if ( (unsigned int)(v7 + 4) >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < (unsigned int)(v7 + 4) )
      v10 = (size_t)(v7 + 4);
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v7 = a2[1];
  }
  else
  {
    v9 = *a2;
  }
  *(_DWORD *)&v7[(_DWORD)v9] = 762210605;
  a2[1] += 4;
  v11 = *(_BYTE **)(a1 + 12);
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 12))(v11, a2);
  if ( v11[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 16))(v11, a2);
  return result;
}
