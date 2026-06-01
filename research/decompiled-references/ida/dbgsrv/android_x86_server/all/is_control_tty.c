/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_control_tty
// Address: 0x000B4D80

//----- (000B4D80) --------------------------------------------------------
int __cdecl is_control_tty(int fd)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  _DWORD v6[4]; // [esp+8h] [ebp-10h] BYREF

  v6[1] = __readgsdword(0x14u);
  v1 = syscall(147, 0);
  if ( v1 == -1 )
    return 0;
  v2 = v1;
  v3 = ioctl(fd, 0x5429u, v6);
  if ( v3 != -1 )
    v3 = v6[0];
  v4 = 0;
  if ( v3 != -1 )
    return 2 - (v2 == v3);
  return v4;
}
