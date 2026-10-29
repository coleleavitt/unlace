/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_911AC
// Address: 0x000911AC

//----- (000911AC) --------------------------------------------------------
pthread_mutex_t **__fastcall sub_911AC(pthread_mutex_t **a1)
{
  pthread_mutex_unlock(*a1);
  return a1;
}
