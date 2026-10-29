/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BA28
// Address: 0x0009BA28

//----- (0009BA28) --------------------------------------------------------
int (**sub_9BA28())(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0

  result = sub_9B948();
  if ( result )
    return (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_lock((pthread_mutex_t *)&dword_E07D0);
  return result;
}
// E07D0: using guessed type int dword_E07D0;
