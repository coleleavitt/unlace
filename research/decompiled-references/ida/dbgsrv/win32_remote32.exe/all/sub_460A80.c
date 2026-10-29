/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460A80
// Address: 0x00460A80

//----- (00460A80) --------------------------------------------------------
int __userpurge sub_460A80@<eax>(__m128i a1@<xmm0>, void **a2, int a3, const char **a4, int a5)
{
  const char **v5; // ebx
  const char *v6; // ebp
  void **v7; // edi
  unsigned int v8; // esi
  int v9; // edi
  const char *v10; // ebp
  void **v11; // esi
  char v12; // dl
  void *v13; // ebx
  unsigned int v14; // esi
  const char **v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  _BYTE *v20; // ecx
  char *v21; // ebp
  int v22; // eax
  char v24; // [esp+13h] [ebp-5h]
  int v25; // [esp+14h] [ebp-4h]

  v5 = a4;
  v6 = *a4;
  v7 = a2 + 3;
  v25 = a3;
  if ( *a4 && (v8 = strlen(v6)) != 0 )
  {
    if ( v8 + 1 > (unsigned int)a2[5] )
      *v7 = sub_453B00((int)(a2 + 3), *v7, v8 + 1, 1u);
    a2[4] = (void *)(v8 + 1);
    sub_464310((unsigned int)*v7, (unsigned int)v6, v8);
    v5 = a4;
    *((_BYTE *)*v7 + v8) = 0;
  }
  else
  {
    a2[4] = nullptr;
  }
  v9 = a3;
  while ( 1 )
  {
    if ( v9 <= 1 )
      return v25 - v9;
    v10 = v5[1];
    if ( *v10 != 45 && *v10 != 47 )
      return v25 - v9;
    v11 = a2;
    v12 = v10[1];
    v24 = v12;
    v13 = a2[1];
    if ( v12 == 45 )
    {
      v14 = 0;
      if ( v13 )
      {
        v15 = (const char **)((char *)*a2 + 4);
        while ( 1 )
        {
          if ( *v15 )
          {
            v16 = strcmp(*v15, v10 + 2);
            if ( v16 )
              v16 = v16 < 0 ? -1 : 1;
            if ( !v16 )
              break;
          }
          ++v14;
          v15 += 5;
          if ( v14 >= (unsigned int)v13 )
            goto LABEL_19;
        }
        v9 = a3;
        v18 = 5 * v14;
        v11 = a2;
        v17 = (int)*a2 + 4 * v18;
      }
      else
      {
LABEL_19:
        v11 = a2;
        v17 = 0;
        v9 = a3;
      }
    }
    else
    {
      v19 = 0;
      if ( v13 )
      {
        v20 = *a2;
        while ( *v20 != v12 )
        {
          ++v19;
          v20 += 20;
          if ( v19 >= (unsigned int)v13 )
            goto LABEL_25;
        }
        v17 = (int)*a2 + 20 * v19;
      }
      else
      {
LABEL_25:
        v17 = 0;
      }
    }
    if ( !v17 )
    {
      if ( !*((_BYTE *)v11 + 40) )
        return 0;
LABEL_43:
      sub_460A00(v11, a1, 1u);
    }
    v21 = (char *)(v10 + 2);
    if ( v24 == 45 )
      v21 += strlen(*(const char **)(v17 + 4));
    --v9;
    v22 = *(_DWORD *)(v17 + 16);
    v5 = ++a4;
    a3 = v9;
    if ( v22 == -1 )
      break;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        if ( *v21 )
          goto LABEL_35;
        if ( v9 <= 1 )
        {
          v11 = a2;
          goto LABEL_43;
        }
        v21 = (char *)v5[1];
        ++v5;
        --v9;
        a4 = v5;
        a3 = v9;
LABEL_35:
        (*(void (__cdecl **)(char *, int))(v17 + 12))(v21, a5);
      }
    }
    else
    {
      (*(void (__cdecl **)(_DWORD, int))(v17 + 12))(0, a5);
    }
  }
  (*(void (__cdecl **)(int, const char **, int))(v17 + 12))(v9, v5, a5);
  return v25 - v9;
}
