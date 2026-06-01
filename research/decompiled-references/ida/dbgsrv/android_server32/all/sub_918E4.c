/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_918E4
// Address: 0x000918E4

//----- (000918E4) --------------------------------------------------------
int __fastcall sub_918E4(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r2

  result = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 53) = 1;
  if ( result != a4 )
    return result;
  v6 = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 52) = 1;
  if ( v6 )
  {
    if ( v6 != a3 )
    {
      v7 = *(_DWORD *)(a2 + 36);
      *(_BYTE *)(a2 + 54) = 1;
      result = v7 + 1;
      *(_DWORD *)(a2 + 36) = result;
      return result;
    }
    v9 = *(_DWORD *)(a2 + 24);
    if ( v9 == 2 )
    {
      *(_DWORD *)(a2 + 24) = a5;
      v9 = a5;
    }
    result = *(_DWORD *)(a2 + 48);
    if ( result == 1 && v9 == 1 )
      goto LABEL_15;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = a5;
    v8 = a5 == 1;
    *(_DWORD *)(a2 + 16) = a3;
    result = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 36) = 1;
    if ( a5 == 1 )
      v8 = result == 1;
    if ( v8 )
    {
LABEL_15:
      *(_BYTE *)(a2 + 54) = 1;
      return 1;
    }
  }
  return result;
}
