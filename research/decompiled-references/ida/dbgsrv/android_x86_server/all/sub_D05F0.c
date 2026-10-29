/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D05F0
// Address: 0x000D05F0

//----- (000D05F0) --------------------------------------------------------
_BYTE *__cdecl sub_D05F0(int a1, int a2)
{
  _BYTE *v2; // esi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  size_t v6; // eax
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  char *v12; // eax
  int v13; // ecx
  size_t v14; // eax
  _DWORD *v15; // esi
  _BYTE *v16; // esi
  _DWORD *v17; // edi
  int v18; // ebx
  _DWORD *v19; // esi
  unsigned int v20; // eax
  _BYTE *result; // eax
  size_t v22; // eax
  int v23; // [esp+Ch] [ebp-20h]
  char v24; // [esp+10h] [ebp-1Ch]
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]

  v2 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v3 + 1 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 1 )
      v6 = v3 + 1;
    *(_DWORD *)(a2 + 8) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_DWORD *)a2 = v5;
    v3 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  v7 = (_DWORD *)a2;
  v8 = a1;
  v5[v3] = 40;
  v9 = *(_DWORD *)(a2 + 4) + 1;
  *(_DWORD *)(a2 + 4) = v9;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v23 = 0;
    v24 = 1;
    do
    {
      v10 = v9;
      v25 = v9;
      if ( (v24 & 1) == 0 )
      {
        v11 = v7[2];
        if ( v9 + 2 >= v11 )
        {
          v14 = 2 * v11;
          if ( v14 < v9 + 2 )
            v14 = v9 + 2;
          v7[2] = v14;
          v15 = v7;
          v12 = (char *)realloc((void *)*v7, v14);
          v7 = v15;
          *v15 = v12;
          v13 = v15[1];
        }
        else
        {
          v12 = (char *)*v7;
          v13 = v9;
        }
        *(_WORD *)&v12[v13] = 8236;
        v10 = v7[1] + 2;
        v7[1] = v10;
      }
      v26 = v10;
      v16 = *(_BYTE **)(*(_DWORD *)(v8 + 12) + 4 * v23);
      v17 = v7;
      (*(void (__cdecl **)(_BYTE *, _DWORD *))(*(_DWORD *)v16 + 12))(v16, v7);
      if ( v16[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, _DWORD *))(*(_DWORD *)v16 + 16))(v16, v17);
      v18 = v17[1];
      v7 = v17;
      if ( v26 == v18 )
      {
        v9 = v25;
        v17[1] = v25;
        v18 = v25;
      }
      else
      {
        v24 = 0;
        v9 = v17[1];
      }
      ++v23;
      v8 = a1;
    }
    while ( v23 != *(_DWORD *)(a1 + 16) );
  }
  else
  {
    v18 = v9;
  }
  v19 = v7;
  v20 = v7[2];
  if ( v18 + 1 >= v20 )
  {
    v22 = 2 * v20;
    if ( v22 < v18 + 1 )
      v22 = v18 + 1;
    v7[2] = v22;
    result = realloc((void *)*v7, v22);
    *v19 = result;
    v18 = v19[1];
  }
  else
  {
    result = (_BYTE *)*v7;
  }
  result[v18] = 41;
  ++v19[1];
  return result;
}
