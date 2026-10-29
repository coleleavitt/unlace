/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovo
// Address: 0x00000000000B2D50

//----- (00000000000B2D50) ----------------------------------------------------
_WORD *__fastcall emovo(_WORD *result, _WORD *a2)
{
  __int16 v2; // w8

  v2 = result[1];
  if ( *result )
    v2 |= 0x8000u;
  a2[7] = v2;
  a2[6] = result[3];
  a2[5] = result[4];
  a2[4] = result[5];
  a2[3] = result[6];
  a2[2] = result[7];
  a2[1] = result[8];
  *a2 = result[9];
  return result;
}
