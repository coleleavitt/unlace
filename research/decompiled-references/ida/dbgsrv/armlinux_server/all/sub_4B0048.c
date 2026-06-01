/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0048
// Address: 0x00000000004B0048

//----- (00000000004B0048) ----------------------------------------------------
_QWORD *__fastcall sub_4B0048(_QWORD *result, _QWORD *a2)
{
  __int64 v2; // x5

  *result = result + 2;
  if ( a2 + 2 == (_QWORD *)*a2 )
  {
    v2 = a2[3];
    result[2] = a2[2];
    result[3] = v2;
  }
  else
  {
    *result = *a2;
    result[2] = a2[2];
  }
  result[1] = a2[1];
  *a2 = a2 + 2;
  a2[1] = 0;
  *((_BYTE *)a2 + 16) = 0;
  return result;
}
