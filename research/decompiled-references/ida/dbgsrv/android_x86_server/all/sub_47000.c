/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47000
// Address: 0x00047000

//----- (00047000) --------------------------------------------------------
unsigned int __cdecl sub_47000(int a1, char *s, size_t n)
{
  int v3; // edi
  int v4; // ecx
  int v5; // esi
  _BYTE *v6; // eax
  unsigned int result; // eax

  *(_BYTE *)(a1 + 116) = -88;
  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = n;
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
  {
    v6 = *(_BYTE **)v3;
  }
  else
  {
    v6 = qvector_reserve(v3, *(void **)v3, v4 + 1, 1u);
    *(_DWORD *)v3 = v6;
    v4 = *(_DWORD *)(v3 + 4);
  }
  v6[v4] = -88;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 112);
  if ( !n )
    v5 = strlen(s);
  sub_46F00(a1, v5);
  sub_46F00(a1, SHIWORD(v5));
  result = sub_51F00(*(_DWORD *)(a1 + 108), s, v5);
  *(_DWORD *)(a1 + 112) += v5;
  return result;
}
