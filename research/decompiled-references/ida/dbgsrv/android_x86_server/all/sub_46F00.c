/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F00
// Address: 0x00046F00

//----- (00046F00) --------------------------------------------------------
_BYTE *__cdecl sub_46F00(int a1, __int16 a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  __int16 v5; // dx
  _BYTE *v6; // eax
  int v7; // edi
  int v8; // ecx
  char v9; // si^1
  _BYTE *result; // eax

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = a2;
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
  {
    v6 = *(_BYTE **)v3;
  }
  else
  {
    v6 = qvector_reserve(v3, *(void **)v3, v4 + 1, 1u);
    v5 = a2;
    *(_DWORD *)v3 = v6;
    v4 = *(_DWORD *)(v3 + 4);
  }
  v6[v4] = v5;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 112);
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
  {
    result = *(_BYTE **)v7;
  }
  else
  {
    v9 = HIBYTE(v5);
    result = qvector_reserve(v7, *(void **)v7, v8 + 1, 1u);
    HIBYTE(v5) = v9;
    v2 = a1;
    *(_DWORD *)v7 = result;
    v8 = *(_DWORD *)(v7 + 4);
  }
  result[v8] = HIBYTE(v5);
  ++*(_DWORD *)(v7 + 4);
  ++*(_DWORD *)(v2 + 112);
  return result;
}
