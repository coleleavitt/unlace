/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58000
// Address: 0x00058000

//----- (00058000) --------------------------------------------------------
_BYTE *__fastcall sub_58000(int a1, int a2, unsigned int a3, unsigned int a4)
{
  _BYTE *result; // r0
  _BYTE v6[10]; // [sp+0h] [bp-14h] BYREF
  _BYTE v7[2]; // [sp+Ah] [bp-Ah] BYREF

  result = sub_760FC(v6, (unsigned int)v7, a3, a4);
  if ( result != v6 )
    return sub_57F50(a1, v6, result - v6);
  return result;
}
