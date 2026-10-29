/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB40
// Address: 0x0006FB40

//----- (0006FB40) --------------------------------------------------------
char __cdecl sub_6FB40(int a1, int a2, void *src)
{
  int v3; // edx
  char result; // al
  const void *v5; // ecx
  size_t v6; // edi
  size_t v7; // edx
  _BYTE *v8; // eax

  v3 = *(_DWORD *)(a2 + 12);
  result = 1;
  if ( (unsigned __int16)(v3 - 6) >= 3u )
  {
    if ( (unsigned __int16)v3 == 2 )
      return result;
    if ( (unsigned __int16)v3 != 3 )
    {
      if ( (unsigned __int16)v3 > 0x7Fu )
        return result;
      return 0;
    }
  }
  v5 = src;
  if ( !src || *(_DWORD *)(a1 + 4) <= (unsigned int)src )
    return 0;
  *(_DWORD *)(a2 + 4) = 0;
  v6 = *(_DWORD *)(a1 + 4) - (_DWORD)src;
  v7 = v6 + 1;
  if ( *(_DWORD *)(a2 + 8) >= v6 + 1 )
  {
    v8 = *(_BYTE **)a2;
  }
  else
  {
    v8 = qvector_reserve(a2, *(void **)a2, v6 + 1, 1u);
    v7 = v6 + 1;
    v5 = src;
    *(_DWORD *)a2 = v8;
  }
  *(_DWORD *)(a2 + 4) = v7;
  v8[v6] = 0;
  memmove(*(void **)a2, v5, v6);
  return 1;
}
