char *__fastcall sub_599B4B(_BYTE *a1, _BYTE *a2, char *a3)
{
  size_t n; // [rsp+28h] [rbp-8h]

  n = a2 - a1;
  if ( a2 != a1 )
    memmove(a3, a1, n);
  return &a3[n];
}
