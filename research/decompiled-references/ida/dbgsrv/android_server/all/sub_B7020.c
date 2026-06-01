/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7020
// Address: 0x00000000000B7020

//----- (00000000000B7020) ----------------------------------------------------
__int64 __fastcall sub_B7020(char *buf, size_t len)
{
  __int64 result; // x0

  result = readlink("/proc/self/exe", buf, len);
  if ( result < 1 || result >= len )
  {
    if ( !under_debugger )
      result = (__int64)interr(1208);
    __break(1u);
    return (__int64)idadir((_BYTE *)result);
  }
  else
  {
    buf[result] = 0;
  }
  return result;
}
// 168DF0: using guessed type char under_debugger;
