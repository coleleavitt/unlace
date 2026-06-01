/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B2BC
// Address: 0x0008B2BC

//----- (0008B2BC) --------------------------------------------------------
int __fastcall sub_8B2BC(int result)
{
  int v1; // r2
  int *v2; // r1
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2

  v1 = *(_DWORD *)(result + 5820);
  v2 = (int *)(result + 5820);
  if ( v1 == 16 )
  {
    v3 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v3 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v3) = *(_BYTE *)(result + 5816);
    v4 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v4 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v4) = *(_BYTE *)(result + 5817);
    v5 = 0;
    *(_WORD *)(result + 5816) = 0;
  }
  else
  {
    if ( v1 < 8 )
      return result;
    v6 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v6 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v6) = *(_BYTE *)(result + 5816);
    *(_WORD *)(result + 5816) = *(unsigned __int8 *)(result + 5817);
    v5 = *v2 - 8;
  }
  *v2 = v5;
  return result;
}
