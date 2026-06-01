/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008984
// Address: 0x0000000100008984

//----- (0000000100008984) ----------------------------------------------------
__int64 __fastcall sub_100008984(__int64 a1, __int64 *a2)
{
  __int64 result; // x0

  result = sub_100008740(a1, a2, 1);
  if ( (_DWORD)result == 1 )
  {
    if ( sub_100059130(a1, a2) )
    {
      return 4294967290LL;
    }
    else
    {
      sub_1000591B8(a1, a2);
      return 1;
    }
  }
  return result;
}
