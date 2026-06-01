/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x00000000000BECE4

//----- (00000000000BECE4) ----------------------------------------------------
__int64 __fastcall qsleep(int a1)
{
  __int64 result; // x0
  _DWORD *v2; // x19
  struct timespec v3; // [xsp+0h] [xbp-50h] BYREF
  struct timespec requested_time; // [xsp+10h] [xbp-40h] BYREF
  __int64 v5; // [xsp+28h] [xbp-28h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  result = nanosleep(&requested_time, &v3);
  if ( (_DWORD)result )
  {
    v2 = (_DWORD *)__errno(result);
    do
    {
      if ( *v2 != 4 )
      {
        if ( !under_debugger )
          interr(1256);
        __break(1u);
      }
      requested_time = v3;
      result = nanosleep(&requested_time, &v3);
    }
    while ( (_DWORD)result );
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
