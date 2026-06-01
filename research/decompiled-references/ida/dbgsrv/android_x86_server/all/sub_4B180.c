/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B180
// Address: 0x0004B180

//----- (0004B180) --------------------------------------------------------
int __cdecl sub_4B180(int a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // edx
  _BYTE *v6; // eax
  int v7; // edi
  size_t v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  bool v13; // cf
  size_t v14; // edx
  _BYTE *v15; // eax
  int v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+Ch] [ebp-20h]
  size_t v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-14h]

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = v3 - 1;
  if ( !v3 )
    v4 = 0;
  v5 = v4 + 2;
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v4 + 2) )
  {
    v6 = *(_BYTE **)v2;
  }
  else
  {
    v17 = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
    v6 = qvector_reserve(v2, *(void **)v2, v4 + 2, 1u);
    v5 = v4 + 2;
    v1 = v17;
    *(_DWORD *)v2 = v6;
  }
  *(_DWORD *)(v2 + 4) = v5;
  v6[v4] = 46;
  *(_BYTE *)(*(_DWORD *)v2 + v4 + 1) = 0;
  v7 = *(_DWORD *)(a1 + 24);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v7 != 1 )
    {
      v9 = *(_DWORD *)(v1 + 8);
      v10 = *(_DWORD *)(v9 + 4);
      v11 = v10 - 1;
      if ( !v10 )
        v11 = 0;
      v19 = v11 + v8;
      v12 = v11 + v7;
      v18 = v9;
      v13 = *(_DWORD *)(v9 + 8) < v12;
      v14 = v8;
      if ( v13 )
      {
        v20 = v11;
        v15 = qvector_reserve(v18, *(void **)v18, v12, 1u);
        v11 = v20;
        v14 = v8;
        *(_DWORD *)v18 = v15;
      }
      else
      {
        v15 = *(_BYTE **)v18;
      }
      *(_DWORD *)(v18 + 4) = v12;
      v15[v19] = 0;
      memcpy((void *)(*(_DWORD *)v18 + v11), *(const void **)(a1 + 20), v14);
    }
  }
  return 0;
}
