__int64 dyld4::console(dyld4 *this, const char *a2, ...)
{
  int v3; // w20
  pid_t v4; // w0
  pid_t v6; // w0

  if ( __getpid() == 1 )
  {
    v3 = open("/dev/console", 131073, 0);
    v4 = __getpid();
    _simple_dprintf(2, "dyld[%d]: ", v4);
    _simple_vdprintf(v3, (char *)this);
    return close(v3);
  }
  else
  {
    v6 = __getpid();
    _simple_dprintf(2, "dyld[%d]: ", v6);
    return _simple_vdprintf(2, (char *)this);
  }
}
