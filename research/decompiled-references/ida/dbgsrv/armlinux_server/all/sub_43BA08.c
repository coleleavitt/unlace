/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BA08
// Address: 0x000000000043BA08

//----- (000000000043BA08) ----------------------------------------------------
__int64 __fastcall sub_43BA08(__int64 *a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x2

  v2 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  if ( !a1 )
    a1 = qword_5201A8;
  if ( !qword_522170 )
  {
LABEL_8:
    sub_494760(v2);
    return 0;
  }
  v3 = 0;
  if ( a1 != *(__int64 **)qword_522168 )
  {
    while ( ++v3 != qword_522170 )
    {
      if ( *(__int64 **)(qword_522168 + 8 * v3) == a1 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( qword_522160 != v3 )
  {
    qword_522160 = v3;
    nullsub_5(2, a1, v3);
  }
  sub_494760(v2);
  return 1;
}
// 47DB68: using guessed type __int64 __fastcall nullsub_5(_QWORD, _QWORD, _QWORD);
// 5201A8: using guessed type __int64 qword_5201A8[2];
// 522160: using guessed type __int64 qword_522160;
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522180: using guessed type __int64 qword_522180;
