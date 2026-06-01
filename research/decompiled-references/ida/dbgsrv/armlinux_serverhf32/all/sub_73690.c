/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73690
// Address: 0x00073690

//----- (00073690) --------------------------------------------------------
ssize_t __fastcall sub_73690(char *buf, size_t len)
{
  ssize_t result; // r0
  int v5; // r4

  result = readlink("/proc/self/exe", buf, len);
  v5 = result >= len;
  if ( result <= 0 )
    v5 |= 1u;
  if ( v5 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1208);
  }
  buf[result] = 0;
  return result;
}
// D5C00: using guessed type char under_debugger;
