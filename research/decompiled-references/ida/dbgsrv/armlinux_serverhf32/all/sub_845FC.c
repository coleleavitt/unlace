/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_845FC
// Address: 0x000845FC

//----- (000845FC) --------------------------------------------------------
bool __fastcall sub_845FC(int a1)
{
  _BYTE *v1; // r3
  int v4; // r0
  _BYTE *v5; // r3

  v1 = *(_BYTE **)(a1 + 12);
  if ( *v1 != 95 )
    return 1;
  *(_DWORD *)(a1 + 12) = v1 + 1;
  if ( v1[1] != 95 )
    return sub_84278((unsigned __int8 **)(a1 + 12)) >= 0;
  *(_DWORD *)(a1 + 12) = v1 + 2;
  v4 = sub_84278((unsigned __int8 **)(a1 + 12));
  if ( v4 < 0 )
    return 0;
  if ( v4 <= 9 )
    return 1;
  v5 = *(_BYTE **)(a1 + 12);
  if ( *v5 != 95 )
    return 0;
  *(_DWORD *)(a1 + 12) = v5 + 1;
  return 1;
}
