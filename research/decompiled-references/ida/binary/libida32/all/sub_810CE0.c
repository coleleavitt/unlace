ssize_t __fastcall sub_810CE0(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !under_debugger )
      interr(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}

