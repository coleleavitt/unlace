/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069660
// Address: 0x0000000100069660

//----- (0000000100069660) ----------------------------------------------------
__int64 __fastcall sub_100069660(__int64 a1, __int64 *a2)
{
  const char *v2; // rdx
  const char *v3; // rdx
  char v4; // r15
  const char *v5; // rdx
  const char *v6; // rdx
  __int64 result; // rax

  if ( !(unsigned __int8)sub_10006AAF0(a2[17]) )
  {
    if ( a2[19] )
      v3 = (const char *)a2[18];
    else
      v3 = _s1;
    sub_100054CC0((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v3, 10000);
    if ( a2[19] )
      v6 = (const char *)a2[18];
    else
      v6 = _s1;
    sub_100054CC0((__int64)a2, "Closing connection from %s...\n", v6);
    return sub_10006A720(a1, (__int64)a2);
  }
  if ( a2[19] )
    v2 = (const char *)a2[18];
  else
    v2 = _s1;
  sub_100054CC0((__int64)a2, "Accepting connection from %s...\n", v2);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  if ( a2[19] )
    v5 = (const char *)a2[18];
  else
    v5 = _s1;
  result = sub_100054CC0((__int64)a2, "Closing connection from %s...\n", v5);
  if ( v4 )
    return sub_10006A720(a1, (__int64)a2);
  return result;
}
