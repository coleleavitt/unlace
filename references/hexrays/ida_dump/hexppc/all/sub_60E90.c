__int64 *__fastcall sub_60E90(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi

  if ( a1 == a2 )
    return a1;
  v3 = a2[1];
  if ( !v3 )
  {
    a1[1] = 0;
    return a1;
  }
  sub_603A0(a1, v3);
  memcpy((void *)*a1, (const void *)*a2, (unsigned __int64)a2[1] >> 3);
  a1[1] = a2[1];
  return a1;
}
