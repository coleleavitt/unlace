/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x00000001000715E0

//----- (00000001000715E0) ----------------------------------------------------
__int64 qdetach_tty()
{
  __int64 result; // x0
  int v1; // w19
  pid_t v2; // w0

  result = open("/dev/tty", 2);
  if ( (int)result >= 1 )
  {
    v1 = result;
    v2 = getsid(0);
    if ( v2 != -1 && v2 == tcgetsid(v1) )
    {
      signal(22, (void (__cdecl *)(int))1);
      signal(21, (void (__cdecl *)(int))1);
      ioctl(v1, 0x20007471u, 0);
    }
    return close(v1);
  }
  return result;
}
