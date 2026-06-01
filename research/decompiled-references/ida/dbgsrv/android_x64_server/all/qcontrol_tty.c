/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcontrol_tty
// Address: 0x00000000000C6D00

//----- (00000000000C6D00) ----------------------------------------------------
int qcontrol_tty()
{
  int result; // eax
  int v1; // ebx
  int v2; // r14d
  __pid_t v3; // eax

  result = __open_2("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    v2 = syscall(124, 0);
    if ( v2 != -1 )
    {
      v3 = tcgetsid(v1);
      if ( v3 != -1 && v3 != v2 )
        ioctl(v1, 0x540Eu, 0);
    }
    return close(v1);
  }
  return result;
}
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
