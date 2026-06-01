ssize_t __fastcall sub_901D0(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !byte_1671A1 )
      sub_96F80(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}

