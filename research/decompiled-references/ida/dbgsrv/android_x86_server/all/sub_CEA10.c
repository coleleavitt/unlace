/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEA10
// Address: 0x000CEA10

//----- (000CEA10) --------------------------------------------------------
void *__cdecl sub_CEA10(int a1, void **a2)
{
  void **v2; // esi
  int v3; // edi
  char *v4; // ecx
  unsigned int v5; // eax
  void *v6; // eax
  size_t v7; // eax
  int v8; // ecx
  void **v9; // eax
  const void *v10; // esi
  size_t v11; // edi
  unsigned int v12; // eax
  char *v13; // eax
  size_t v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  _BYTE *v17; // eax
  size_t v18; // eax
  _BYTE *v19; // ecx
  unsigned int v20; // eax
  void *v21; // eax
  size_t v22; // esi
  char *v23; // ecx
  unsigned int v24; // eax
  char *v25; // eax
  size_t v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // esi
  const void *v31; // esi
  size_t v32; // edi
  unsigned int v33; // eax
  char *v34; // eax
  size_t v35; // eax
  size_t v36; // eax
  void *result; // eax
  size_t v38; // esi
  char *v39; // ecx
  unsigned int v40; // eax
  char *v41; // eax
  size_t v42; // eax
  const void *v43; // [esp+8h] [ebp-14h]
  const void *v44; // [esp+8h] [ebp-14h]

  v2 = a2;
  v3 = a1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >= 4 )
  {
    v4 = (char *)a2[1];
    v5 = (unsigned int)a2[2];
    if ( (unsigned int)(v4 + 1) >= v5 )
    {
      v7 = 2 * v5;
      if ( v7 < (unsigned int)(v4 + 1) )
        v7 = (size_t)(v4 + 1);
      a2[2] = (void *)v7;
      v6 = realloc(*a2, v7);
      *a2 = v6;
      v4 = (char *)a2[1];
    }
    else
    {
      v6 = *a2;
    }
    v4[(_DWORD)v6] = 40;
    v8 = (int)a2[1] + 1;
    a2[1] = (void *)v8;
    v9 = a2;
    v10 = *(const void **)(a1 + 8);
    v11 = *(_DWORD *)(a1 + 12) - (_DWORD)v10;
    if ( v11 )
    {
      v12 = (unsigned int)a2[2];
      if ( v8 + v11 >= v12 )
      {
        v14 = 2 * v12;
        if ( v14 < v8 + v11 )
          v14 = v8 + v11;
        a2[2] = (void *)v14;
        v13 = (char *)realloc(*a2, v14);
        *a2 = v13;
        v8 = (int)a2[1];
      }
      else
      {
        v13 = (char *)*a2;
      }
      memmove(&v13[v8], v10, v11);
      v9 = a2;
      v15 = (int)a2[1] + v11;
      a2[1] = (void *)v15;
      v8 = v15;
    }
    v2 = v9;
    v16 = (unsigned int)v9[2];
    v3 = a1;
    if ( v8 + 1 >= v16 )
    {
      v18 = 2 * v16;
      if ( v18 < v8 + 1 )
        v18 = v8 + 1;
      v2[2] = (void *)v18;
      v17 = realloc(*v2, v18);
      *v2 = v17;
      v8 = (int)v2[1];
    }
    else
    {
      v17 = *v2;
    }
    v17[v8] = 41;
    v2[1] = (char *)v2[1] + 1;
  }
  if ( **(_BYTE **)(v3 + 16) == 110 )
  {
    v19 = v2[1];
    v20 = (unsigned int)v2[2];
    if ( (unsigned int)(v19 + 1) >= v20 )
    {
      v26 = 2 * v20;
      if ( v26 < (unsigned int)(v19 + 1) )
        v26 = (size_t)(v19 + 1);
      v2[2] = (void *)v26;
      v21 = realloc(*v2, v26);
      *v2 = v21;
      v19 = v2[1];
    }
    else
    {
      v21 = *v2;
    }
    v19[(_DWORD)v21] = 45;
    v27 = (int)v2[1] + 1;
    v2[1] = (void *)v27;
    v28 = *(_DWORD *)(v3 + 16);
    v29 = *(_DWORD *)(v3 + 20);
    v30 = v29 - v28 - 1;
    if ( (unsigned int)(v29 - v28) > 1 )
      v30 = 1;
    v31 = (const void *)(v28 + v30);
    v32 = v29 - (_DWORD)v31;
    if ( v32 )
    {
      v33 = (unsigned int)a2[2];
      if ( v27 + v32 >= v33 )
      {
        v36 = 2 * v33;
        if ( v36 < v27 + v32 )
          v36 = v27 + v32;
        a2[2] = (void *)v36;
        v34 = (char *)realloc(*a2, v36);
        *a2 = v34;
        v27 = (int)a2[1];
      }
      else
      {
        v34 = (char *)*a2;
      }
      memmove(&v34[v27], v31, v32);
      a2[1] = (char *)a2[1] + v32;
    }
  }
  else
  {
    v22 = *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 16);
    if ( v22 )
    {
      v43 = *(const void **)(v3 + 16);
      v23 = (char *)a2[1];
      v24 = (unsigned int)a2[2];
      if ( (unsigned int)&v23[v22] >= v24 )
      {
        v35 = 2 * v24;
        if ( v35 < (unsigned int)&v23[v22] )
          v35 = (size_t)&v23[v22];
        a2[2] = (void *)v35;
        v25 = (char *)realloc(*a2, v35);
        *a2 = v25;
        v23 = (char *)a2[1];
      }
      else
      {
        v25 = (char *)*a2;
      }
      memmove(&v23[(_DWORD)v25], v43, v22);
      a2[1] = (char *)a2[1] + v22;
    }
  }
  result = (void *)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8));
  if ( (unsigned int)result <= 3 )
  {
    result = *(void **)(a1 + 8);
    v38 = *(_DWORD *)(a1 + 12) - (_DWORD)result;
    if ( v38 )
    {
      v44 = *(const void **)(a1 + 8);
      v39 = (char *)a2[1];
      v40 = (unsigned int)a2[2];
      if ( (unsigned int)&v39[v38] >= v40 )
      {
        v42 = 2 * v40;
        if ( v42 < (unsigned int)&v39[v38] )
          v42 = (size_t)&v39[v38];
        a2[2] = (void *)v42;
        v41 = (char *)realloc(*a2, v42);
        *a2 = v41;
        v39 = (char *)a2[1];
      }
      else
      {
        v41 = (char *)*a2;
      }
      result = memmove(&v39[(_DWORD)v41], v44, v38);
      a2[1] = (char *)a2[1] + v38;
    }
  }
  return result;
}
