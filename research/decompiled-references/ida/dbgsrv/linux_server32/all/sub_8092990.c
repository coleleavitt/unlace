/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092990
// Address: 0x08092990

//----- (08092990) --------------------------------------------------------
bool __cdecl sub_8092990(int a1, int a2, void *src)
{
  unsigned __int16 v3; // ax
  bool result; // al
  size_t v5; // edi
  void *v6; // eax

  v3 = *(_WORD *)(a2 + 12);
  if ( v3 != 3 )
  {
    if ( v3 <= 3u )
    {
      if ( v3 == 2 )
        return 1;
      return v3 > 0x7Fu;
    }
    if ( (unsigned __int16)(v3 - 6) > 2u )
      return v3 > 0x7Fu;
  }
  result = 0;
  if ( src && (unsigned int)src < *(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a2 + 4) = 0;
    v5 = *(_DWORD *)(a1 + 4) - (_DWORD)src;
    v6 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) < v5 + 1 )
    {
      v6 = sub_80CF920(a2, v6, v5 + 1, 1u);
      *(_DWORD *)a2 = v6;
    }
    *(_DWORD *)(a2 + 4) = v5 + 1;
    *((_BYTE *)v6 + v5) = 0;
    memmove(*(void **)a2, src, v5);
    return 1;
  }
  return result;
}
