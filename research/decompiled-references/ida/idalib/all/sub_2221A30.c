__int64 __fastcall sub_2221A30(char *buf, size_t n)
{
  size_t v3; // rbx
  int *v4; // r12
  ssize_t v5; // rax

  if ( !n )
    return 1;
  v3 = n;
  v4 = __errno_location();
  while ( 1 )
  {
    while ( 1 )
    {
      *v4 = 0;
      v5 = write(2, buf, v3);
      if ( v5 != -1 )
        break;
      if ( *v4 != 4 )
        return 0;
    }
    if ( v5 <= 0 )
      break;
    buf += v5;
    v3 -= v5;
    if ( !v3 )
      return 1;
  }
  return 0;
}
