/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24B4C
// Address: 0x00024B4C

//----- (00024B4C) --------------------------------------------------------
int __fastcall sub_24B4C(int a1, int a2)
{
  size_t v3; // r5
  void *v4; // r6
  int v6; // r1
  _DWORD *v7; // r0
  char *v8; // r0
  int result; // r0

  v3 = *(_DWORD *)(a2 + 4);
  v4 = nullptr;
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    qmemcpy(v4, *(const void **)a2, v3);
  }
  v6 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_DWORD **)a1;
  }
  else
  {
    v7 = qvector_reserve(a1, *(void **)a1, v6 + 1, 0xCu);
    *(_DWORD *)a1 = v7;
    v6 = *(_DWORD *)(a1 + 4);
  }
  v7[3 * v6] = v4;
  v8 = (char *)&v7[3 * v6];
  *((_DWORD *)v8 + 1) = v3;
  *((_DWORD *)v8 + 2) = v3;
  result = *(_DWORD *)(a1 + 4) + 1;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
