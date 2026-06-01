/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C178
// Address: 0x0008C178

//----- (0008C178) --------------------------------------------------------
_DWORD *__fastcall sub_8C178(_DWORD *result, int a2)
{
  int *v2; // r3
  int v3; // r7
  int v4; // r6
  int v5; // r5
  int v6; // r3
  _BYTE *v7; // r3

  *result = result + 2;
  v2 = (int *)(a2 + 8);
  if ( a2 + 8 == *(_DWORD *)a2 )
  {
    v3 = *v2;
    v4 = *(_DWORD *)(a2 + 12);
    v5 = *(_DWORD *)(a2 + 16);
    v6 = *(_DWORD *)(a2 + 20);
    result[2] = v3;
    result[3] = v4;
    result[4] = v5;
    result[5] = v6;
    result[1] = *(_DWORD *)(a2 + 4);
    v7 = *(_BYTE **)a2;
    *(_DWORD *)(a2 + 4) = 0;
    *v7 = 0;
  }
  else
  {
    *result = *(_DWORD *)a2;
    result[1] = *(_DWORD *)(a2 + 4);
    result[2] = *(_DWORD *)(a2 + 8);
    *(_DWORD *)a2 = v2;
    *(_DWORD *)(a2 + 4) = 0;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return result;
}
