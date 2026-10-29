/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472860
// Address: 0x0000000000472860

//----- (0000000000472860) ----------------------------------------------------
bool __fastcall sub_472860(_QWORD *a1)
{
  pthread_mutex_t *v2; // rbp
  char *v3; // rdi
  char *v4; // rdx

  *a1 = &off_4C4C98;
  v2 = (pthread_mutex_t *)qword_4C8360;
  sub_482EC0((pthread_mutex_t *)qword_4C8360);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 8 * xmmword_4C8370;
  if ( ptr != v4 )
  {
    while ( a1 != *(_QWORD **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        return sub_482F10(v2);
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 8, v4 - v3 - 8);
      *(_QWORD *)&xmmword_4C8370 = xmmword_4C8370 - 1;
    }
  }
  return sub_482F10(v2);
}
// 4C4C98: using guessed type _UNKNOWN *off_4C4C98;
// 4C8360: using guessed type __int64 qword_4C8360;
// 4C8370: using guessed type __int128 xmmword_4C8370;
