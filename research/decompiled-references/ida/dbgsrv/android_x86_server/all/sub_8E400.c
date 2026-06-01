/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E400
// Address: 0x0008E400

//----- (0008E400) --------------------------------------------------------
int __cdecl sub_8E400(int a1, int *a2)
{
  int *v2; // edx
  int v3; // eax
  size_t v4; // esi
  void *v5; // eax
  size_t v6; // esi
  void *v7; // eax
  int result; // eax

  v2 = a2;
  v3 = *a2;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v4 = a2[3];
  if ( v4 )
  {
    v5 = qalloc_or_throw(a2[3]);
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 16) = v4;
    memcpy(v5, (const void *)a2[2], v4);
    v2 = a2;
    *(_DWORD *)(a1 + 12) = v4;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v6 = v2[6];
  if ( v6 )
  {
    v7 = qalloc_or_throw(v2[6]);
    *(_DWORD *)(a1 + 20) = v7;
    *(_DWORD *)(a1 + 28) = v6;
    memcpy(v7, (const void *)a2[5], v6);
    v2 = a2;
    *(_DWORD *)(a1 + 24) = v6;
  }
  *(_WORD *)(a1 + 36) = *((_WORD *)v2 + 18);
  result = v2[8];
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
