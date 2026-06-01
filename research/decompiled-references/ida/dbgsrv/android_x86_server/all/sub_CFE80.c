/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFE80
// Address: 0x000CFE80

//----- (000CFE80) --------------------------------------------------------
char *__cdecl sub_CFE80(int a1, char **a2)
{
  void **v2; // esi
  _BYTE *v3; // edi
  unsigned int v4; // eax
  char *v5; // ecx
  unsigned int v6; // eax
  char *v7; // eax
  unsigned int v8; // edi
  char *v9; // ecx
  unsigned int v10; // eax
  char *v11; // eax
  size_t v12; // eax
  void **v13; // ecx
  _BYTE *v14; // esi
  size_t v15; // eax
  char *v17; // [esp+Ch] [ebp-20h]
  char *v18; // [esp+10h] [ebp-1Ch]
  char *v19; // [esp+14h] [ebp-18h]
  unsigned int v20; // [esp+18h] [ebp-14h]

  v2 = (void **)a2;
  v19 = a2[1];
  v18 = a2[3];
  a2[3] = (char *)-1;
  v17 = a2[4];
  a2[4] = (char *)-1;
  v3 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v3 + 12))(v3, a2);
  if ( v3[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v3 + 16))(v3, a2);
  v4 = (unsigned int)a2[4];
  if ( v4 == -1 )
  {
    v5 = a2[1];
    v6 = (unsigned int)a2[2];
    if ( (unsigned int)(v5 + 3) >= v6 )
    {
      v15 = 2 * v6;
      if ( v15 < (unsigned int)(v5 + 3) )
        v15 = (size_t)(v5 + 3);
      a2[2] = (char *)v15;
      v7 = (char *)realloc(*a2, v15);
      *a2 = v7;
      v5 = a2[1];
    }
    else
    {
      v7 = *a2;
    }
    v5[(_DWORD)v7 + 2] = 46;
    *(_WORD *)&v5[(_DWORD)v7] = 11822;
    a2[1] += 3;
  }
  else if ( v4 )
  {
    if ( v4 >= 2 )
    {
      v8 = 1;
      v20 = (unsigned int)a2[4];
      do
      {
        v9 = (char *)v2[1];
        v10 = (unsigned int)v2[2];
        if ( (unsigned int)(v9 + 2) >= v10 )
        {
          v12 = 2 * v10;
          if ( v12 < (unsigned int)(v9 + 2) )
            v12 = (size_t)(v9 + 2);
          v2[2] = (void *)v12;
          v11 = (char *)realloc(*v2, v12);
          *v2 = v11;
          v9 = (char *)v2[1];
        }
        else
        {
          v11 = (char *)*v2;
        }
        *(_WORD *)&v9[(_DWORD)v11] = 8236;
        v2[1] = (char *)v2[1] + 2;
        v2[3] = (void *)v8;
        v13 = v2;
        v14 = *(_BYTE **)(a1 + 8);
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v14 + 12))(v14, v13);
        if ( v14[5] != 1 )
          (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v14 + 16))(v14, a2);
        ++v8;
        v2 = (void **)a2;
      }
      while ( v8 < v20 );
    }
  }
  else
  {
    a2[1] = v19;
  }
  v2[4] = v17;
  v2[3] = v18;
  return v18;
}
