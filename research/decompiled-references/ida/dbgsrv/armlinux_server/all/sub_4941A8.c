/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4941A8
// Address: 0x00000000004941A8

//----- (00000000004941A8) ----------------------------------------------------
bool __fastcall sub_4941A8(__int64 a1, int a2)
{
  _BOOL4 v2; // w21
  sem_t *v4; // x19
  __time_t v5; // x1
  __syscall_slong_t v6; // x0
  struct timespec tp; // [xsp+38h] [xbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v4 = (sem_t *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) > 1u )
      v4 = *(sem_t **)(a1 + 24);
    if ( a2 == -1 )
    {
      do
      {
        if ( !sem_wait(v4) )
          return 1;
      }
      while ( *__errno_location() == 4 );
      return 0;
    }
    else
    {
      v2 = sub_492610(&tp);
      if ( v2 )
      {
        v5 = tp.tv_sec + a2 / 1000;
        tp.tv_sec = v5;
        v6 = tp.tv_nsec + 1000000 * (a2 % 1000);
        if ( v6 > 999999999 )
        {
          v6 -= 1000000000LL;
          tp.tv_sec = v5 + 1;
        }
        tp.tv_nsec = v6;
        while ( sem_timedwait(v4, &tp) )
        {
          if ( *__errno_location() != 4 )
            return 0;
        }
      }
    }
  }
  return v2;
}
