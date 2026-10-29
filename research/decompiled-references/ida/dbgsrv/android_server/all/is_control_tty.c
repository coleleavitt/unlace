/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_control_tty
// Address: 0x00000000000C1F68

//----- (00000000000C1F68) ----------------------------------------------------
__int64 __fastcall is_control_tty(int a1)
{
  int v2; // w20
  __pid_t v3; // w0
  unsigned int v4; // w8

  v2 = syscall(156, 0);
  if ( v2 == -1 )
    return 0;
  v3 = tcgetsid(a1);
  if ( v3 == v2 )
    v4 = 1;
  else
    v4 = 2;
  if ( v3 == -1 )
    return 0;
  else
    return v4;
}
