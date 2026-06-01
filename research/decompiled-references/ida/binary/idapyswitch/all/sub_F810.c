ssize_t __fastcall sub_F810(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !byte_1D3C0 )
      sub_11780(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}

