/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7B50
// Address: 0x000D7B50

//----- (000D7B50) --------------------------------------------------------
int __cdecl sub_D7B50(int a1, char **a2)
{
  int v2; // ecx
  _DWORD *v3; // eax
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  unsigned int v7; // eax
  char *v8; // eax
  size_t v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  size_t v13; // edi
  char *v14; // eax
  _BYTE *v15; // edi
  size_t v16; // eax
  char *v17; // ecx
  unsigned int v18; // eax
  char *v19; // eax
  size_t v20; // eax
  const void *v22; // [esp+4h] [ebp-18h]
  _DWORD *v23; // [esp+8h] [ebp-14h]

  v2 = (int)a2[1];
  if ( v2 && (*a2)[v2 - 1] == 93 )
  {
    v3 = a2 + 2;
  }
  else
  {
    v4 = (unsigned int)a2[2];
    if ( v2 + 1 >= v4 )
    {
      v6 = 2 * v4;
      if ( v6 < v2 + 1 )
        v6 = v2 + 1;
      a2[2] = (char *)v6;
      v5 = (char *)realloc(*a2, v6);
      *a2 = v5;
      v2 = (int)a2[1];
    }
    else
    {
      v5 = *a2;
    }
    v5[v2] = 32;
    v3 = a2 + 2;
    v2 = (int)(a2[1] + 1);
    a2[1] = (char *)v2;
  }
  v23 = v3;
  v7 = *v3;
  if ( v2 + 1 >= v7 )
  {
    v9 = 2 * v7;
    if ( v9 < v2 + 1 )
      v9 = v2 + 1;
    a2[2] = (char *)v9;
    v8 = (char *)realloc(*a2, v9);
    *a2 = v8;
    v2 = (int)a2[1];
  }
  else
  {
    v8 = *a2;
  }
  v8[v2] = 91;
  v10 = (int)(a2[1] + 1);
  a2[1] = (char *)v10;
  v11 = *(_DWORD *)(a1 + 12);
  v12 = *(_DWORD *)(a1 + 16);
  if ( v12 )
  {
    if ( v11 )
    {
      v13 = v12 - v11;
      if ( v13 )
      {
        v22 = *(const void **)(a1 + 12);
        if ( v10 + v13 >= *v23 )
        {
          v16 = 2 * *v23;
          if ( v16 < v10 + v13 )
            v16 = v10 + v13;
          a2[2] = (char *)v16;
          v14 = (char *)realloc(*a2, v16);
          *a2 = v14;
          v10 = (int)a2[1];
        }
        else
        {
          v14 = *a2;
        }
        memmove(&v14[v10], v22, v13);
        a2[1] += v13;
      }
    }
  }
  else if ( v11 )
  {
    v15 = *(_BYTE **)(a1 + 12);
    (*(void (__cdecl **)(int, char **))(*(_DWORD *)v11 + 12))(v11, a2);
    if ( v15[5] != 1 )
      (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v15 + 16))(v15, a2);
  }
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
  v17[(_DWORD)v19] = 93;
  ++a2[1];
  return (*(int (__cdecl **)(_DWORD, char **))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}
// D7C24: conditional instruction was optimized away because edi.4==0
