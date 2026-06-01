/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406F90
// Address: 0x0000000000406F90

//----- (0000000000406F90) ----------------------------------------------------
_QWORD *sub_406F90()
{
  _QWORD *result; // x0

  qword_524540 = 0;
  qword_524548 = 0;
  qword_524550 = 0;
  qword_524558 = 0;
  qword_524560 = 0;
  qword_524568 = 0;
  qword_524580 = 72704;
  result = malloc(0x11C00u);
  qword_524578 = (__int64)result;
  if ( result )
  {
    *result = 72704;
    result[1] = 0;
    qword_524570 = (__int64)result;
  }
  else
  {
    qword_524570 = 0;
    qword_524580 = 0;
  }
  return result;
}
// 524540: using guessed type __int64 qword_524540;
// 524548: using guessed type __int64;
// 524550: using guessed type __int64 qword_524550;
// 524558: using guessed type __int64 qword_524558;
// 524560: using guessed type __int64 qword_524560;
// 524568: using guessed type __int64 qword_524568;
// 524570: using guessed type __int64 qword_524570;
// 524578: using guessed type __int64 qword_524578;
// 524580: using guessed type __int64 qword_524580;
