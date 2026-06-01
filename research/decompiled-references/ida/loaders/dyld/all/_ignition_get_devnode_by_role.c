__int64 __fastcall ignition_get_devnode_by_role(int a1, char *a2)
{
  __int64 v3; // x19
  pid_t v4; // w0
  pid_t v5; // w0
  _WORD v7[2]; // [xsp+10h] [xbp-130h] BYREF
  _BYTE v8[255]; // [xsp+14h] [xbp-12Ch] BYREF
  char v9; // [xsp+113h] [xbp-2Dh]

  v9 = -86;
  v7[0] = -22014;
  v7[1] = a1;
  memset(v8, 0, sizeof(v8));
  if ( a1 != 256 )
  {
    if ( a1 != 16 )
      dyld_halt("unsupported role: 0x%x", a1);
    if ( fsctl("/", 0xC1044A50, v7, 0) )
    {
      v3 = (unsigned int)*__error();
      v4 = __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: failed to lookup preboot: %d\n", v4, v3);
      goto LABEL_7;
    }
LABEL_9:
    strlcpy(a2, v8, 0xFFu);
    return 0;
  }
  if ( !fsctl("/", 0xC1044A50, v7, 0) )
    goto LABEL_9;
  v3 = (unsigned int)*__error();
  v5 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: failed to lookup xART device: %d\n", v5, v3);
LABEL_7:
  if ( (unsigned int)v3 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v3);
  return v3;
}
