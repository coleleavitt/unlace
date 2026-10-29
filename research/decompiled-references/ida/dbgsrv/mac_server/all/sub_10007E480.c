/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E480
// Address: 0x000000010007E480

//----- (000000010007E480) ----------------------------------------------------
int __fastcall sub_10007E480(pthread_mutex_t **a1)
{
  pthread_mutex_t *v1; // rdi
  int result; // eax

  v1 = *a1;
  if ( v1 )
    return pthread_mutex_unlock(v1);
  return result;
}
