/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57FBC
// Address: 0x00057FBC

//----- (00057FBC) --------------------------------------------------------
_BYTE *__fastcall sub_57FBC(int a1, unsigned int a2)
{
  _BYTE *result; // r0
  _BYTE v4[5]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v5[3]; // [sp+9h] [bp-7h] BYREF

  result = sub_75FB0(v4, (unsigned int)v5, a2);
  if ( result != v4 )
    return sub_57F50(a1, v4, result - v4);
  return result;
}
