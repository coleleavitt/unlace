/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406F78
// Address: 0x0000000000406F78

//----- (0000000000406F78) ----------------------------------------------------
pthread_mutex_t *sub_406F78()
{
  pthread_mutex_t *result; // x0

  result = (pthread_mutex_t *)qword_524530;
  if ( !qword_524530 )
    return sub_4944D8();
  return result;
}
// 524530: using guessed type __int64 qword_524530;
