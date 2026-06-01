/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4944D8
// Address: 0x00000000004944D8

//----- (00000000004944D8) ----------------------------------------------------
pthread_mutex_t *sub_4944D8()
{
  pthread_mutex_t *result; // x0

  qword_524530 = j__pthread_self();
  result = sub_494418();
  qword_524528 = (__int64)result;
  return result;
}
// 523500: using guessed type __int64 qword_523500[512];
// 524528: using guessed type __int64 qword_524528;
// 524530: using guessed type __int64 qword_524530;
