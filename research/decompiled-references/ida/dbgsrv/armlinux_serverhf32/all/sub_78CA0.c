/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78CA0
// Address: 0x00078CA0

//----- (00078CA0) --------------------------------------------------------
int __fastcall sub_78CA0(int a1)
{
  int result; // r0
  struct timespec requested_time; // [sp+4h] [bp-14h] BYREF
  struct timespec remaining; // [sp+Ch] [bp-Ch] BYREF

  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  while ( 1 )
  {
    result = nanosleep(&requested_time, &remaining);
    if ( !result )
      break;
    if ( *_errno_location() != 4 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1256);
    }
    requested_time = remaining;
  }
  return result;
}
// D5C00: using guessed type char under_debugger;
