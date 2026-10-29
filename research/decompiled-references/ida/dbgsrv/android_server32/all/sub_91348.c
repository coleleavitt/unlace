/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91348
// Address: 0x00091348

//----- (00091348) --------------------------------------------------------
int __fastcall sub_91348(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r0
  int result; // r0

  v4 = *(_DWORD *)(a2 + 16);
  if ( !v4 )
  {
    *(_DWORD *)(a2 + 24) = a4;
    result = 1;
    *(_DWORD *)(a2 + 16) = a3;
    goto LABEL_5;
  }
  if ( v4 != a3 )
  {
    *(_DWORD *)(a2 + 24) = 2;
    v5 = *(_DWORD *)(a2 + 36);
    *(_BYTE *)(a2 + 54) = 1;
    result = v5 + 1;
LABEL_5:
    *(_DWORD *)(a2 + 36) = result;
    return result;
  }
  result = *(_DWORD *)(a2 + 24);
  if ( result == 2 )
    *(_DWORD *)(a2 + 24) = a4;
  return result;
}
