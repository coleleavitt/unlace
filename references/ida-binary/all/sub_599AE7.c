size_t __fastcall sub_599AE7(_BYTE *a1, _BYTE *a2, __int64 a3)
{
  size_t n; // [rsp+28h] [rbp-8h]

  n = a2 - a1;
  if ( a2 != a1 )
    memmove((void *)(a3 - n), a1, n);
  return a3 - n;
}
