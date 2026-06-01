/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D01A0
// Address: 0x080D01A0

//----- (080D01A0) --------------------------------------------------------
unsigned int __cdecl sub_80D01A0(int a1)
{
  unsigned int result; // eax
  int v2; // [esp-14h] [ebp-38h]
  int v3; // [esp-10h] [ebp-34h]
  int v4; // [esp-Ch] [ebp-30h]
  struct timespec requested_time; // [esp+0h] [ebp-24h] BYREF
  struct timespec remaining; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v7; // [esp+14h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  requested_time.tv_sec = a1 / 1000;
  requested_time.tv_nsec = 1000000 * (a1 % 1000);
  while ( nanosleep(&requested_time, &remaining) )
  {
    if ( *__errno_location() != 4 )
    {
      if ( !byte_811F8A1 )
      {
        if ( v7 == __readgsdword(0x14u) )
          sub_80CFF40(1256, v2, v3, v4);
        sub_80D7AB0();
      }
      BUG();
    }
    requested_time = remaining;
  }
  result = v7 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80D0257: variable 'v2' is possibly undefined
// 80D0257: variable 'v3' is possibly undefined
// 80D0257: variable 'v4' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
