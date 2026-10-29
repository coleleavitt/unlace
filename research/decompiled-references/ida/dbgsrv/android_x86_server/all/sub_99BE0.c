/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99BE0
// Address: 0x00099BE0

//----- (00099BE0) --------------------------------------------------------
const char *__cdecl sub_99BE0(int a1, int a2, char *s, int a4)
{
  size_t v4; // eax
  const char *v5; // esi
  int v6; // ecx
  int v7; // edi
  char *v8; // edi
  char *v9; // eax
  char *v10; // ecx
  size_t v11; // edi
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  bool v18; // cf
  void **v19; // eax
  int v20; // ecx
  void **v21; // edi
  _BYTE *v22; // eax
  bool v23; // cl
  int v24; // edx
  size_t v25; // edx
  int v26; // ecx
  const char *result; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // [esp+10h] [ebp-2Ch]
  size_t v32; // [esp+14h] [ebp-28h]
  int v33; // [esp+18h] [ebp-24h]
  size_t v34; // [esp+1Ch] [ebp-20h]
  char *v35; // [esp+20h] [ebp-1Ch]
  const char *v36; // [esp+24h] [ebp-18h]
  size_t v37; // [esp+28h] [ebp-14h]

  v4 = strlen(s);
  v5 = *(const char **)a1;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  v8 = (char *)&v5[v7];
  if ( v5 < v8 )
  {
    v37 = v4;
    v36 = v8;
    do
    {
      v9 = strstr(v5, s);
      v10 = v9;
      if ( v9 )
        v8 = v9;
      v11 = v8 - v5;
      if ( (a4 & 1) == 0 || v11 )
      {
        v32 = v11;
        v35 = v9;
        v12 = a2;
        v13 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v13 + 1) )
        {
          v14 = *(_DWORD **)a2;
        }
        else
        {
          v14 = qvector_reserve(a2, *(void **)a2, v13 + 1, 0xCu);
          v12 = a2;
          *(_DWORD *)a2 = v14;
          v13 = *(_DWORD *)(a2 + 4);
        }
        v15 = 3 * v13;
        v14[v15] = 0;
        v14[v15 + 1] = 0;
        v14[v15 + 2] = 0;
        ++*(_DWORD *)(v12 + 4);
        v16 = v14[v15 + 1];
        v17 = v16 - 1;
        if ( !v16 )
          v17 = 0;
        v31 = v17 + v32 + 1;
        v18 = v14[v15 + 2] < v31;
        v19 = (void **)&v14[v15];
        v20 = v17;
        v34 = v17 + v32;
        v21 = v19;
        if ( v18 )
        {
          v33 = v20;
          v22 = qvector_reserve((int)v19, *v19, v31, 1u);
          v20 = v33;
          *v21 = v22;
        }
        else
        {
          v22 = *v19;
        }
        v21[1] = (void *)v31;
        v22[v34] = 0;
        memmove((char *)*v21 + v20, v5, v32);
        v10 = v35;
      }
      v4 = v37;
      v5 = &v10[v37];
      v8 = (char *)v36;
      if ( !v10 )
        v5 = v36;
    }
    while ( v5 < v36 );
  }
  v23 = 1;
  if ( !s )
  {
    v24 = a2;
    goto LABEL_30;
  }
  v24 = a2;
  if ( v4 == -1 )
  {
    v4 = strlen(s);
    v23 = 1;
    v24 = a2;
  }
  if ( !v4 )
    goto LABEL_30;
  v25 = v4;
  v26 = *(_DWORD *)(a1 + 4);
  result = (const char *)(v26 - 1);
  if ( !v26 )
    result = nullptr;
  if ( (unsigned int)result >= v25 )
  {
    v28 = strncmp(&result[*(_DWORD *)a1 - v25], s, v25);
    v24 = a2;
    v23 = v28 == 0;
LABEL_30:
    result = (const char *)a4;
    if ( (a4 & 1) == 0 && v23 )
    {
      v29 = *(_DWORD *)(v24 + 4);
      if ( *(_DWORD *)(v24 + 8) >= (unsigned int)(v29 + 1) )
      {
        result = *(const char **)v24;
      }
      else
      {
        result = (const char *)qvector_reserve(v24, *(void **)v24, v29 + 1, 0xCu);
        v24 = a2;
        *(_DWORD *)a2 = result;
        v29 = *(_DWORD *)(a2 + 4);
      }
      v30 = 3 * v29;
      *(_DWORD *)&result[4 * v30] = 0;
      *(_DWORD *)&result[4 * v30 + 4] = 0;
      *(_DWORD *)&result[4 * v30 + 8] = 0;
      ++*(_DWORD *)(v24 + 4);
    }
  }
  return result;
}
