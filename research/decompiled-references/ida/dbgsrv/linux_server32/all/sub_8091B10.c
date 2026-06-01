/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8091B10
// Address: 0x08091B10

//----- (08091B10) --------------------------------------------------------
int __usercall sub_8091B10@<eax>(int a1@<eax>)
{
  FILE *v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax

  v2 = *(FILE **)(a1 + 148);
  if ( v2 )
    sub_80CF060(v2);
  sub_80CF780(*(void **)(a1 + 152));
  v3 = *(_DWORD *)(a1 + 140);
  v4 = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 152) = 0;
  v5 = v4 + 24 * v3 - 24;
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(v5 + 16);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)v5;
  *(_BYTE *)(a1 + 76) = *(_BYTE *)(v5 + 20);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v5 + 12);
  if ( v3 )
    *(_DWORD *)(a1 + 140) = v3 - 1;
  return 1;
}
