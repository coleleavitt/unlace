/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58140
// Address: 0x00058140

//----- (00058140) --------------------------------------------------------
_BYTE *__fastcall sub_58140(int a1, unsigned int a2)
{
  _BYTE *result; // r0
  _BYTE v4[5]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v5[3]; // [sp+9h] [bp-7h] BYREF

  result = sub_76118(v4, (unsigned int)v5, a2);
  if ( result != v4 )
    return sub_580D4(a1, v4, result - v4);
  return result;
}
