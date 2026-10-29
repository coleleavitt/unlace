/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E80
// Address: 0x00049E80

//----- (00049E80) --------------------------------------------------------
int __cdecl sub_49E80(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax

  *(_BYTE *)(a1 + 116) = -55;
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
  v3[v2] = -55;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
