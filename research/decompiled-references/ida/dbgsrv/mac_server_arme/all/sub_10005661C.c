/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005661C
// Address: 0x000000010005661C

//----- (000000010005661C) ----------------------------------------------------
_QWORD *__fastcall sub_10005661C(_QWORD *result)
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
