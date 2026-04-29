const char **__fastcall boot_boot(_QWORD *a1)
{
  const char **result; // x0
  char *v3; // x19
  char *v4; // x21
  __int64 v5; // x22
  int *v6; // x0
  _QWORD v7[2]; // [xsp+18h] [xbp-38h] BYREF
  int v8; // [xsp+2Ch] [xbp-24h] BYREF

  arguments(a1);
  v7[0] = *a1 + 24LL;
  v7[1] = 0;
  v8 = open("/", 537919488);
  if ( v8 < 0 )
  {
    v3 = __boot[0][1];
    v4 = __boot[0][2];
    v5 = (unsigned int)*__error();
    v6 = __error();
    ignition_halt((__int64)v3, v5, (__int64)v4, "failed to open root directory: %s: %d", "/", *v6);
  }
  boot_set_root(a1, &_boot_root_fs, &v8);
  result = (const char **)stage_next(v7);
  if ( !result )
  {
    LODWORD(result) = -1;
    goto LABEL_10;
  }
  while ( 1 )
  {
    a1[1] = result;
    result = (const char **)stage_fire(result, (__int64)a1);
    if ( (_DWORD)result )
      break;
    result = (const char **)stage_next(v7);
    if ( !result )
      return result;
  }
  if ( (unsigned int)result >= 0x6A )
LABEL_10:
    dyld_halt("error not set to valid posix code: %d", (_DWORD)result);
  return result;
}
