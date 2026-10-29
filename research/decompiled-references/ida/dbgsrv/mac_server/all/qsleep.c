/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x000000010007D420

//----- (000000010007D420) ----------------------------------------------------
__int64 __fastcall qsleep(int a1)
{
  timespec __rmtp; // [rsp+0h] [rbp-40h] BYREF
  timespec __rqtp; // [rsp+10h] [rbp-30h] BYREF

  __rqtp.tv_sec = a1 / 1000;
  for ( __rqtp.tv_nsec = 1000000 * (a1 % 1000); nanosleep(&__rqtp, &__rmtp); __rqtp = __rmtp )
  {
    if ( *__error() != 4 )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x4E8u);
    }
  }
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
