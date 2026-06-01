/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E110
// Address: 0x000000000047E110

//----- (000000000047E110) ----------------------------------------------------
ssize_t __fastcall sub_47E110(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
