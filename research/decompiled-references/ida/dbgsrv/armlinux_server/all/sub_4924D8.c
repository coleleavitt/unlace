/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4924D8
// Address: 0x00000000004924D8

//----- (00000000004924D8) ----------------------------------------------------
__int64 __fastcall sub_4924D8(int a1)
{
  struct timespec requested_time; // [xsp+28h] [xbp-28h] BYREF
  struct timespec remaining; // [xsp+38h] [xbp-18h] BYREF
  __int64 v4; // [xsp+48h] [xbp-8h]

  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  while ( nanosleep(&requested_time, &remaining) )
  {
    if ( *__errno_location() != 4 )
    {
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(1256);
    }
    requested_time = remaining;
  }
  return v4 ^ _stack_chk_guard;
}
// 52451C: using guessed type char under_debugger;
