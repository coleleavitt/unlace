/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x000000010006FC34

//----- (000000010006FC34) ----------------------------------------------------
__int64 __fastcall qsleep(int a1)
{
  __int64 result; // x0
  timespec v2; // [xsp+0h] [xbp-30h] BYREF
  timespec __rqtp; // [xsp+10h] [xbp-20h] BYREF

  __rqtp.tv_sec = a1 / 1000;
  __rqtp.tv_nsec = 1000000 * (a1 % 1000);
  while ( 1 )
  {
    result = nanosleep(&__rqtp, &v2);
    if ( !(_DWORD)result )
      break;
    if ( *__error() != 4 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(1256);
    }
    __rqtp = v2;
  }
  return result;
}
// 10009D90D: using guessed type char under_debugger;
