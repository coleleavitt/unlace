/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B6AB0
// Address: 0x000B6AB0

//----- (000B6AB0) --------------------------------------------------------
char __cdecl sub_B6AB0(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // esi
  size_t v6; // edx
  _BYTE *v7; // eax
  int v8; // ecx
  unsigned int v10; // [esp+Ch] [ebp-20h]
  size_t v11; // [esp+10h] [ebp-1Ch]
  size_t v12; // [esp+14h] [ebp-18h]
  const void *v13; // [esp+18h] [ebp-14h]

  v3 = *(_DWORD *)(a1 + 4 * a2 + 16);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v13 = *(const void **)a3;
  v6 = *(_DWORD *)(a3 + 4);
  v12 = v5 + v6;
  if ( *(_DWORD *)(v3 + 8) >= v5 + v6 + 1 )
  {
    v8 = v5 + v6 + 1;
    v7 = *(_BYTE **)v3;
  }
  else
  {
    v11 = *(_DWORD *)(a3 + 4);
    v10 = v5 + v6 + 1;
    v7 = qvector_reserve(v3, *(void **)v3, v10, 1u);
    v8 = v10;
    v6 = v11;
    *(_DWORD *)v3 = v7;
  }
  *(_DWORD *)(v3 + 4) = v8;
  v7[v12] = 0;
  memmove((void *)(*(_DWORD *)v3 + v5), v13, v6);
  return 1;
}
