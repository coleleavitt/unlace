/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52902
// Address: 0x00052902

//----- (00052902) --------------------------------------------------------
int __fastcall sub_52902(int a1)
{
  int v2; // r1
  int *v3; // r5
  int result; // r0
  FILE *v5; // r0
  int v6; // r0
  int v7; // [sp+4h] [bp-8h]
  int v8; // [sp+8h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 132);
  v3 = (int *)(a1 + 132);
  result = 0;
  if ( v2 )
  {
    v5 = *(FILE **)(a1 + 140);
    if ( v5 )
      qfclose(v5);
    qfree(*(void **)(a1 + 144));
    *(_DWORD *)(a1 + 144) = 0;
    v6 = *(_DWORD *)(a1 + 128);
    v8 = *v3;
    v7 = *v3 - 1;
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(v6 + 24 * v7 + 4);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(v6 + 24 * v7 + 16);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(v6 + 24 * v7);
    *(_BYTE *)(a1 + 68) = *(_BYTE *)(v6 + 24 * v7 + 20);
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(v6 + 24 * v7 + 8);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(v6 + 24 * v7 + 12);
    result = 1;
    if ( v8 )
      *v3 = v7;
  }
  return result;
}
