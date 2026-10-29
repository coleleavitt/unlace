/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BA0C
// Address: 0x0009BA0C

//----- (0009BA0C) --------------------------------------------------------
int (**sub_9BA0C())(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0

  result = sub_9B948();
  if ( result )
    return (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock((pthread_mutex_t *)&dword_E07D0);
  return result;
}
// E07D0: using guessed type int dword_E07D0;
