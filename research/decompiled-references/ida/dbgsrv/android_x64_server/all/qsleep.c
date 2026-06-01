/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x00000000000C3AC0

//----- (00000000000C3AC0) ----------------------------------------------------
unsigned __int64 __fastcall qsleep(int a1)
{
  _DWORD *v1; // rbx
  struct timespec v3; // [rsp+0h] [rbp-48h] BYREF
  struct timespec requested_time; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  if ( nanosleep(&requested_time, &v3) )
  {
    v1 = (_DWORD *)__errno(&requested_time);
    do
    {
      if ( *v1 != 4 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1256);
        BUG();
      }
      requested_time = v3;
    }
    while ( nanosleep(&requested_time, &v3) );
  }
  return __readfsqword(0x28u);
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
