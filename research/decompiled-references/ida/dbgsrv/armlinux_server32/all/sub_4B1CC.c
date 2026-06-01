/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1CC
// Address: 0x0004B1CC

//----- (0004B1CC) --------------------------------------------------------
int __fastcall sub_4B1CC(int a1)
{
  FILE *v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r3

  v2 = *(FILE **)(a1 + 148);
  if ( v2 )
    sub_778BC(v2);
  sub_77F70(*(void **)(a1 + 152));
  v3 = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 152) = 0;
  v4 = *(_DWORD *)(a1 + 136);
  v5 = 24 * v3 - 24;
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(v4 + v5 + 4);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(v4 + v5 + 16);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v4 + v5);
  *(_BYTE *)(a1 + 76) = *(_BYTE *)(v4 + v5 + 20);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(v4 + v5 + 8);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v4 + v5 + 12);
  if ( v3 )
    *(_DWORD *)(a1 + 140) = v3 - 1;
  return 1;
}
