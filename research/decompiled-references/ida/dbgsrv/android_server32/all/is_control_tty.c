/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_control_tty
// Address: 0x000811DC

//----- (000811DC) --------------------------------------------------------
int __fastcall is_control_tty(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int v7; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  v3 = syscall(147, 0);
  if ( v3 != -1 )
  {
    v4 = ioctl(a1, 0x5429u, &v7);
    if ( v4 != -1 )
      v4 = v7;
    v5 = 1;
    if ( v3 != v4 )
      v5 = 2;
    v2 = 0;
    if ( v4 != -1 )
      return v5;
  }
  return v2;
}
