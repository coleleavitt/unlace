/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x0007F020

//----- (0007F020) --------------------------------------------------------
int __fastcall qsleep(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  struct timespec v4; // [sp+0h] [bp-18h] BYREF
  struct timespec requested_time; // [sp+8h] [bp-10h] BYREF
  int v6; // [sp+14h] [bp-4h]

  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  v1 = nanosleep(&requested_time, &v4);
  if ( v1 )
  {
    v2 = (_DWORD *)_errno(v1);
    do
    {
      if ( *v2 != 4 )
      {
        if ( !under_debugger )
          interr(1256);
        __debugbreak();
      }
      requested_time = v4;
    }
    while ( nanosleep(&requested_time, &v4) );
  }
  return _stack_chk_guard - v6;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
