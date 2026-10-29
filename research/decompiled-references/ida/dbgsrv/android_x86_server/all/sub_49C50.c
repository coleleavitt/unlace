/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C50
// Address: 0x00049C50

//----- (00049C50) --------------------------------------------------------
int __cdecl sub_49C50(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // eax

  if ( !*(_DWORD *)(a1 + 168) )
    return set_qerrno(50);
  *(_BYTE *)(a1 + 116) = -85;
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
  v3[v2] = -85;
  ++*(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(a1 + 144);
  v6 = *(_DWORD *)(a1 + 112) + 1;
  *(_DWORD *)(a1 + 112) = v6;
  if ( *(_DWORD *)(a1 + 148) >= (unsigned int)(v5 + 1) )
  {
    v7 = *(_DWORD **)(a1 + 140);
  }
  else
  {
    v7 = qvector_reserve(a1 + 140, *(void **)(a1 + 140), v5 + 1, 4u);
    *(_DWORD *)(a1 + 140) = v7;
    v5 = *(_DWORD *)(a1 + 144);
  }
  v7[v5] = v6;
  ++*(_DWORD *)(a1 + 144);
  sub_46F00(a1, 0);
  sub_46F00(a1, 0);
  return 0;
}
