/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_control_tty
// Address: 0x00000000000C6C20

//----- (00000000000C6C20) ----------------------------------------------------
__int64 __fastcall is_control_tty(int fd)
{
  unsigned int v1; // ebx
  int v2; // ebp
  __pid_t v3; // eax

  v1 = 0;
  v2 = syscall(124, 0);
  if ( v2 != -1 )
  {
    v3 = tcgetsid(fd);
    v1 = 0;
    if ( v3 != -1 )
      return 2 - (unsigned int)(v3 == v2);
  }
  return v1;
}
