/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472F0
// Address: 0x000472F0

//----- (000472F0) --------------------------------------------------------
_BYTE *__cdecl sub_472F0(int a1, unsigned int a2)
{
  unsigned int v2; // edx
  int v3; // esi
  char v4; // dl
  int v5; // edi
  int v6; // ecx
  _BYTE *result; // eax
  int v8; // edi
  int v9; // ecx
  _BYTE *v10; // eax
  int v11; // edi
  int v12; // ecx
  _BYTE *v13; // eax
  int v14; // edi
  __int16 v15; // esi^2
  int v16; // [esp-10h] [ebp-2Ch]

  v2 = a2;
  v3 = a1;
  if ( a2 <= 0xF )
  {
    v4 = a2 - 32;
    *(_BYTE *)(a1 + 116) = a2 - 32;
    v5 = *(_DWORD *)(a1 + 108);
    v6 = *(_DWORD *)(v5 + 4);
    if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
    {
      result = *(_BYTE **)v5;
    }
    else
    {
      result = qvector_reserve(v5, *(void **)v5, v6 + 1, 1u);
      v4 = a2 - 32;
      v3 = a1;
      *(_DWORD *)v5 = result;
      v6 = *(_DWORD *)(v5 + 4);
    }
LABEL_16:
    result[v6] = v4;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(v3 + 112);
    return result;
  }
  if ( (char)a2 == a2 )
  {
    *(_BYTE *)(a1 + 116) = -96;
    v8 = *(_DWORD *)(a1 + 108);
    v9 = *(_DWORD *)(v8 + 4);
    if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v9 + 1) )
    {
      v10 = *(_BYTE **)v8;
    }
    else
    {
      v10 = qvector_reserve(v8, *(void **)v8, v9 + 1, 1u);
      *(_DWORD *)v8 = v10;
      v9 = *(_DWORD *)(v8 + 4);
    }
    v10[v9] = -96;
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(a1 + 112);
    v5 = *(_DWORD *)(a1 + 108);
    v6 = *(_DWORD *)(v5 + 4);
    if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
    {
      result = *(_BYTE **)v5;
    }
    else
    {
      result = qvector_reserve(v5, *(void **)v5, v6 + 1, 1u);
      *(_DWORD *)v5 = result;
      v6 = *(_DWORD *)(v5 + 4);
    }
    v4 = a2;
    goto LABEL_16;
  }
  *(_BYTE *)(a1 + 116) = -89;
  v11 = *(_DWORD *)(a1 + 108);
  v12 = *(_DWORD *)(v11 + 4);
  if ( *(_DWORD *)(v11 + 8) >= (unsigned int)(v12 + 1) )
  {
    v13 = *(_BYTE **)v11;
  }
  else
  {
    v13 = qvector_reserve(v11, *(void **)v11, v12 + 1, 1u);
    v2 = a2;
    v3 = a1;
    *(_DWORD *)v11 = v13;
    v12 = *(_DWORD *)(v11 + 4);
  }
  v13[v12] = -89;
  ++*(_DWORD *)(v11 + 4);
  ++*(_DWORD *)(v3 + 112);
  v16 = v3;
  v14 = v3;
  v15 = HIWORD(v2);
  sub_46F00(v16, v2);
  return sub_46F00(v14, v15);
}
