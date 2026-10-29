/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42120
// Address: 0x00042120

//----- (00042120) --------------------------------------------------------
_DWORD *__cdecl sub_42120(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  _DWORD *result; // eax
  int v8; // ecx

  v4 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
  {
    result = *(_DWORD **)v5;
  }
  else
  {
    result = qvector_reserve(v5, *(void **)v5, v6 + 1, 0x18u);
    v4 = a4;
    *(_DWORD *)v5 = result;
    v6 = *(_DWORD *)(v5 + 4);
  }
  v8 = 3 * v6;
  result[2 * v8 + 2] = 0;
  result[2 * v8 + 3] = 0;
  result[2 * v8 + 4] = 0;
  ++*(_DWORD *)(v5 + 4);
  result[2 * v8 + 1] = v4;
  result[2 * v8] = a3;
  LOWORD(result[2 * v8 + 5]) = *(_WORD *)(a2 + 2);
  HIWORD(result[2 * v8 + 5]) = *(_WORD *)(a2 + 4);
  return result;
}
