/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x00000000000C1FBC

//----- (00000000000C1FBC) ----------------------------------------------------
__int64 qdetach_tty()
{
  __int64 result; // x0
  int v1; // w19
  int v2; // w20
  __pid_t v3; // w0

  result = __open_2("/dev/tty", 2);
  if ( (int)result >= 1 )
  {
    v1 = result;
    v2 = syscall(156, 0);
    if ( v2 != -1 )
    {
      v3 = tcgetsid(v1);
      if ( v3 != -1 && v3 == v2 )
      {
        signal(22, (__sighandler_t)((char *)&dword_0 + 1));
        signal(21, (__sighandler_t)((char *)&dword_0 + 1));
        ioctl(v1, 0x5422u, 0);
      }
    }
    return close(v1);
  }
  return result;
}
// 0: using guessed type int dword_0;
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
