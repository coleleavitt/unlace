/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8074020
// Address: 0x08074020

//----- (08074020) --------------------------------------------------------
int __cdecl sub_8074020(int a1, int a2)
{
  size_t v2; // eax
  void *v3; // eax
  size_t v5; // [esp+0h] [ebp-24h]
  const char *src; // [esp+4h] [ebp-20h]
  size_t n; // [esp+8h] [ebp-1Ch]

  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) )
  {
    src = *(const char **)(a1 + 4);
    v2 = strlen(src);
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    if ( v2 )
    {
      n = v2;
      v5 = v2 + 1;
      v3 = sub_80CF920(a2 + 4, nullptr, v2 + 1, 1u);
      *(_DWORD *)(a2 + 4) = v3;
      *(_DWORD *)(a2 + 8) = v5;
      memmove(v3, src, n);
      *(_BYTE *)(*(_DWORD *)(a2 + 4) + n) = 0;
      return 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  return 0;
}
