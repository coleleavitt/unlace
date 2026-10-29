/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9B04
// Address: 0x00000000000A9B04

//----- (00000000000A9B04) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A9B04(__int64 a1, pthread_mutex_t *a2, char a3)
{
  pthread_mutex_t *result; // x0

  sub_A3C7C(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_15F410, 6);
  if ( (a3 & 2) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_15F500, 1);
  return result;
}
// 15F410: using guessed type __int64 qword_15F410;
// 15F500: using guessed type __int64 qword_15F500;
