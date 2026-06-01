/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B700
// Address: 0x000000000043B700

//----- (000000000043B700) ----------------------------------------------------
__int64 sub_43B700()
{
  pthread_mutex_t *v0; // x20
  __int64 v1; // x19

  v0 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  if ( qword_522160 >= (unsigned __int64)qword_522170 )
  {
    v1 = 0;
  }
  else
  {
    v1 = *(_QWORD *)(qword_522168 + 8 * qword_522160);
    if ( v1 )
      ++*(_DWORD *)(v1 + 12);
  }
  sub_494760(v0);
  return v1;
}
// 522160: using guessed type __int64 qword_522160;
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522180: using guessed type __int64 qword_522180;
