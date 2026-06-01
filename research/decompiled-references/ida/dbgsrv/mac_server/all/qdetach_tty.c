/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x000000010007EC40

//----- (000000010007EC40) ----------------------------------------------------
int qdetach_tty()
{
  int result; // eax
  int v1; // ebx
  pid_t v2; // eax

  result = open("/dev/tty", 2);
  if ( result > 0 )
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
