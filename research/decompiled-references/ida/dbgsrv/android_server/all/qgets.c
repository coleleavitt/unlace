/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgets
// Address: 0x00000000000BE02C

//----- (00000000000BE02C) ----------------------------------------------------
char *__fastcall qgets(pthread_mutex_t *a1, __int64 a2)
{
  return qfgets(a1, a2, &_sF);
}
// 169790: using guessed type FILE _sF;
