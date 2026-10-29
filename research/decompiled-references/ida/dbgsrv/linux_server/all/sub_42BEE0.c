/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BEE0
// Address: 0x000000000042BEE0

//----- (000000000042BEE0) ----------------------------------------------------
__int64 sub_42BEE0()
{
  pthread_mutex_t *v0; // r12
  FILE **v1; // rbx
  FILE **v2; // rbp

  v0 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v1 = (FILE **)qword_4C80A0;
  v2 = (FILE **)(qword_4C80A0 + 8 * xmmword_4C80A8);
  if ( (FILE **)qword_4C80A0 != v2 )
  {
    do
    {
      if ( *v1 )
        sub_480D70(*v1);
      ++v1;
    }
    while ( v2 != v1 );
  }
  *(_QWORD *)&xmmword_4C80A8 = 0;
  sub_482F10(v0);
  return 0;
}
// 42BEE0: using guessed type __int64 sub_42BEE0();
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
