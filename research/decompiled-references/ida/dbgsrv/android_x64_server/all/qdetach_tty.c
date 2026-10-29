/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x00000000000C6C70

//----- (00000000000C6C70) ----------------------------------------------------
int qdetach_tty()
{
  int result; // eax
  int v1; // ebp
  int v2; // ebx
  __pid_t v3; // eax

  result = __open_2("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    v2 = syscall(124, 0);
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
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
