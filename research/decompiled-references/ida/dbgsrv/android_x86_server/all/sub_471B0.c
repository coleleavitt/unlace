/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471B0
// Address: 0x000471B0

//----- (000471B0) --------------------------------------------------------
_BYTE *__cdecl sub_471B0(int a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v3; // dl
  int v4; // edi
  int v5; // ecx
  _BYTE *result; // eax
  char v7; // dl
  char v8; // dl
  int v9; // edi
  int v10; // ecx
  _BYTE *v11; // eax
  char v12; // dl
  int v13; // esi
  int v14; // ecx
  _BYTE *v15; // eax
  int v16; // ecx
  char v17; // [esp+7h] [ebp-15h]
  char v18; // [esp+7h] [ebp-15h]

  if ( a3 <= 0xFu )
  {
    v3 = a3 + a2;
    *(_BYTE *)(a1 + 116) = a3 + a2;
    v4 = *(_DWORD *)(a1 + 108);
    v5 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
    {
      result = *(_BYTE **)v4;
    }
    else
    {
      result = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
      v3 = a3 + a2;
      *(_DWORD *)v4 = result;
      v5 = *(_DWORD *)(v4 + 4);
    }
    result[v5] = v3;
LABEL_18:
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 112);
    return result;
  }
  v7 = a2 >> 3;
  if ( a3 <= 0xFFu )
  {
    v8 = v7 | 0x80;
    *(_BYTE *)(a1 + 116) = v8;
    v9 = *(_DWORD *)(a1 + 108);
    v10 = *(_DWORD *)(v9 + 4);
    if ( *(_DWORD *)(v9 + 8) >= (unsigned int)(v10 + 1) )
    {
      v11 = *(_BYTE **)v9;
    }
    else
    {
      v17 = v8;
      v11 = qvector_reserve(v9, *(void **)v9, v10 + 1, 1u);
      v8 = v17;
      *(_DWORD *)v9 = v11;
      v10 = *(_DWORD *)(v9 + 4);
    }
    v11[v10] = v8;
    ++*(_DWORD *)(v9 + 4);
    ++*(_DWORD *)(a1 + 112);
    v4 = *(_DWORD *)(a1 + 108);
    v16 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v16 + 1) )
    {
      result = *(_BYTE **)v4;
    }
    else
    {
      result = qvector_reserve(v4, *(void **)v4, v16 + 1, 1u);
      *(_DWORD *)v4 = result;
      v16 = *(_DWORD *)(v4 + 4);
    }
    result[v16] = a3;
    goto LABEL_18;
  }
  v12 = v7 - 127;
  *(_BYTE *)(a1 + 116) = v12;
  v13 = *(_DWORD *)(a1 + 108);
  v14 = *(_DWORD *)(v13 + 4);
  if ( *(_DWORD *)(v13 + 8) >= (unsigned int)(v14 + 1) )
  {
    v15 = *(_BYTE **)v13;
  }
  else
  {
    v18 = v12;
    v15 = qvector_reserve(v13, *(void **)v13, v14 + 1, 1u);
    v12 = v18;
    *(_DWORD *)v13 = v15;
    v14 = *(_DWORD *)(v13 + 4);
  }
  v15[v14] = v12;
  ++*(_DWORD *)(v13 + 4);
  ++*(_DWORD *)(a1 + 112);
  return sub_46F00(a1, a3);
}
