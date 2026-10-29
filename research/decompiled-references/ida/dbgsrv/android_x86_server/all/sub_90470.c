/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90470
// Address: 0x00090470

//----- (00090470) --------------------------------------------------------
char *__cdecl sub_90470(char **a1, unsigned int *a2)
{
  char *result; // eax
  int v3; // ecx
  int v4; // edx
  void *v5; // eax
  char *v6; // esi
  char *v7; // eax
  char *v8; // edi
  int v9; // esi
  const char *v10; // edx
  _BYTE *v11; // eax
  size_t v13; // eax
  const char *v14; // edx
  void **v15; // esi
  size_t v16; // edi
  size_t *v17; // ecx
  char *v18; // [esp+8h] [ebp-24h]
  const char *v19; // [esp+Ch] [ebp-20h]
  size_t v20; // [esp+10h] [ebp-1Ch]
  char *v21; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]

  result = (char *)unpack_dd(a2, a2[1]);
  v21 = result;
  if ( result )
  {
    v3 = (int)a1;
    v4 = 0;
    do
    {
      v6 = *(char **)(v3 + 4);
      v22 = v4;
      if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v6 + 1) )
      {
        v8 = *(char **)v3;
      }
      else
      {
        v7 = (char *)qvector_reserve(v3, *(void **)v3, (unsigned int)(v6 + 1), 0x10u);
        v3 = (int)a1;
        v8 = v7;
        *a1 = v7;
        v6 = a1[1];
      }
      v9 = 16 * (_DWORD)v6;
      *(_DWORD *)&v8[v9 + 4] = 0;
      v18 = &v8[v9 + 8];
      *(_DWORD *)v18 = 0;
      *(_DWORD *)&v8[v9 + 12] = 0;
      ++*(_DWORD *)(v3 + 4);
      *(_DWORD *)&v8[v9] = unpack_dd(a2, a2[1]);
      v10 = (const char *)*a2;
      v11 = (_BYTE *)*a2;
      do
      {
        if ( (unsigned int)v11 >= a2[1] )
          goto LABEL_15;
      }
      while ( *v11++ != 0 );
      *a2 = (unsigned int)v11;
      if ( !v10 || (v19 = v10, v13 = strlen(v10), v14 = v19, !v13) )
      {
LABEL_15:
        result = &v8[v9 + 8];
        *(_DWORD *)v18 = 0;
        goto LABEL_16;
      }
      v15 = (void **)&v8[v9 + 4];
      v16 = v13 + 1;
      v17 = (size_t *)v18;
      v20 = v13;
      if ( *((_DWORD *)v18 + 1) >= v13 + 1 )
      {
        v5 = *v15;
      }
      else
      {
        v5 = qvector_reserve((int)v15, *v15, v13 + 1, 1u);
        v14 = v19;
        v17 = (size_t *)v18;
        *v15 = v5;
      }
      *v17 = v16;
      memmove(v5, v14, v20);
      result = (char *)*v15;
      *((_BYTE *)*v15 + v20) = 0;
LABEL_16:
      v4 = v22 + 1;
      v3 = (int)a1;
    }
    while ( (char *)(v22 + 1) != v21 );
  }
  return result;
}
