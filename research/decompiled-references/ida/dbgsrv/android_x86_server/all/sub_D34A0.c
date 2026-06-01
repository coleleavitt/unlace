/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D34A0
// Address: 0x000D34A0

//----- (000D34A0) --------------------------------------------------------
_BYTE *__cdecl sub_D34A0(int a1, void **a2)
{
  void **v2; // ecx
  int v3; // edi
  _BYTE *v4; // esi
  void **v5; // esi
  _BYTE *v6; // edx
  unsigned int v7; // eax
  size_t v8; // ecx
  void *v9; // eax
  size_t v10; // eax
  int v11; // eax
  void **v12; // edx
  int v13; // esi
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // eax
  char *v17; // eax
  int v18; // ecx
  size_t v19; // eax
  _BYTE *v20; // edi
  void **v21; // esi
  int v22; // ecx
  int v23; // esi
  void **v24; // esi
  size_t v25; // edx
  unsigned int v26; // eax
  _BYTE *result; // eax
  size_t v28; // eax
  int v29; // [esp+Ch] [ebp-20h]
  int v30; // [esp+10h] [ebp-1Ch]
  int v31; // [esp+14h] [ebp-18h]
  int v32; // [esp+18h] [ebp-14h]

  v2 = a2;
  v3 = a1;
  v4 = *(_BYTE **)(a1 + 8);
  if ( v4 )
  {
    (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v4 + 12))(v4, a2);
    v2 = a2;
    if ( v4[5] != 1 )
    {
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v4 + 16))(v4, a2);
      v2 = a2;
    }
  }
  v5 = v2;
  v6 = v2[1];
  v7 = (unsigned int)v2[2];
  v8 = (size_t)(v6 + 1);
  if ( (unsigned int)(v6 + 1) >= v7 )
  {
    v10 = 2 * v7;
    if ( v10 < v8 )
      v10 = (size_t)(v6 + 1);
    v5[2] = (void *)v10;
    v9 = realloc(*v5, v10);
    *v5 = v9;
    v6 = v5[1];
    v8 = (size_t)(v6 + 1);
  }
  else
  {
    v9 = *v5;
  }
  v5[1] = (void *)v8;
  v6[(_DWORD)v9] = 123;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v11 = (int)v5[1];
    v29 = v11;
    LOBYTE(v11) = 1;
    v12 = v5;
    v13 = 0;
    do
    {
      v31 = v11;
      v14 = (v11 & 1) == 0;
      v15 = v29;
      if ( v14 )
      {
        v16 = (unsigned int)v12[2];
        if ( v29 + 2 >= v16 )
        {
          v19 = 2 * v16;
          if ( v19 < v29 + 2 )
            v19 = v29 + 2;
          v12[2] = (void *)v19;
          v17 = (char *)realloc(*v12, v19);
          v12 = a2;
          *a2 = v17;
          v18 = (int)a2[1];
        }
        else
        {
          v17 = (char *)*v12;
          v18 = v29;
        }
        v3 = a1;
        *(_WORD *)&v17[v18] = 8236;
        v15 = (int)v12[1] + 2;
        v12[1] = (void *)v15;
      }
      v32 = v15;
      v30 = v13;
      v20 = *(_BYTE **)(*(_DWORD *)(v3 + 12) + 4 * v13);
      v21 = v12;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v20 + 12))(v20, v12);
      if ( v20[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v20 + 16))(v20, v21);
      v22 = (int)v21[1];
      v12 = v21;
      if ( v32 == v22 )
      {
        v21[1] = (void *)v29;
        v22 = v29;
        v3 = a1;
        v23 = v30;
        v11 = v31;
      }
      else
      {
        v11 = 0;
        v29 = (int)v21[1];
        v3 = a1;
        v23 = v30;
      }
      v13 = v23 + 1;
    }
    while ( v13 != *(_DWORD *)(v3 + 16) );
  }
  else
  {
    v22 = (int)v5[1];
    v12 = v5;
  }
  v24 = v12;
  v25 = v22 + 1;
  v26 = (unsigned int)v24[2];
  if ( v22 + 1 >= v26 )
  {
    v28 = 2 * v26;
    if ( v28 < v25 )
      v28 = v22 + 1;
    v24[2] = (void *)v28;
    result = realloc(*v24, v28);
    *v24 = result;
    v22 = (int)v24[1];
    v25 = v22 + 1;
  }
  else
  {
    result = *v24;
  }
  v24[1] = (void *)v25;
  result[v22] = 125;
  return result;
}
