/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49030
// Address: 0x00049030

//----- (00049030) --------------------------------------------------------
int __cdecl sub_49030(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v10; // [esp+8h] [ebp-14h]

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
  v10 = *(_DWORD *)(a1 + 112) + 1;
  *(_DWORD *)(a1 + 112) = v10;
  sub_46F00(a1, 0);
  sub_46F00(a1, 0);
  v4 = *(_DWORD *)(a1 + 132);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 4 * v4 - 4);
  if ( v4 )
    *(_DWORD *)(a1 + 132) = v4 - 1;
  v6 = (_DWORD *)(a1 + 128);
  sub_52090(*(_DWORD **)(a1 + 108), v5, *(_DWORD *)(a1 + 112) + -4 - v5);
  v7 = *(_DWORD *)(a1 + 132);
  if ( *(_DWORD *)(a1 + 136) >= (unsigned int)(v7 + 1) )
  {
    v8 = (_DWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((int)v6, *(void **)(a1 + 128), v7 + 1, 4u);
    *(_DWORD *)(a1 + 128) = v8;
    v7 = *(_DWORD *)(a1 + 132);
  }
  v8[v7] = v10;
  ++*(_DWORD *)(a1 + 132);
  return 0;
}
