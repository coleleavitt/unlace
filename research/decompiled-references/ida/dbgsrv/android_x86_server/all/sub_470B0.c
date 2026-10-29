/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470B0
// Address: 0x000470B0

//----- (000470B0) --------------------------------------------------------
_BYTE *__cdecl sub_470B0(int a1, char a2, unsigned __int16 a3)
{
  __int16 v3; // dx
  int v4; // edi
  int v5; // ecx
  _BYTE *v6; // eax
  int v7; // edi
  int v8; // esi
  _BYTE *v9; // eax
  int v10; // edi
  int v11; // ecx
  _BYTE *result; // eax

  v3 = a3;
  if ( a3 > 0xFFu )
  {
    *(_BYTE *)(a1 + 116) = a2 + 1;
    v7 = *(_DWORD *)(a1 + 108);
    v8 = *(_DWORD *)(v7 + 4);
    if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
    {
      v9 = *(_BYTE **)v7;
    }
    else
    {
      v9 = qvector_reserve(v7, *(void **)v7, v8 + 1, 1u);
      v3 = a3;
      *(_DWORD *)v7 = v9;
      v8 = *(_DWORD *)(v7 + 4);
    }
    v9[v8] = a2 + 1;
    ++*(_DWORD *)(v7 + 4);
    ++*(_DWORD *)(a1 + 112);
    return sub_46F00(a1, v3);
  }
  else
  {
    *(_BYTE *)(a1 + 116) = a2;
    v4 = *(_DWORD *)(a1 + 108);
    v5 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
    {
      v6 = *(_BYTE **)v4;
    }
    else
    {
      v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)v4 = v6;
      v5 = *(_DWORD *)(v4 + 4);
    }
    v6[v5] = a2;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 112);
    v10 = *(_DWORD *)(a1 + 108);
    v11 = *(_DWORD *)(v10 + 4);
    if ( *(_DWORD *)(v10 + 8) >= (unsigned int)(v11 + 1) )
    {
      result = *(_BYTE **)v10;
    }
    else
    {
      result = qvector_reserve(v10, *(void **)v10, v11 + 1, 1u);
      *(_DWORD *)v10 = result;
      v11 = *(_DWORD *)(v10 + 4);
    }
    result[v11] = a3;
    ++*(_DWORD *)(v10 + 4);
    ++*(_DWORD *)(a1 + 112);
  }
  return result;
}
