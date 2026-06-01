int __cdecl fmount_90140467(const char *a1, int a2, int a3, void *a4)
{
  void *v4; // x4
  void *v5; // x19
  int result; // w0
  statfs v11; // [xsp+8h] [xbp-8B8h] BYREF

  v5 = v4;
  if ( !a4 )
    goto LABEL_4;
  __bzero(&v11, 0x878u);
  if ( fstatfs(a2, &v11) )
  {
LABEL_5:
    result = *__error();
    goto LABEL_6;
  }
  if ( _platform_strcmp((const char *)a4, v11.f_mntfromname) )
  {
LABEL_4:
    result = fmount(a1, a2, a3, v5);
    if ( !result )
      return result;
    goto LABEL_5;
  }
  result = 16;
LABEL_6:
  if ( (unsigned int)result >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", result);
  return result;
}
