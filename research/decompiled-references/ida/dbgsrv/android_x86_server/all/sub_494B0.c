/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494B0
// Address: 0x000494B0

//----- (000494B0) --------------------------------------------------------
int __cdecl sub_494B0(int a1)
{
  int v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax

  v1 = *(_DWORD *)(a1 + 144);
  if ( *(_DWORD *)(a1 + 148) >= (unsigned int)(v1 + 1) )
  {
    v2 = *(_DWORD **)(a1 + 140);
  }
  else
  {
    v2 = qvector_reserve(a1 + 140, *(void **)(a1 + 140), v1 + 1, 4u);
    *(_DWORD *)(a1 + 140) = v2;
    v1 = *(_DWORD *)(a1 + 144);
  }
  v2[v1] = -1;
  ++*(_DWORD *)(a1 + 144);
  v3 = *(_DWORD *)(a1 + 156);
  if ( *(_DWORD *)(a1 + 160) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_DWORD **)(a1 + 152);
  }
  else
  {
    v4 = qvector_reserve(a1 + 152, *(void **)(a1 + 152), v3 + 1, 4u);
    *(_DWORD *)(a1 + 152) = v4;
    v3 = *(_DWORD *)(a1 + 156);
  }
  v4[v3] = -1;
  ++*(_DWORD *)(a1 + 156);
  v5 = *(_DWORD *)(a1 + 112);
  v6 = *(_DWORD *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 172) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_DWORD **)(a1 + 164);
  }
  else
  {
    v7 = qvector_reserve(a1 + 164, *(void **)(a1 + 164), v6 + 1, 4u);
    *(_DWORD *)(a1 + 164) = v7;
    v6 = *(_DWORD *)(a1 + 168);
  }
  v7[v6] = v5;
  ++*(_DWORD *)(a1 + 168);
  return 0;
}
