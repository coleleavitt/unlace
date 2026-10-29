/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C598
// Address: 0x0006C598

//----- (0006C598) --------------------------------------------------------
void __fastcall sub_6C598(pthread_mutex_t **a1)
{
  *a1 = (pthread_mutex_t *)&off_DA95C;
  qmutex_free(a1[4]);
  *a1 = (pthread_mutex_t *)&off_DA978;
  sub_6C634((int)(a1 + 1), a1[2]);
  operator delete(a1);
}
// DA95C: using guessed type _UNKNOWN *off_DA95C;
// DA978: using guessed type _UNKNOWN *off_DA978;
