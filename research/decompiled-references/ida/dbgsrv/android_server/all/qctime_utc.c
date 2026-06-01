/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime_utc
// Address: 0x00000000000BF018

//----- (00000000000BF018) ----------------------------------------------------
__int64 __fastcall qctime_utc(pthread_mutex_t *a1, unsigned __int64 a2, int a3)
{
  size_t v5; // x21
  size_t v6; // x23
  int v7; // w0
  struct tm v9; // [xsp+0h] [xbp-90h] BYREF
  time_t timer[5]; // [xsp+38h] [xbp-58h] BYREF

  timer[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  timer[0] = a3;
  if ( (a3 & 0x80000000) == 0 && gmtime_r(timer, &v9) && asctime_r(&v9, (char *)timer) )
  {
    qstrncpy(a1, (char *)timer, a2);
    if ( a2 >= 9 && a1->__size[8] == 32 )
      a1->__size[8] = 48;
    v5 = strlen((const char *)a1);
    do
    {
      v6 = v5;
      if ( !v5 )
        break;
      if ( a1->__size[v5 - 1] < 0 )
        break;
      v7 = (unsigned __int8)a1->__size[--v5];
    }
    while ( isspace(v7) );
    if ( v6 + 6 <= a2 )
      qstrncpy((pthread_mutex_t *)((char *)a1 + v6), " UTC\n", 6);
    return 1;
  }
  else
  {
    qstrncpy(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
}
