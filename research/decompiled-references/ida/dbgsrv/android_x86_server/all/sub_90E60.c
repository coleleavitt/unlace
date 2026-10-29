/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90E60
// Address: 0x00090E60

//----- (00090E60) --------------------------------------------------------
char *__cdecl sub_90E60(signed int a1, unsigned int *a2)
{
  _DWORD *v2; // eax
  int i; // esi
  void *v5; // eax
  int v6; // esi
  char *v7; // edx
  void *v8; // eax
  int v9; // esi
  int v10; // eax
  const char *v11; // esi
  _BYTE *v12; // eax
  bool v13; // zf
  size_t v14; // eax
  int v15; // edi
  void **v16; // esi
  size_t v17; // ecx
  _BYTE *v18; // eax
  size_t v19; // eax
  char *v20; // [esp+0h] [ebp-2Ch]
  int v21; // [esp+4h] [ebp-28h]
  void **v22; // [esp+4h] [ebp-28h]
  int v23; // [esp+8h] [ebp-24h]
  const char *v24; // [esp+8h] [ebp-24h]
  size_t v25; // [esp+Ch] [ebp-20h]
  unsigned int v26; // [esp+Ch] [ebp-20h]
  const char *v27; // [esp+10h] [ebp-1Ch]
  size_t v28; // [esp+10h] [ebp-1Ch]
  size_t v29; // [esp+14h] [ebp-18h]

  if ( a1 <= 0 )
    return nullptr;
  if ( (unsigned int)a1 > 0x7FFFFFF )
  {
    v20 = (char *)qalloc_or_throw(0x7FFFFFFF);
  }
  else
  {
    v2 = operator new[](saturated_mul(0x20u, a1));
    *v2 = a1;
    v20 = (char *)(v2 + 1);
    memset(v2 + 1, 0, 32 * a1);
  }
  for ( i = 0; i != a1; i = v6 + 1 )
  {
    v23 = i;
    v9 = 32 * i;
    *(_DWORD *)&v20[v9] = unpack_dd(a2, a2[1]);
    v10 = unpack_dd(a2, a2[1]);
    v7 = v20;
    v21 = v9;
    *(_DWORD *)&v20[v9 + 4] = v10;
    v11 = (const char *)*a2;
    v12 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned int)v12 >= a2[1] )
        goto LABEL_18;
      v13 = *v12++ == 0;
    }
    while ( !v13 );
    *a2 = (unsigned int)v12;
    if ( !v11 || (v14 = strlen(v11), v7 = v20, !v14) )
    {
LABEL_18:
      v15 = v21;
      *(_DWORD *)&v7[v21 + 12] = 0;
      v6 = v23;
      goto LABEL_19;
    }
    v27 = v11;
    v15 = v21;
    v16 = (void **)&v20[v21 + 8];
    v25 = v14;
    v17 = v14 + 1;
    if ( *(_DWORD *)&v20[v21 + 16] >= v14 + 1 )
    {
      v5 = *v16;
    }
    else
    {
      v29 = v14 + 1;
      v5 = qvector_reserve((int)&v20[v21 + 8], *v16, v14 + 1, 1u);
      v17 = v29;
      v7 = v20;
      *v16 = v5;
    }
    v6 = v23;
    *(_DWORD *)&v7[v21 + 12] = v17;
    memmove(v5, v27, v25);
    v7 = v20;
    *(_BYTE *)(*(_DWORD *)&v20[v21 + 8] + v25) = 0;
LABEL_19:
    v18 = (_BYTE *)*a2;
    v24 = (const char *)*a2;
    do
    {
      if ( (unsigned int)v18 >= a2[1] )
        goto LABEL_26;
      v13 = *v18++ == 0;
    }
    while ( !v13 );
    *a2 = (unsigned int)v18;
    if ( !v24 || (v19 = strlen(v24), v7 = v20, !v19) )
    {
LABEL_26:
      *(_DWORD *)&v7[v15 + 24] = 0;
      continue;
    }
    v22 = (void **)&v20[v15 + 20];
    v28 = v19;
    v26 = v19 + 1;
    if ( *(_DWORD *)&v20[v15 + 28] >= v19 + 1 )
    {
      v8 = *v22;
    }
    else
    {
      v8 = qvector_reserve((int)v22, *v22, v26, 1u);
      v7 = v20;
      *v22 = v8;
    }
    *(_DWORD *)&v7[v15 + 24] = v26;
    memmove(v8, v24, v28);
    *((_BYTE *)*v22 + v28) = 0;
  }
  return v20;
}
