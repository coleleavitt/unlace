/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F944
// Address: 0x000000010002F944

//----- (000000010002F944) ----------------------------------------------------
_QWORD *__fastcall sub_10002F944(_QWORD *result)
{
  void *v1; // x8
  _QWORD *v2; // x19

  v1 = (void *)*result;
  if ( *result )
  {
    v2 = result;
    result[1] = 0;
    qfree(v1);
    *v2 = 0;
    v2[2] = 0;
    return v2;
  }
  return result;
}
