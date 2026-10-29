/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_pthread_getspecific
// Address: 0x0009BDFC

//----- (0009BDFC) --------------------------------------------------------
// attributes: thunk
void *__fastcall j_pthread_getspecific(pthread_key_t key)
{
  return pthread_getspecific(key);
}
