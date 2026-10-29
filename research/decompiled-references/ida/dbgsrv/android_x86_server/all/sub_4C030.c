/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C030
// Address: 0x0004C030

//----- (0004C030) --------------------------------------------------------
int __cdecl sub_4C030(int a1)
{
  int v1; // ecx
  int v2; // edi
  _DWORD *v3; // eax

  v1 = *(_DWORD *)(a1 + 144);
  v2 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 148) >= (unsigned int)(v1 + 1) )
  {
    v3 = *(_DWORD **)(a1 + 140);
  }
  else
  {
    v3 = qvector_reserve(a1 + 140, *(void **)(a1 + 140), v1 + 1, 4u);
    *(_DWORD *)(a1 + 140) = v3;
    v1 = *(_DWORD *)(a1 + 144);
  }
  v3[v1] = v2;
  ++*(_DWORD *)(a1 + 144);
  return 0;
}
