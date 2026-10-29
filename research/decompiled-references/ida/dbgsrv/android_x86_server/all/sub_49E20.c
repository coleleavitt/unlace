/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E20
// Address: 0x00049E20

//----- (00049E20) --------------------------------------------------------
int __cdecl sub_49E20(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax

  *(_BYTE *)(a1 + 116) = -56;
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
  v3[v2] = -56;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
