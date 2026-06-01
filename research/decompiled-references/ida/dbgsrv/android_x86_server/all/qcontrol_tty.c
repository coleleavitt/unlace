/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcontrol_tty
// Address: 0x000B4EE0

//----- (000B4EE0) --------------------------------------------------------
unsigned int qcontrol_tty()
{
  int v0; // eax
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  _DWORD v6[6]; // [esp+4h] [ebp-18h] BYREF

  v6[1] = __readgsdword(0x14u);
  v0 = __open_2("/dev/tty", 2);
  if ( v0 > 0 )
  {
    v1 = v0;
    v2 = syscall(147, 0);
    if ( v2 != -1 )
    {
      v3 = v2;
      v4 = ioctl(v1, 0x5429u, v6);
      if ( v4 != -1 )
        v4 = v6[0];
      if ( v4 != -1 && v3 != v4 )
        ioctl(v1, 0x540Eu, 0);
    }
    close(v1);
  }
  return __readgsdword(0x14u);
}
// 17A70: using guessed type int __cdecl __open_2(_DWORD, _DWORD);
