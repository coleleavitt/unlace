/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3C7C
// Address: 0x00000000000A3C7C

//----- (00000000000A3C7C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A3C7C(__int64 a1, pthread_mutex_t *a2, char a3)
{
  pthread_mutex_t *result; // x0

  result = cliopts_t_add(a2, (__int128 *)&qword_15F0F8, 5);
  if ( (a3 & 1) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_15F1C0, 1);
  return result;
}
// 15F0F8: using guessed type __int64 qword_15F0F8;
// 15F1C0: using guessed type __int64 qword_15F1C0;
