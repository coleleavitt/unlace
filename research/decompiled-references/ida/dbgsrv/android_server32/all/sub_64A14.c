/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64A14
// Address: 0x00064A14

//----- (00064A14) --------------------------------------------------------
_DWORD *__fastcall sub_64A14(int a1, int a2)
{
  int v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r2
  int v6; // r3

  v3 = *(_DWORD *)(a1 + 24);
  result = nullptr;
  if ( 32 * v3 )
  {
    v5 = *(_DWORD **)(a1 + 20);
    v6 = 32 * v3;
    while ( *v5 != a2 )
    {
      v6 -= 32;
      v5 += 8;
      if ( !v6 )
        return result;
    }
    return v5;
  }
  return result;
}
