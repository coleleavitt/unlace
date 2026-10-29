/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF8D0
// Address: 0x00000000004AF8D0

//----- (00000000004AF8D0) ----------------------------------------------------
_QWORD *__fastcall sub_4AF8D0(_QWORD *result, _QWORD *a2)
{
  __int64 v2; // x5

  *result = result + 2;
  if ( (_QWORD *)*a2 == a2 + 2 )
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
