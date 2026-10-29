/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AC10
// Address: 0x0004AC10

//----- (0004AC10) --------------------------------------------------------
int __cdecl sub_4AC10(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  size_t v5; // esi
  void *v6; // eax
  size_t v7; // edx
  int v8; // ecx
  _DWORD *v9; // eax
  size_t v11; // [esp+14h] [ebp-18h]
  _DWORD *v12; // [esp+18h] [ebp-14h]

  v1 = a1;
  v2 = operator new(0x10u);
  v2[3] = 0;
  v12 = v2;
  *v2 = 1;
  v3 = operator new(0xCu);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = qalloc_or_throw(v4);
    *v3 = v6;
    v7 = v5;
    v11 = v5;
    v3[2] = v5;
    v1 = a1;
    memcpy(v6, *(const void **)(a1 + 20), v7);
    v3[1] = v11;
  }
  v12[2] = v3;
  v8 = *(_DWORD *)(v1 + 192);
  if ( *(_DWORD *)(v1 + 196) >= (unsigned int)(v8 + 1) )
  {
    v9 = *(_DWORD **)(v1 + 188);
  }
  else
  {
    v9 = qvector_reserve(v1 + 188, *(void **)(v1 + 188), v8 + 1, 4u);
    *(_DWORD *)(v1 + 188) = v9;
    v8 = *(_DWORD *)(v1 + 192);
  }
  v9[v8] = v12;
  ++*(_DWORD *)(v1 + 192);
  return 0;
}
