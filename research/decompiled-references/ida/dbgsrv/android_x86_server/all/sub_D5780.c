/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5780
// Address: 0x000D5780

//----- (000D5780) --------------------------------------------------------
_BYTE *__cdecl sub_D5780(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  int v4; // edi
  char *v5; // eax
  size_t v6; // eax
  void **v7; // edx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int v12; // ecx
  size_t v13; // eax
  void **v14; // esi
  _BYTE *v15; // esi
  void **v16; // edi
  int v17; // ebx
  void **v18; // esi
  size_t v19; // edx
  unsigned int v20; // eax
  _BYTE *result; // eax
  size_t v22; // eax
  int v23; // [esp+Ch] [ebp-20h]
  char v24; // [esp+10h] [ebp-1Ch]
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  v4 = a1;
  if ( (unsigned int)(v2 + 12) >= v3 )
  {
    v6 = 2 * v3;
    if ( v6 < (unsigned int)(v2 + 12) )
      v6 = (size_t)(v2 + 12);
    a2[2] = (void *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v2 = (char *)a2[1];
  }
  else
  {
    v5 = (char *)*a2;
  }
  v7 = a2;
  qmemcpy(&v2[(_DWORD)v5], " [enable_if:", 12);
  v8 = (int)a2[1] + 12;
  a2[1] = (void *)v8;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v23 = 0;
    v24 = 1;
    do
    {
      v9 = v8;
      v25 = v8;
      if ( (v24 & 1) == 0 )
      {
        v10 = (unsigned int)v7[2];
        if ( v8 + 2 >= v10 )
        {
          v13 = 2 * v10;
          if ( v13 < v8 + 2 )
            v13 = v8 + 2;
          v7[2] = (void *)v13;
          v14 = v7;
          v11 = (char *)realloc(*v7, v13);
          v7 = v14;
          *v14 = v11;
          v12 = (int)v14[1];
        }
        else
        {
          v11 = (char *)*v7;
          v12 = v8;
        }
        *(_WORD *)&v11[v12] = 8236;
        v9 = (int)v7[1] + 2;
        v7[1] = (void *)v9;
      }
      v26 = v9;
      v15 = *(_BYTE **)(*(_DWORD *)(v4 + 8) + 4 * v23);
      v16 = v7;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v15 + 12))(v15, v7);
      if ( v15[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v15 + 16))(v15, v16);
      v17 = (int)v16[1];
      v7 = v16;
      if ( v26 == v17 )
      {
        v8 = v25;
        v16[1] = (void *)v25;
        v17 = v25;
      }
      else
      {
        v24 = 0;
        v8 = (int)v16[1];
      }
      ++v23;
      v4 = a1;
    }
    while ( v23 != *(_DWORD *)(a1 + 12) );
  }
  else
  {
    v17 = v8;
  }
  v18 = v7;
  v19 = v17 + 1;
  v20 = (unsigned int)v18[2];
  if ( v17 + 1 >= v20 )
  {
    v22 = 2 * v20;
    if ( v22 < v19 )
      v22 = v17 + 1;
    v18[2] = (void *)v22;
    result = realloc(*v18, v22);
    *v18 = result;
    v17 = (int)v18[1];
    v19 = v17 + 1;
  }
  else
  {
    result = *v18;
  }
  v18[1] = (void *)v19;
  result[v17] = 93;
  return result;
}
