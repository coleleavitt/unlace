/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430718
// Address: 0x0000000000430718

//----- (0000000000430718) ----------------------------------------------------
__int64 sub_430718()
{
  pthread_mutex_t *v0; // x22
  FILE **v1; // x19
  __int64 v2; // x20

  v0 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v1 = (FILE **)qword_522128;
  v2 = qword_522128 + 8 * qword_522130;
  if ( qword_522128 != v2 )
  {
    do
    {
      if ( *v1 )
        sub_4906A0(*v1);
      ++v1;
    }
    while ( (FILE **)v2 != v1 );
  }
  qword_522130 = 0;
  sub_494760(v0);
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
// 522288: using guessed type __int64 qword_522288;
