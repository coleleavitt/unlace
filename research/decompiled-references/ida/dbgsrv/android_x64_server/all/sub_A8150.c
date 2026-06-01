/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8150
// Address: 0x00000000000A8150

//----- (00000000000A8150) ----------------------------------------------------
__int64 __fastcall sub_A8150(__int64 a1, __int64 *a2)
{
  char v2; // al
  __int64 v3; // rcx
  const char *v4; // rdx
  const char *v5; // rdx
  char v6; // bp
  const char *v7; // rdx
  const char *v8; // rdx
  __int64 result; // rax

  v2 = sub_A9660(a2[17]);
  v3 = a2[19];
  if ( !v2 )
  {
    if ( v3 )
      v5 = (const char *)a2[18];
    else
      v5 = s1;
    sub_932B0((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v5, 10000);
    if ( a2[19] )
      v8 = (const char *)a2[18];
    else
      v8 = s1;
    sub_932B0((__int64)a2, "Closing connection from %s...\n", v8);
    return sub_A9290(a1, (__int64)a2);
  }
  if ( v3 )
    v4 = (const char *)a2[18];
  else
    v4 = s1;
  sub_932B0((__int64)a2, "Accepting connection from %s...\n", v4);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  if ( a2[19] )
    v7 = (const char *)a2[18];
  else
    v7 = s1;
  result = sub_932B0((__int64)a2, "Closing connection from %s...\n", v7);
  if ( v6 )
    return sub_A9290(a1, (__int64)a2);
  return result;
}
