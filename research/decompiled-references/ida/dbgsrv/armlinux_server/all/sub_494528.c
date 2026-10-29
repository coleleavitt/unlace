/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494528
// Address: 0x0000000000494528

//----- (0000000000494528) ----------------------------------------------------
pthread_t __fastcall sub_494528(void *(*a1)(void *), void *a2)
{
  int v4; // w21
  pthread_t result; // x0
  pthread_t newthread; // [xsp+30h] [xbp-50h] BYREF
  pthread_attr_t attr; // [xsp+38h] [xbp-48h] BYREF

  if ( !qword_524530 )
    sub_4944D8();
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v4 = pthread_create(&newthread, &attr, a1, a2);
  pthread_attr_destroy(&attr);
  result = newthread;
  if ( v4 )
    return 0;
  return result;
}
// 524530: using guessed type __int64 qword_524530;
