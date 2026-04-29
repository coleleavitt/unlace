__int64 dlog(__int64 a1, const char *a2, ...)
{
  va_list va; // [xsp+20h] [xbp+10h] BYREF

  va_start(va, a2);
  return vdlog(a1, a2, va);
}
