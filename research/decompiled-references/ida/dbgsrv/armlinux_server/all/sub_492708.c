/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492708
// Address: 0x0000000000492708

//----- (0000000000492708) ----------------------------------------------------
__int64 __fastcall sub_492708(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // x0
  time_t timer; // [xsp+30h] [xbp-30h] BYREF
  char buf[32]; // [xsp+38h] [xbp-28h] BYREF

  timer = a3;
  if ( a3 < 0 || !ctime_r(&timer, buf) )
  {
    sub_493350(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
  else
  {
    sub_493350(a1, (unsigned __int8 *)buf, a2);
    result = 1;
    if ( a2 > 8 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
  }
  return result;
}
