/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B948
// Address: 0x0009B948

//----- (0009B948) --------------------------------------------------------
int (**sub_9B948())(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0

  result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))(&dword_0 + 1);
  if ( !&pthread_create )
    return &pthread_create;
  return result;
}
// 0: using guessed type int dword_0;
