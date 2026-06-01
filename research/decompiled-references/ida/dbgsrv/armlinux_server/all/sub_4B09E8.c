/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B09E8
// Address: 0x00000000004B09E8

//----- (00000000004B09E8) ----------------------------------------------------
_QWORD *__fastcall sub_4B09E8(_QWORD *result, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // x5
  _QWORD *v4; // x3

  v3 = result[1];
  v4 = result;
  if ( v3 < a2 )
    return sub_4B0898(result, result[1], 0, a2 - v3, a3);
  if ( v3 > a2 )
  {
    result = (_QWORD *)*result;
    v4[1] = a2;
    *((_BYTE *)result + a2) = 0;
  }
  return result;
}
