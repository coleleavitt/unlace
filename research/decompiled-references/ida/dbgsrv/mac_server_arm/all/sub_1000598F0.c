/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000598F0
// Address: 0x00000001000598F0

//----- (00000001000598F0) ----------------------------------------------------
pthread_mutex_t *sub_1000598F0()
{
  return qmutex_lock((pthread_mutex_t *)qword_10009DAA8);
}
// 10009DAA8: using guessed type __int64 qword_10009DAA8;
