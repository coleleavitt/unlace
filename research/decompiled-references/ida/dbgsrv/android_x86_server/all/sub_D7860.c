/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7860
// Address: 0x000D7860

//----- (000D7860) --------------------------------------------------------
char *__cdecl sub_D7860(int a1, char **a2)
{
  int *v2; // esi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  _BYTE *v6; // esi
  int *v7; // esi
  char *v8; // ecx
  unsigned int v9; // eax
  char *v10; // eax
  size_t v11; // eax
  int v12; // eax
  const void *v13; // esi
  size_t v14; // edi
  unsigned int v15; // ecx
  char *v16; // ecx
  size_t v17; // ecx
  int v18; // edi
  unsigned int v19; // ecx
  char *result; // eax
  size_t v21; // ecx
  char *v22; // eax
  size_t v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  size_t v27; // eax
  size_t v28; // edx
  size_t v29; // eax
  char *v30; // eax
  size_t v31; // eax
  char *v32; // eax
  unsigned int v33; // ecx
  char *v34; // ecx
  size_t v35; // ecx
  int *v36; // [esp+4h] [ebp-18h]
  const void *v37; // [esp+4h] [ebp-18h]
  _BYTE *v38; // [esp+4h] [ebp-18h]
  size_t v39; // [esp+8h] [ebp-14h]

  if ( *(_BYTE *)(a1 + 20) )
  {
    v2 = (int *)(a2 + 1);
    v3 = a2[1];
    v4 = (unsigned int)a2[2];
    if ( (unsigned int)(v3 + 13) >= v4 )
    {
      v11 = 2 * v4;
      if ( v11 < (unsigned int)(v3 + 13) )
        v11 = (size_t)(v3 + 13);
      a2[2] = (char *)v11;
      v5 = (char *)realloc(*a2, v11);
      *a2 = v5;
      v3 = a2[1];
    }
    else
    {
      v5 = *a2;
    }
    qmemcpy(&v3[(_DWORD)v5], "pixel vector[", 13);
    v12 = *v2 + 13;
    v36 = (int *)(a2 + 1);
    *v2 = v12;
    v13 = *(const void **)(a1 + 12);
    v14 = *(_DWORD *)(a1 + 16) - (_DWORD)v13;
    if ( v14 )
    {
      v15 = (unsigned int)a2[2];
      if ( v12 + v14 >= v15 )
      {
        v17 = 2 * v15;
        if ( v17 < v12 + v14 )
          v17 = v12 + v14;
        a2[2] = (char *)v17;
        v16 = (char *)realloc(*a2, v17);
        *a2 = v16;
        v12 = (int)a2[1];
      }
      else
      {
        v16 = *a2;
      }
      memmove(&v16[v12], v13, v14);
      v18 = *v36 + v14;
      *v36 = v18;
      v12 = v18;
    }
    v19 = (unsigned int)a2[2];
    if ( v12 + 1 >= v19 )
    {
      v21 = 2 * v19;
      if ( v21 < v12 + 1 )
        v21 = v12 + 1;
      a2[2] = (char *)v21;
      v22 = (char *)realloc(*a2, v21);
      *a2 = v22;
      result = &v22[(_DWORD)a2[1]];
      v7 = (int *)(a2 + 1);
    }
    else
    {
      result = &(*a2)[v12];
      v7 = (int *)(a2 + 1);
    }
  }
  else
  {
    v6 = *(_BYTE **)(a1 + 8);
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 12))(v6, a2);
    if ( v6[5] != 1 )
      (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 16))(v6, a2);
    v7 = (int *)(a2 + 1);
    v8 = a2[1];
    v9 = (unsigned int)a2[2];
    if ( (unsigned int)(v8 + 8) >= v9 )
    {
      v23 = 2 * v9;
      if ( v23 < (unsigned int)(v8 + 8) )
        v23 = (size_t)(v8 + 8);
      a2[2] = (char *)v23;
      v10 = (char *)realloc(*a2, v23);
      *a2 = v10;
      v8 = a2[1];
    }
    else
    {
      v10 = *a2;
    }
    *(_DWORD *)&v8[(_DWORD)v10 + 4] = 1534226292;
    *(_DWORD *)&v8[(_DWORD)v10] = 1667593760;
    v24 = *v7 + 8;
    *v7 = v24;
    v25 = *(_DWORD *)(a1 + 12);
    if ( v25 )
    {
      v26 = *(_DWORD *)(a1 + 16);
      if ( v26 )
      {
        v27 = v26 - v25;
        if ( v27 )
        {
          v37 = *(const void **)(a1 + 12);
          v39 = v27;
          v28 = v24 + v27;
          v29 = (size_t)a2[2];
          if ( v28 >= v29 )
          {
            v31 = 2 * v29;
            if ( v31 < v28 )
              v31 = v28;
            a2[2] = (char *)v31;
            v30 = (char *)realloc(*a2, v31);
            *a2 = v30;
            v24 = (int)a2[1];
          }
          else
          {
            v30 = *a2;
          }
          memmove(&v30[v24], v37, v39);
          *v7 += v39;
        }
      }
      else
      {
        v38 = *(_BYTE **)(a1 + 12);
        (*(void (__cdecl **)(int, char **))(*(_DWORD *)v25 + 12))(v25, a2);
        if ( v38[5] != 1 )
          (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v38 + 16))(v38, a2);
      }
    }
    v32 = a2[1];
    v33 = (unsigned int)a2[2];
    if ( (unsigned int)(v32 + 1) >= v33 )
    {
      v35 = 2 * v33;
      if ( v35 < (unsigned int)(v32 + 1) )
        v35 = (size_t)(v32 + 1);
      a2[2] = (char *)v35;
      v34 = (char *)realloc(*a2, v35);
      *a2 = v34;
      v32 = a2[1];
    }
    else
    {
      v34 = *a2;
    }
    result = &v32[(_DWORD)v34];
  }
  *result = 93;
  ++*v7;
  return result;
}
