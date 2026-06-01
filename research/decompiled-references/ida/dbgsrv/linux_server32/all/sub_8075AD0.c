/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075AD0
// Address: 0x08075AD0

//----- (08075AD0) --------------------------------------------------------
int __cdecl sub_8075AD0(int a1)
{
  _DWORD *v1; // eax
  size_t v2; // ecx
  _DWORD *v3; // edi
  int v4; // ecx
  void *v5; // eax
  void *v7; // eax
  size_t n; // [esp+0h] [ebp-24h]
  _DWORD *v9; // [esp+8h] [ebp-1Ch]

  v9 = (_DWORD *)operator new(0x10u);
  v9[3] = 0;
  *v9 = 1;
  v1 = (_DWORD *)operator new(0xCu);
  v2 = *(_DWORD *)(a1 + 24);
  *v1 = 0;
  v3 = v1;
  v1[1] = 0;
  v1[2] = 0;
  if ( v2 )
  {
    n = v2;
    v7 = sub_80CF8B0(v2);
    *v3 = v7;
    v3[2] = n;
    memcpy(v7, *(const void **)(a1 + 20), n);
    v3[1] = n;
  }
  v4 = *(_DWORD *)(a1 + 192);
  v9[2] = v3;
  v5 = *(void **)(a1 + 188);
  if ( *(_DWORD *)(a1 + 196) < (unsigned int)(v4 + 1) )
  {
    v5 = sub_80CF920(a1 + 188, v5, v4 + 1, 4u);
    v4 = *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 188) = v5;
  }
  *((_DWORD *)v5 + v4) = v9;
  ++*(_DWORD *)(a1 + 192);
  return 0;
}
