/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x0009F760

//----- (0009F760) --------------------------------------------------------
int __cdecl cliopts_t_apply(int a1, int a2, const char **a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  const char *v6; // esi
  size_t v7; // eax
  size_t v8; // edx
  void **v9; // eax
  size_t v10; // edi
  void *v11; // eax
  size_t v12; // esi
  int v13; // eax
  const char *v14; // edx
  int v15; // esi
  unsigned int v16; // edi
  const char *v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char *v20; // edi
  char *v21; // edx
  int v22; // eax
  int v23; // edi
  const char *v25; // [esp-Ch] [ebp-38h]
  size_t v26; // [esp+4h] [ebp-28h]
  unsigned int v27; // [esp+4h] [ebp-28h]
  int v28; // [esp+4h] [ebp-28h]
  char v29; // [esp+8h] [ebp-24h]
  const char **v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  const char **v32; // [esp+10h] [ebp-1Ch]
  const char *v33; // [esp+18h] [ebp-14h]

  v4 = a2;
  v5 = a1;
  v32 = a3;
  v6 = *a3;
  if ( *a3 && (v7 = strlen(*a3), v5 = a1, v7) )
  {
    v8 = v7;
    v9 = (void **)(a1 + 12);
    v10 = v8 + 1;
    if ( *(_DWORD *)(a1 + 20) >= v8 + 1 )
    {
      v11 = *v9;
    }
    else
    {
      v26 = v8;
      v11 = qvector_reserve(a1 + 12, *v9, v8 + 1, 1u);
      v8 = v26;
      v5 = a1;
      *(_DWORD *)(a1 + 12) = v11;
    }
    *(_DWORD *)(v5 + 16) = v10;
    v25 = v6;
    v12 = v8;
    memmove(v11, v25, v8);
    v5 = a1;
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v12) = 0;
    v4 = a2;
  }
  else
  {
    *(_DWORD *)(v5 + 16) = 0;
  }
  v13 = v4;
  if ( v4 < 2 )
    return v4 - v13;
  v31 = v4;
  while ( 1 )
  {
    v14 = v32[1];
    if ( (*v14 | 2) != 0x2F )
    {
      v13 = v31;
      return v4 - v13;
    }
    v33 = v32[1];
    v29 = v14[1];
    if ( v29 == 45 )
    {
      v27 = *(_DWORD *)(v5 + 4);
      if ( !v27 )
        break;
      v15 = *(_DWORD *)a1;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(const char **)(v15 + 4);
        if ( v17 )
        {
          if ( !strcmp(v17, v33 + 2) )
            break;
        }
        ++v16;
        v15 += 20;
        if ( v16 >= v27 )
          goto LABEL_38;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v5 + 4);
      if ( !v18 )
        break;
      v15 = *(_DWORD *)a1;
      v19 = 0;
      while ( *(_BYTE *)v15 != v29 )
      {
        ++v19;
        v15 += 20;
        if ( v19 >= v18 )
          goto LABEL_38;
      }
    }
    if ( !v15 )
      break;
    v20 = (char *)(v33 + 2);
    if ( v29 == 45 )
      v20 += strlen(*(const char **)(v15 + 4));
    v21 = v20;
    v4 = a2;
    v30 = v32 + 1;
    v28 = v31 - 1;
    v22 = *(_DWORD *)(v15 + 16);
    if ( !v22 )
    {
      (*(void (__cdecl **)(_DWORD, int))(v15 + 12))(0, a4);
LABEL_35:
      v5 = a1;
      goto LABEL_36;
    }
    if ( v22 == 1 )
    {
      if ( !*v21 )
      {
        if ( v28 <= 1 )
          cliopts_t_usage(a1, 1u);
        v21 = (char *)v32[2];
        v30 = v32 + 2;
        v28 = v31 - 2;
      }
      (*(void (__cdecl **)(char *, int))(v15 + 12))(v21, a4);
      goto LABEL_35;
    }
    v5 = a1;
    if ( v22 == -1 )
    {
      (*(void (__cdecl **)(int, const char **, int))(v15 + 12))(v28, v30, a4);
      v13 = v31 - 1;
      return v4 - v13;
    }
LABEL_36:
    v13 = v28;
    v31 = v28;
    v32 = v30;
    if ( v28 <= 1 )
      return v4 - v13;
  }
LABEL_38:
  v23 = 0;
  if ( *(_BYTE *)(a1 + 40) )
    cliopts_t_usage(a1, 1u);
  return v23;
}
