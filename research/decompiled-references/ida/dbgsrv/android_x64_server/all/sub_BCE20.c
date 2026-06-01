/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BCE20
// Address: 0x00000000000BCE20

//----- (00000000000BCE20) ----------------------------------------------------
ssize_t __fastcall sub_BCE20(char *buf, size_t len)
{
  ssize_t result; // rax

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
// 158B40: using guessed type __int64 under_debugger;
