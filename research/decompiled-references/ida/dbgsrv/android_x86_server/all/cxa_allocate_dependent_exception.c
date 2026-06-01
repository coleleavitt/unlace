/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_dependent_exception
// Address: 0x000BCFA0

//----- (000BCFA0) --------------------------------------------------------
_DWORD *_cxa_allocate_dependent_exception()
{
  _DWORD *result; // eax

  result = sub_BEBA0(0x50u);
  if ( !result )
    std::terminate();
  result[1] = 0;
  *result = 0;
  result[3] = 0;
  result[2] = 0;
  result[5] = 0;
  result[4] = 0;
  result[7] = 0;
  result[6] = 0;
  result[9] = 0;
  result[8] = 0;
  result[11] = 0;
  result[10] = 0;
  result[13] = 0;
  result[12] = 0;
  result[15] = 0;
  result[14] = 0;
  result[17] = 0;
  result[16] = 0;
  result[19] = 0;
  result[18] = 0;
  return result;
}
