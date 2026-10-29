/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4A60
// Address: 0x000D4A60

//----- (000D4A60) --------------------------------------------------------
_BYTE *__cdecl sub_D4A60(int a1, void **a2)
{
  char *v2; // edx
  unsigned int v3; // eax
  size_t v4; // ecx
  int v5; // edi
  void *v6; // eax
  size_t v7; // eax
  int v8; // eax
  void **v9; // edx
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // eax
  char *v14; // eax
  int v15; // ecx
  size_t v16; // eax
  void **v17; // esi
  _BYTE *v18; // edi
  void **v19; // esi
  int v20; // ecx
  int v21; // esi
  void **v22; // esi
  size_t v23; // edx
  unsigned int v24; // eax
  _BYTE *result; // eax
  size_t v26; // eax
  int v27; // [esp+Ch] [ebp-20h]
  int v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h]

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  v4 = (size_t)(v2 + 1);
  v5 = a1;
  if ( (unsigned int)(v2 + 1) >= v3 )
  {
    v7 = 2 * v3;
    if ( v7 < v4 )
      v7 = (size_t)(v2 + 1);
    a2[2] = (void *)v7;
    v6 = realloc(*a2, v7);
    *a2 = v6;
    v2 = (char *)a2[1];
    v4 = (size_t)(v2 + 1);
  }
  else
  {
    v6 = *a2;
  }
  a2[1] = (void *)v4;
  v2[(_DWORD)v6] = 91;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v8 = (int)a2[1];
    v27 = v8;
    LOBYTE(v8) = 1;
    v9 = a2;
    v10 = 0;
    do
    {
      v29 = v8;
      v11 = (v8 & 1) == 0;
      v12 = v27;
      v28 = v10;
      if ( v11 )
      {
        v13 = (unsigned int)v9[2];
        if ( v27 + 2 >= v13 )
        {
          v16 = 2 * v13;
          if ( v16 < v27 + 2 )
            v16 = v27 + 2;
          v9[2] = (void *)v16;
          v17 = v9;
          v14 = (char *)realloc(*v9, v16);
          v9 = v17;
          v10 = v28;
          *v9 = v14;
          v15 = (int)v9[1];
        }
        else
        {
          v14 = (char *)*v9;
          v15 = v27;
        }
        v5 = a1;
        *(_WORD *)&v14[v15] = 8236;
        v12 = (int)v9[1] + 2;
        v9[1] = (void *)v12;
      }
      v30 = v12;
      v18 = *(_BYTE **)(*(_DWORD *)(v5 + 8) + 4 * v10);
      v19 = v9;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v18 + 12))(v18, v9);
      if ( v18[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v18 + 16))(v18, v19);
      v20 = (int)v19[1];
      v9 = v19;
      if ( v30 == v20 )
      {
        v19[1] = (void *)v27;
        v20 = v27;
        v5 = a1;
        v21 = v28;
        v8 = v29;
      }
      else
      {
        v8 = 0;
        v27 = (int)v19[1];
        v5 = a1;
        v21 = v28;
      }
      v10 = v21 + 1;
    }
    while ( v10 != *(_DWORD *)(v5 + 12) );
  }
  else
  {
    v20 = (int)a2[1];
    v9 = a2;
  }
  v22 = v9;
  v23 = v20 + 1;
  v24 = (unsigned int)v22[2];
  if ( v20 + 1 >= v24 )
  {
    v26 = 2 * v24;
    if ( v26 < v23 )
      v26 = v20 + 1;
    v22[2] = (void *)v26;
    result = realloc(*v22, v26);
    *v22 = result;
    v20 = (int)v22[1];
    v23 = v20 + 1;
  }
  else
  {
    result = *v22;
  }
  v22[1] = (void *)v23;
  result[v20] = 93;
  return result;
}
