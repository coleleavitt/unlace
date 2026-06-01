/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79808
// Address: 0x00079808

//----- (00079808) --------------------------------------------------------
ssize_t __fastcall sub_79808(char *buf, size_t len)
{
  ssize_t result; // r0

  result = readlink("/proc/self/exe", buf, len);
  if ( result < 1 || result >= len )
  {
    if ( !under_debugger )
      interr(1208);
    __debugbreak();
  }
  buf[result] = 0;
  return result;
}
// E0550: using guessed type char under_debugger;
