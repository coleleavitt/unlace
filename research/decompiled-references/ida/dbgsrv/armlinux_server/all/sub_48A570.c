/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A570
// Address: 0x000000000048A570

//----- (000000000048A570) ----------------------------------------------------
ssize_t __fastcall sub_48A570(char *buf, size_t len)
{
  ssize_t result; // x0

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    result = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(1208);
    __break(0x3E8u);
  }
  buf[result] = 0;
  return result;
}
// 52451C: using guessed type char under_debugger;
