/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9C40
// Address: 0x000A9C40

//----- (000A9C40) --------------------------------------------------------
ssize_t __cdecl sub_A9C40(char *buf, size_t len)
{
  ssize_t result; // eax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !(_BYTE)under_debugger )
      interr(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}
// 13E34C: using guessed type int under_debugger;
