/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475C0
// Address: 0x000475C0

//----- (000475C0) --------------------------------------------------------
int __cdecl sub_475C0(int a1)
{
  char v1; // al
  int v2; // edi
  int v3; // ecx
  _BYTE *v4; // eax

  v1 = *(_BYTE *)(a1 + 116);
  if ( v1 != -88 && v1 != -65 )
  {
    *(_BYTE *)(a1 + 116) = -65;
    v2 = *(_DWORD *)(a1 + 108);
    v3 = *(_DWORD *)(v2 + 4);
    if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
    {
      v4 = *(_BYTE **)v2;
    }
    else
    {
      v4 = qvector_reserve(v2, *(void **)v2, v3 + 1, 1u);
      *(_DWORD *)v2 = v4;
      v3 = *(_DWORD *)(v2 + 4);
    }
    v4[v3] = -65;
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(a1 + 112);
  }
  return 0;
}
