/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EF58
// Address: 0x0004EF58

//----- (0004EF58) --------------------------------------------------------
int __fastcall sub_4EF58(int a1, int a2, int a3)
{
  int i; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r2

  for ( i = *(_DWORD *)(a1 + 32); i; i = *(_DWORD *)(a1 + 32) )
  {
    v7 = i - 1;
    v8 = *(_DWORD *)(a1 + 28) + 28 * (i - 1);
    *(_DWORD *)a1 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v8 + 16);
    v9 = *(_DWORD *)(v8 + 24);
    *(_DWORD *)(a1 + 32) = v7;
    *(_DWORD *)(a1 + 40) = v9;
    sub_1B3BC((char **)v8);
  }
  *(_BYTE *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 104) = sub_4EFDC;
  *(_DWORD *)(a1 + 108) = a1 + 112;
  *(_DWORD *)(a1 + 112) = a2;
  if ( a3 )
  {
    sub_4EDEC(a1);
    *(_BYTE *)(a1 + 488) = 1;
    *(_DWORD *)(a1 + 464) = a3;
  }
  return 0;
}
