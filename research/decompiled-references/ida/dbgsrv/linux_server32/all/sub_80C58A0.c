/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C58A0
// Address: 0x080C58A0

//----- (080C58A0) --------------------------------------------------------
int __cdecl sub_80C58A0(int a1, int a2, const char **a3, int a4)
{
  const char *v4; // esi
  size_t v5; // eax
  size_t v6; // ebp
  const char **v7; // ebp
  const char *v8; // edi
  _BYTE *v9; // esi
  char *v10; // eax
  const char **v11; // ecx
  int v12; // ebx
  int v13; // edx
  int v15; // eax
  unsigned int v16; // edx
  void *v17; // eax
  int v18; // [esp+0h] [ebp-24h]
  const char **v19; // [esp+0h] [ebp-24h]
  unsigned int v20; // [esp+0h] [ebp-24h]

  v4 = *a3;
  if ( *a3 && (v5 = strlen(*a3), (v6 = v5) != 0) )
  {
    v16 = v5 + 1;
    v17 = *(void **)(a1 + 12);
    if ( *(_DWORD *)(a1 + 20) < v16 )
    {
      v20 = v16;
      v17 = sub_80CF920(a1 + 12, v17, v16, 1u);
      v16 = v20;
      *(_DWORD *)(a1 + 12) = v17;
    }
    *(_DWORD *)(a1 + 16) = v16;
    memmove(v17, v4, v6);
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v6) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  if ( a2 > 1 )
  {
    v18 = a2;
    v7 = a3;
    while ( 1 )
    {
      v8 = v7[1];
      if ( (*v8 & 0xFD) != 0x2D )
        return a2 - v18;
      if ( v8[1] == 45 )
      {
        v15 = sub_80C54B0((int *)a1, (char *)v8 + 2);
        v9 = (_BYTE *)v15;
        if ( !v15 )
        {
LABEL_27:
          if ( *(_BYTE *)(a1 + 40) )
LABEL_30:
            sub_80C5520((_DWORD *)a1, 1);
          return 0;
        }
        v10 = (char *)&v8[strlen(*(const char **)(v15 + 4)) + 2];
      }
      else
      {
        v9 = sub_80C5470(a1, v8[1]);
        if ( !v9 )
          goto LABEL_27;
        v10 = (char *)(v8 + 2);
      }
      v11 = v7 + 1;
      v12 = v18 - 1;
      v13 = *((_DWORD *)v9 + 4);
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          if ( v13 == -1 )
          {
            (*((void (__cdecl **)(int, const char **, int))v9 + 3))(v18 - 1, v7 + 1, a4);
            return a2 - v12;
          }
          goto LABEL_19;
        }
        if ( !*v10 )
        {
          if ( v18 == 2 )
            goto LABEL_30;
          v10 = (char *)v7[2];
          v11 = v7 + 2;
          v12 = v18 - 2;
        }
        v19 = v11;
        (*((void (__cdecl **)(char *, int))v9 + 3))(v10, a4);
      }
      else
      {
        v19 = v7 + 1;
        (*((void (__cdecl **)(_DWORD, int))v9 + 3))(0, a4);
      }
      v11 = v19;
LABEL_19:
      v18 = v12;
      v7 = v11;
      if ( v12 == 1 )
        return a2 - 1;
    }
  }
  return 0;
}
