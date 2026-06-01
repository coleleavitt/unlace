/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x00000000000BB4F4

//----- (00000000000BB4F4) ----------------------------------------------------
pthread_mutex_t *__fastcall pack_dq(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  pthread_mutex_t *v5; // x0

  v5 = pack_dd(a1, a2, a3);
  return pack_dd(v5, a2, HIDWORD(a3));
}
