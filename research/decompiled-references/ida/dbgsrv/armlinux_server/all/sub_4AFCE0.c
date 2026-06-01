/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFCE0
// Address: 0x00000000004AFCE0

//----- (00000000004AFCE0) ----------------------------------------------------
_BYTE *__fastcall sub_4AFCE0(_BYTE *result, unsigned __int8 *a2, __int64 a3)
{
  size_t v3; // x2
  _BYTE *v4; // x4

  v3 = a3 - (_QWORD)a2;
  v4 = result;
  if ( v3 == 1 )
  {
    result = (_BYTE *)*a2;
    *v4 = (_BYTE)result;
  }
  else if ( v3 )
  {
    return memcpy(result, a2, v3);
  }
  return result;
}
