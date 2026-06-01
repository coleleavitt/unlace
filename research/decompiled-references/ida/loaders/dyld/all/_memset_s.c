errno_t __cdecl memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n)
{
  size_t v4; // x8
  errno_t v5; // w19

  if ( !__s )
    return 22;
  if ( __n >= __smax )
    v4 = __smax;
  else
    v4 = __n;
  if ( __n <= __smax )
    v5 = 0;
  else
    v5 = 84;
  _platform_memset(__s, __c, v4);
  return v5;
}
