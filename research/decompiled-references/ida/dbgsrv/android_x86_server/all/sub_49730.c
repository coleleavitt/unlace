/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49730
// Address: 0x00049730

//----- (00049730) --------------------------------------------------------
int __cdecl sub_49730(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  _DWORD *v12; // eax

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
  ++*(_DWORD *)(a1 + 112);
  v4 = (_DWORD *)(a1 + 164);
  v5 = *(_DWORD *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 172) >= (unsigned int)(v5 + 1) )
  {
    v6 = (_DWORD *)*v4;
  }
  else
  {
    v6 = qvector_reserve(a1 + 164, *(void **)(a1 + 164), v5 + 1, 4u);
    *(_DWORD *)(a1 + 164) = v6;
    v5 = *(_DWORD *)(a1 + 168);
  }
  v6[v5] = 0;
  v7 = *(_DWORD *)(a1 + 112);
  v8 = *(_DWORD *)(a1 + 168);
  v9 = v8 + 1;
  *(_DWORD *)(a1 + 168) = v8 + 1;
  v10 = v8 + 2;
  if ( *(_DWORD *)(a1 + 172) >= v10 )
  {
    v12 = (_DWORD *)*v4;
  }
  else
  {
    v11 = v7;
    v12 = qvector_reserve(a1 + 164, *(void **)(a1 + 164), v10, 4u);
    v7 = v11;
    *(_DWORD *)(a1 + 164) = v12;
    v9 = *(_DWORD *)(a1 + 168);
  }
  v12[v9] = v7;
  ++*(_DWORD *)(a1 + 168);
  sub_46F00(a1, 0);
  sub_46F00(a1, 0);
  return 0;
}
