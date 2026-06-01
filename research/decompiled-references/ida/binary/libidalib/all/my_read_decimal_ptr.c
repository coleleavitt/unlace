char *__fastcall my_read_decimal_ptr(__int64 *a1, char *a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0;
  while ( *a2 > 47 && *a2 <= 57 )
    v4 = *a2++ - 48 + 10 * v4;
  *a1 = v4;
  return a2;
}

