/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073F40
// Address: 0x08073F40

//----- (08073F40) --------------------------------------------------------
int __cdecl sub_8073F40(int a1, int a2)
{
  int *v2; // eax
  int *v3; // edi
  size_t v4; // eax
  void *v6; // eax
  size_t v7; // [esp-28h] [ebp-28h]
  size_t v8; // [esp-24h] [ebp-24h]

  v2 = sub_8084390(a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen((const char *)v2);
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    if ( v4 )
    {
      v7 = v4;
      v8 = v4 + 1;
      v6 = sub_80CF920(a2 + 4, nullptr, v4 + 1, 1u);
      *(_DWORD *)(a2 + 4) = v6;
      *(_DWORD *)(a2 + 8) = v8;
      memmove(v6, v3, v7);
      *(_BYTE *)(*(_DWORD *)(a2 + 4) + v7) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    return 0;
  }
}
