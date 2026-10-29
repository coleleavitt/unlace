ssize_t __fastcall sub_27520(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1208, buf);
    BUG();
  }
  buf[result] = 0;
  return result;
}

