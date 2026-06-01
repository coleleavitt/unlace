/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x00081238

//----- (00081238) --------------------------------------------------------
int qdetach_tty()
{
  int v0; // r0
  int v1; // r4
  int v2; // r6
  int v3; // r0
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  v0 = _open_2("/dev/tty", 2);
  if ( v0 >= 1 )
  {
    v1 = v0;
    v2 = syscall(147, 0);
    if ( v2 != -1 )
    {
      v3 = ioctl(v1, 0x5429u, v5);
      if ( v3 != -1 )
        v3 = v5[0];
      if ( v3 != -1 && v2 == v3 )
      {
        bsd_signal(22, 1);
        bsd_signal(21, 1);
        ioctl(v1, 0x5422u, 0);
      }
    }
    close(v1);
  }
  return _stack_chk_guard - v5[1];
}
// 192E0: using guessed type int __fastcall _open_2(_DWORD, _DWORD);
// 19574: using guessed type int __fastcall bsd_signal(_DWORD, _DWORD);
