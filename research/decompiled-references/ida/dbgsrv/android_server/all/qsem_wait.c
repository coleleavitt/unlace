/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x00000000000C16DC

//----- (00000000000C16DC) ----------------------------------------------------
bool __fastcall qsem_wait(_BOOL8 result, int a2)
{
  sem_t *v3; // x19
  __time_t v4; // x8
  __int64 v5; // x0
  int v6; // w20
  __int64 v7; // x0
  struct timespec abstime; // [xsp+8h] [xbp-38h] BYREF
  __int64 v9; // [xsp+18h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    v3 = (sem_t *)(result + 24);
    if ( *(_QWORD *)(result + 8) > 1u )
      v3 = (sem_t *)v3->__align;
    if ( a2 == -1 )
    {
      do
      {
        v7 = sem_wait(v3);
        v6 = v7;
      }
      while ( (_DWORD)v7 && *(_DWORD *)__errno(v7) == 4 );
      return v6 == 0;
    }
    if ( sub_BEE14(&abstime) )
    {
      v4 = abstime.tv_sec + a2 / 1000;
      abstime.tv_sec = v4;
      abstime.tv_nsec += 1000000 * (a2 % 1000);
      if ( abstime.tv_nsec >= 1000000000 )
      {
        abstime.tv_sec = v4 + 1;
        abstime.tv_nsec -= 1000000000LL;
      }
      do
      {
        v5 = sem_timedwait(v3, &abstime);
        v6 = v5;
      }
      while ( (_DWORD)v5 && *(_DWORD *)__errno(v5) == 4 );
      return v6 == 0;
    }
    return 0;
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
