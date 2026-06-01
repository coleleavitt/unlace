/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55CF0
// Address: 0x00055CF0

//----- (00055CF0) --------------------------------------------------------
size_t __cdecl sub_55CF0(_DWORD *a1, char *s, char *a3)
{
  size_t result; // eax
  unsigned int v4; // esi
  char *v5; // edi
  int v6; // eax
  int v7; // esi
  void **v8; // ebx
  void *v9; // eax
  void *v10; // eax
  char *v11; // esi
  _DWORD *v12; // ecx
  const char *v13; // edx
  int v14; // edi
  size_t *v15; // edx
  char *v16; // ecx
  unsigned int v17; // esi
  bool v18; // cf
  void *v19; // eax
  char *v20; // edx
  void **v21; // ebx
  char *v22; // ecx
  unsigned int v23; // esi
  void *v24; // eax
  size_t *v25; // [esp+Ch] [ebp-20h]
  size_t v26; // [esp+Ch] [ebp-20h]
  int v27; // [esp+10h] [ebp-1Ch]
  size_t v28; // [esp+10h] [ebp-1Ch]
  char *v29; // [esp+14h] [ebp-18h]
  char *v30; // [esp+14h] [ebp-18h]
  char *v31; // [esp+14h] [ebp-18h]
  int v32; // [esp+18h] [ebp-14h]

  result = a1[12];
  v4 = a1[13];
  if ( v4 >= result + 1 )
  {
    v11 = (char *)a1[11];
    v12 = a1;
  }
  else
  {
    v29 = (char *)qvector_reserve((int)(a1 + 11), nullptr, result + 1, 0x18u);
    v32 = a1[13];
    a1[13] = v4;
    v5 = (char *)a1[11];
    v6 = a1[12] - 1;
    if ( v6 >= 0 )
    {
      v7 = 0;
      v8 = (void **)(a1 + 11);
      do
      {
        v27 = v6;
        *(_DWORD *)&v29[v7] = *(_DWORD *)&v5[v7];
        *(_DWORD *)&v5[v7] = 0;
        *(_DWORD *)&v29[v7 + 4] = *(_DWORD *)&v5[v7 + 4];
        *(_DWORD *)&v5[v7 + 4] = 0;
        *(_DWORD *)&v29[v7 + 8] = *(_DWORD *)&v5[v7 + 8];
        *(_DWORD *)&v5[v7 + 8] = 0;
        *(_DWORD *)&v29[v7 + 12] = *(_DWORD *)&v5[v7 + 12];
        *(_DWORD *)&v5[v7 + 12] = 0;
        *(_DWORD *)&v29[v7 + 16] = *(_DWORD *)&v5[v7 + 16];
        *(_DWORD *)&v5[v7 + 16] = 0;
        *(_DWORD *)&v29[v7 + 20] = *(_DWORD *)&v5[v7 + 20];
        *(_DWORD *)&v5[v7 + 20] = 0;
        v9 = *(void **)&v5[v7 + 12];
        if ( v9 )
        {
          *(_DWORD *)&v5[v7 + 16] = 0;
          qfree(v9);
          *(_DWORD *)&v5[v7 + 12] = 0;
          *(_DWORD *)&v5[v7 + 20] = 0;
          v8 = (void **)(a1 + 11);
        }
        v10 = *(void **)&v5[v7];
        if ( v10 )
        {
          *(_DWORD *)&v5[v7 + 4] = 0;
          qfree(v10);
          *(_DWORD *)&v5[v7] = 0;
          *(_DWORD *)&v5[v7 + 8] = 0;
          v8 = (void **)(a1 + 11);
        }
        v7 += 24;
        v6 = v27 - 1;
      }
      while ( v27 - 1 >= 0 );
      v5 = (char *)*v8;
    }
    qfree(v5);
    v11 = v29;
    v12 = a1;
    a1[11] = v29;
    a1[13] = v32;
    result = a1[12];
  }
  v13 = a3;
  v14 = 3 * result;
  *(_DWORD *)&v11[8 * v14 + 4] = 0;
  *(_DWORD *)&v11[8 * v14] = 0;
  *(_DWORD *)&v11[8 * v14 + 12] = 0;
  *(_DWORD *)&v11[8 * v14 + 8] = 0;
  *(_DWORD *)&v11[8 * v14 + 20] = 0;
  *(_DWORD *)&v11[8 * v14 + 16] = 0;
  ++v12[12];
  if ( s && (result = strlen(s), v13 = a3, result) )
  {
    v15 = (size_t *)&v11[8 * v14];
    v16 = v11;
    v28 = result;
    v17 = result + 1;
    v30 = v16;
    v18 = *(_DWORD *)&v16[8 * v14 + 8] < result + 1;
    v19 = (void *)*v15;
    v25 = v15;
    if ( v18 )
    {
      v19 = qvector_reserve((int)v15, v19, v17, 1u);
      *v25 = (size_t)v19;
    }
    *(_DWORD *)&v30[8 * v14 + 4] = v17;
    v11 = v30;
    memmove(v19, s, v28);
    result = *v25;
    *(_BYTE *)(*v25 + v28) = 0;
    v13 = a3;
    if ( !a3 )
      goto LABEL_22;
  }
  else
  {
    *(_DWORD *)&v11[8 * v14 + 4] = 0;
    if ( !v13 )
      goto LABEL_22;
  }
  result = strlen(v13);
  v20 = a3;
  if ( !result )
  {
LABEL_22:
    *(_DWORD *)&v11[8 * v14 + 16] = 0;
    return result;
  }
  v21 = (void **)&v11[8 * v14 + 12];
  v22 = v11;
  v26 = result;
  v23 = result + 1;
  v31 = v22;
  if ( *(_DWORD *)&v22[8 * v14 + 20] >= result + 1 )
  {
    v24 = *v21;
  }
  else
  {
    v24 = qvector_reserve((int)v21, *v21, v23, 1u);
    v20 = a3;
    *v21 = v24;
  }
  *(_DWORD *)&v31[8 * v14 + 16] = v23;
  memmove(v24, v20, v26);
  result = (size_t)*v21;
  *((_BYTE *)*v21 + v26) = 0;
  return result;
}
