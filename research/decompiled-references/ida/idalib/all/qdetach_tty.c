int qdetach_tty()
{
  int result; // eax
  int v1; // ebx

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( (unsigned int)is_control_tty(result) == 1 )
    {
      signal(22, (__sighandler_t)((char *)&dword_0 + 1));
      signal(21, (__sighandler_t)((char *)&dword_0 + 1));
      ioctl(v1, 0x5422u, 0);
    }
    return close(v1);
  }
  return result;
}
