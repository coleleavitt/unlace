/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsleep
// Address: 0x000B17A0

//----- (000B17A0) --------------------------------------------------------
unsigned int __cdecl qsleep(int a1)
{
  int v1; // ecx
  _DWORD *v2; // esi
  struct timespec remaining; // [esp+8h] [ebp-24h] BYREF
  struct timespec requested_time; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v6; // [esp+18h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  if ( nanosleep(&requested_time, &remaining) )
  {
    v2 = (_DWORD *)__errno(v1);
    do
    {
      if ( *v2 != 4 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1256);
        BUG();
      }
      requested_time = remaining;
    }
    while ( nanosleep(&requested_time, &remaining) );
  }
  return __readgsdword(0x14u);
}
// B1806: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
