/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B96C
// Address: 0x0009B96C

//----- (0009B96C) --------------------------------------------------------
int __fastcall sub_9B96C(pthread_key_t a1, const void *a2)
{
  return pthread_setspecific(a1, a2);
}
