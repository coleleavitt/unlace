__int64 Diagnostics::error(Diagnostics *this, const char *a2, ...)
{
  va_list va; // [xsp+20h] [xbp+10h] BYREF

  va_start(va, a2);
  return Diagnostics::error(this, a2, va);
}
