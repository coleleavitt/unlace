/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_818B8
// Address: 0x000818B8

//----- (000818B8) --------------------------------------------------------
_BYTE *__fastcall sub_818B8(_BYTE *result, _BYTE *a2, int a3)
{
  size_t v3; // r2

  v3 = a3 - (_DWORD)a2;
  if ( v3 == 1 )
  {
    *result = *a2;
  }
  else if ( v3 )
  {
    return j_memcpy(result, a2, v3);
  }
  return result;
}
