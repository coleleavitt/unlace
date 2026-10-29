/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_862E4
// Address: 0x000862E4

//----- (000862E4) --------------------------------------------------------
int __fastcall sub_862E4(int a1)
{
  _BYTE *v1; // r3
  int v3; // r0
  int result; // r0
  unsigned __int8 *v5; // r3
  int v6; // r2

  v1 = *(_BYTE **)(a1 + 12);
  if ( *v1 != 70 )
    return 0;
  *(_DWORD *)(a1 + 12) = v1 + 1;
  if ( v1[1] == 89 )
    *(_DWORD *)(a1 + 12) = v1 + 2;
  v3 = sub_862A4(a1, 1);
  result = sub_84278(a1, v3);
  v5 = *(unsigned __int8 **)(a1 + 12);
  v6 = *v5;
  if ( v6 == 69 )
    ++v5;
  else
    result = 0;
  if ( v6 == 69 )
    *(_DWORD *)(a1 + 12) = v5;
  return result;
}
