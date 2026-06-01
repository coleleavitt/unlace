__int64 dyld4::RuntimeState::log(dyld4::RuntimeState *this, const char *a2, ...)
{
  va_list va; // [xsp+20h] [xbp+10h] BYREF

  va_start(va, a2);
  return dyld4::RuntimeState::vlog(this, a2, va);
}
