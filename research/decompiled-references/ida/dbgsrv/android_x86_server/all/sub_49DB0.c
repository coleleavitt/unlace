/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DB0
// Address: 0x00049DB0

//----- (00049DB0) --------------------------------------------------------
int __cdecl sub_49DB0(int a1)
{
  int v2; // edi
  int v3; // ecx
  _BYTE *v4; // eax

  if ( *(_DWORD *)(a1 + 120) )
    return set_qerrno(1540);
  *(_BYTE *)(a1 + 116) = -81;
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
  v4[v3] = -81;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
