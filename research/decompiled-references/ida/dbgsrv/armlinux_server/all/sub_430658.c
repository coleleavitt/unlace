/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430658
// Address: 0x0000000000430658

//----- (0000000000430658) ----------------------------------------------------
__int64 __fastcall sub_430658(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  unsigned __int64 v3; // x19
  __int64 v5; // x0
  __int64 i; // x1

  v2 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < qword_522130 )
    {
      sub_4906A0(*(FILE **)(qword_522128 + 8 * v3));
      *(_QWORD *)(qword_522128 + 8 * v3) = 0;
      v5 = qword_522130;
      if ( qword_522130 )
      {
        for ( i = qword_522128 + 8 * qword_522130; !*(_QWORD *)(i - 8); i -= 8 )
        {
          qword_522130 = --v5;
          if ( !v5 )
            break;
        }
      }
    }
  }
  sub_494760(v2);
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
// 522288: using guessed type __int64 qword_522288;
