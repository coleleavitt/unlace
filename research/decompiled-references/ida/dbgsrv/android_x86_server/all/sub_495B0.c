/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_495B0
// Address: 0x000495B0

//----- (000495B0) --------------------------------------------------------
int __cdecl sub_495B0(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // eax

  *(_BYTE *)(a1 + 116) = -83;
  v1 = *(_DWORD *)(a1 + 108);
  v2 = *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 8) >= (unsigned int)(v2 + 1) )
  {
    v3 = *(_BYTE **)v1;
  }
  else
  {
    v3 = qvector_reserve(v1, *(void **)v1, v2 + 1, 1u);
    *(_DWORD *)v1 = v3;
    v2 = *(_DWORD *)(v1 + 4);
  }
  v3[v2] = -83;
  ++*(_DWORD *)(v1 + 4);
  v4 = *(_DWORD *)(a1 + 168);
  v5 = *(_DWORD *)(a1 + 112) + 1;
  *(_DWORD *)(a1 + 112) = v5;
  if ( *(_DWORD *)(a1 + 172) >= (unsigned int)(v4 + 1) )
  {
    v6 = *(_DWORD **)(a1 + 164);
  }
  else
  {
    v6 = qvector_reserve(a1 + 164, *(void **)(a1 + 164), v4 + 1, 4u);
    *(_DWORD *)(a1 + 164) = v6;
    v4 = *(_DWORD *)(a1 + 168);
  }
  v6[v4] = v5;
  ++*(_DWORD *)(a1 + 168);
  sub_46F00(a1, 0);
  sub_46F00(a1, 0);
  return 0;
}
