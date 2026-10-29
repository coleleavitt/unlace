/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF68
// Address: 0x0008BF68

//----- (0008BF68) --------------------------------------------------------
_BYTE *__fastcall sub_8BF68(_BYTE *result, _BYTE *a2, int a3)
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
