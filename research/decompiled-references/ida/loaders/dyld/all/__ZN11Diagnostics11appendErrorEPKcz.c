__int64 Diagnostics::appendError(Diagnostics *this, char *__s, ...)
{
  va_list va; // [xsp+30h] [xbp+10h] BYREF

  va_start(va, __s);
  if ( *(_QWORD *)this )
    _simple_sresize();
  return Diagnostics::error(this, __s, va);
}
