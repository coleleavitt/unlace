/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap128
// Address: 0x000850A8

//----- (000850A8) --------------------------------------------------------
int __fastcall swap128(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r1
  int v4; // r6
  int result; // r0
  int v6; // r1

  v1 = a1;
  v2 = swap64(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  v4 = v3;
  result = swap64(*(_DWORD *)v1, *(_DWORD *)(v1 + 4));
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 4) = v4;
  v1 += 8;
  *(_DWORD *)v1 = result;
  *(_DWORD *)(v1 + 4) = v6;
  return result;
}
// 850B6: variable 'v3' is possibly undefined
// 850C4: variable 'v6' is possibly undefined
