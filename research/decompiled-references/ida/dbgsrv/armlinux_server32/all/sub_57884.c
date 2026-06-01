/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57884
// Address: 0x00057884

//----- (00057884) --------------------------------------------------------
int __fastcall sub_57884(int a1, int a2)
{
  int v2; // r6
  int v3; // r8
  int v5; // r7
  char *v7; // r0
  int v8; // r2

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v2 )
    return 0;
  v5 = v2 + 1;
  if ( v2 != -1 )
  {
    v7 = (char *)sub_78018(a2 + 8, nullptr, v2 + 1, 1u);
    v8 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = v7;
    memset(&v7[v8], 0, v5 - v8);
    *(_DWORD *)(a2 + 12) = v5;
    v5 = *(_DWORD *)(a2 + 8);
  }
  *(_BYTE *)(v5 + v2) = 0;
  if ( v2 == sub_57384(v3, *(_DWORD *)(a2 + 8), v2) )
    return 0;
  else
    return sub_378E4((_BYTE *)a2, "read error");
}
