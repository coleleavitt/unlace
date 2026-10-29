/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88378
// Address: 0x0000000000088378

//----- (0000000000088378) ----------------------------------------------------
_QWORD **__fastcall sub_88378(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  _QWORD **result; // x0
  _QWORD **v5; // x21

  v2 = (void *)a1[526];
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = off_15DC08;
  if ( v2 )
  {
    a1[527] = 0;
    qfree(v2);
    a1[526] = 0;
    a1[528] = 0;
  }
  v3 = (void *)a1[523];
  if ( v3 )
  {
    a1[524] = 0;
    qfree(v3);
    a1[523] = 0;
    a1[525] = 0;
  }
  result = (_QWORD **)a1[519];
  if ( a1 + 519 != result )
  {
    do
    {
      v5 = (_QWORD **)*result;
      *result[1] = *result;
      (*result)[1] = result[1];
      qfree(result);
      result = v5;
      --a1[521];
    }
    while ( a1 + 519 != v5 );
  }
  return result;
}
// 15DC08: using guessed type __int64 (__fastcall *off_15DC08[2])();
