int ioctl(int a1, unsigned __int64 a2, ...)
{
  void *v3; // [xsp+20h] [xbp+10h]
  va_list va; // [xsp+28h] [xbp+18h] BYREF

  va_start(va, a2);
  v3 = va_arg(va, void *);
  return __ioctl(a1, a2, v3);
}
