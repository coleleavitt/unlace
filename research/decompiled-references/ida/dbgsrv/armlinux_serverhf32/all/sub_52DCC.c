/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52DCC
// Address: 0x00052DCC

//----- (00052DCC) --------------------------------------------------------
_DWORD *__fastcall sub_52DCC(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r0

  v2 = *(_DWORD **)(a1 + 20);
  v3 = &v2[8 * *(_DWORD *)(a1 + 24)];
  if ( v2 == v3 )
    return nullptr;
  while ( *v2 != a2 )
  {
    v2 += 8;
    if ( v2 == v3 )
      return nullptr;
  }
  return v2;
}
