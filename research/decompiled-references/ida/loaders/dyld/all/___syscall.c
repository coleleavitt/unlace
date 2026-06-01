int __syscall(int a1, ...)
{
  char v1; // cf
  __int64 v2; // x0
  void *v4; // [xsp+10h] [xbp+0h]
  void *v5; // [xsp+18h] [xbp+8h]
  void *v6; // [xsp+20h] [xbp+10h]
  void *v7; // [xsp+28h] [xbp+18h]
  void *v8; // [xsp+30h] [xbp+20h]
  void *v9; // [xsp+38h] [xbp+28h]
  void *v10; // [xsp+40h] [xbp+30h]
  va_list va; // [xsp+48h] [xbp+38h] BYREF

  va_start(va, a1);
  v4 = va_arg(va, void *);
  v5 = va_arg(va, void *);
  v6 = va_arg(va, void *);
  v7 = va_arg(va, void *);
  v8 = va_arg(va, void *);
  v9 = va_arg(va, void *);
  v10 = va_arg(va, void *);
  LODWORD(v2) = mac_syscall(SYS_syscall, a1, v4, v5, v6, v7, v8, v9, v10);
  if ( v1 )
    LODWORD(v2) = cerror(v2);
  return v2;
}
