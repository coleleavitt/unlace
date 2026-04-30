char *__fastcall sub_5959CB(const void *a1, __int64 a2, char *a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = (a2 - (__int64)a1) >> 3;
  if ( v5 )
    memmove(a3, a1, 8 * v5);
  return &a3[8 * v5];
}
