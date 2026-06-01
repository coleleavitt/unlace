/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DD18
// Address: 0x000000000009DD18

//----- (000000000009DD18) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9DD18(__int64 a1, pthread_mutex_t *a2, char a3)
{
  pthread_mutex_t *result; // x0

  sub_A3C7C(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_15E5D0, 1);
  if ( *(_BYTE *)(a1 + 136) )
    return cliopts_t_add(a2, (__int128 *)&qword_15E5F8, 2);
  return result;
}
// 15E5D0: using guessed type __int64 qword_15E5D0;
// 15E5F8: using guessed type __int64 qword_15E5F8;
