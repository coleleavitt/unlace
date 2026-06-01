/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474F0
// Address: 0x000474F0

//----- (000474F0) --------------------------------------------------------
int __cdecl sub_474F0(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax

  if ( !sub_47470(a1) )
  {
    *(_BYTE *)(a1 + 116) = -50;
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
    v3[v2] = -50;
    ++*(_DWORD *)(v1 + 4);
    ++*(_DWORD *)(a1 + 112);
  }
  return 0;
}
