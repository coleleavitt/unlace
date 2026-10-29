/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DAE8
// Address: 0x000000000049DAE8

//----- (000000000049DAE8) ----------------------------------------------------
_QWORD *sub_49DAE8()
{
  _QWORD *result; // x0

  result = malloc(0x70u);
  if ( !result )
  {
    result = (_QWORD *)sub_49D8A0(112);
    if ( !result )
      sub_49DBB0();
  }
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  return result;
}
