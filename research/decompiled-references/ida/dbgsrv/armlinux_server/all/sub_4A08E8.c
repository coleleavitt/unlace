/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A08E8
// Address: 0x00000000004A08E8

//----- (00000000004A08E8) ----------------------------------------------------
_BYTE *__fastcall sub_4A08E8(_BYTE *result, unsigned __int8 *a2, size_t a3)
{
  _BYTE *v3; // x4

  v3 = result;
  if ( a3 == 1 )
  {
    result = (_BYTE *)*a2;
    *v3 = (_BYTE)result;
  }
  else if ( a3 )
  {
    return memcpy(result, a2, a3);
  }
  return result;
}
