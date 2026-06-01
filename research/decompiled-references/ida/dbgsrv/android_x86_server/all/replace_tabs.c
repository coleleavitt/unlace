/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: replace_tabs
// Address: 0x000B37E0

//----- (000B37E0) --------------------------------------------------------
char __cdecl replace_tabs(_DWORD *a1, char *s, unsigned int a3)
{
  const char *v3; // ecx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  const char *v7; // edi
  char *v8; // eax
  char *v9; // esi
  char **v10; // edx
  void *v11; // eax
  int v12; // ecx
  const void *v13; // ebx
  int v14; // edi
  unsigned int v15; // esi
  const void *v16; // ecx
  char **v17; // esi
  char *v18; // edi
  char **v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // esi
  char v22; // al
  size_t v23; // ecx
  int v24; // eax
  int v25; // edi
  _BYTE *v26; // eax
  char i; // [esp+Ch] [ebp-30h]
  size_t v29; // [esp+Ch] [ebp-30h]
  char v30; // [esp+Ch] [ebp-30h]
  char *v31; // [esp+14h] [ebp-28h]
  const char *v32; // [esp+14h] [ebp-28h]
  size_t v33; // [esp+18h] [ebp-24h]
  int v34; // [esp+1Ch] [ebp-20h]
  unsigned int v35; // [esp+1Ch] [ebp-20h]
  char *v36; // [esp+20h] [ebp-1Ch]
  size_t v37; // [esp+20h] [ebp-1Ch]
  char v38; // [esp+27h] [ebp-15h] BYREF
  unsigned int v39; // [esp+28h] [ebp-14h]

  v3 = s;
  v39 = __readgsdword(0x14u);
  if ( !s )
  {
    v22 = 0;
    return v22 & 1;
  }
  v4 = a1;
  if ( !a3 )
  {
    v22 = 0;
LABEL_20:
    v30 = v22;
    v32 = v3;
    v23 = strlen(v3);
    v24 = v4[1];
    v25 = v24 - 1;
    if ( !v24 )
      v25 = 0;
    v37 = v25 + v23;
    v35 = v25 + v23 + 1;
    if ( v4[2] >= v35 )
    {
      v26 = (_BYTE *)*v4;
    }
    else
    {
      v33 = v23;
      v26 = qvector_reserve((int)v4, (void *)*v4, v25 + v23 + 1, 1u);
      v23 = v33;
      *v4 = v26;
    }
    v4[1] = v35;
    v26[v37] = 0;
    memmove((void *)(*v4 + v25), v32, v23);
    v22 = v30;
    return v22 & 1;
  }
  v5 = a1[1];
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  v34 = v6;
  for ( i = 0; ; i = 1 )
  {
    v7 = v3;
    v8 = strchr(v3, 9);
    if ( !v8 )
      break;
    v31 = v8;
    v9 = (char *)(v8 - v7);
    v10 = (char **)a1;
    v11 = (void *)*a1;
    v12 = a1[1];
    v13 = v7;
    v14 = v12 - 1;
    if ( !v12 )
      v14 = 0;
    v36 = &v9[v14];
    v29 = (size_t)v9;
    v15 = (unsigned int)&v9[v14 + 1];
    v16 = v13;
    if ( a1[2] < v15 )
    {
      v11 = qvector_reserve((int)a1, v11, v15, 1u);
      v10 = (char **)a1;
      v16 = v13;
      *a1 = v11;
    }
    v10[1] = (char *)v15;
    v36[(_DWORD)v11] = 0;
    v17 = v10;
    memmove(&(*v10)[v14], v16, v29);
    v18 = v17[1];
    v19 = v17;
    v20 = (unsigned int)(v18 - 1);
    if ( v18 )
      --v18;
    v21 = (unsigned int)&v18[a3 - (unsigned int)&v18[-v34] % a3];
    v38 = 32;
    if ( v20 < v21 )
      (*v19)[v20] = 32;
    sub_44400(v19, v21 + 1, &v38);
    (*v19)[v21] = 0;
    v3 = v31 + 1;
  }
  v3 = v7;
  v22 = i;
  v4 = a1;
  if ( v7 )
    goto LABEL_20;
  return v22 & 1;
}
