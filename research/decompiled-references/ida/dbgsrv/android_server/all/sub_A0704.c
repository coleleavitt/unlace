/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0704
// Address: 0x00000000000A0704

//----- (00000000000A0704) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A0704(pthread_mutex_t *result, __int64 a2, int a3, __int64 a4)
{
  pthread_mutex_t *v6; // x21
  unsigned __int64 v7; // x22
  __int64 v8; // x23

  if ( a3 >= 1 )
  {
    v6 = result;
    v7 = 0;
    v8 = (unsigned int)a3;
    do
    {
      if ( !a4 || ((1 << (v7 & 7)) & *(unsigned __int8 *)(a4 + (v7 >> 3))) != 0 )
        result = sub_A0780(v6, a2);
      ++v7;
      a2 += 32;
    }
    while ( v8 != v7 );
  }
  return result;
}
