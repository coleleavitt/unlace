/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A36B0
// Address: 0x00000000000A36B0

//----- (00000000000A36B0) ----------------------------------------------------
__int64 __fastcall sub_A36B0(__int64 a1, __int64 *a2)
{
  char v4; // w0
  __int64 v5; // x8
  const char *v6; // x2
  const char *v7; // x2
  char v8; // w21
  const char *v9; // x2
  const char *v10; // x2
  __int64 result; // x0

  v4 = sub_A495C(a2[17]);
  v5 = a2[19];
  if ( (v4 & 1) == 0 )
  {
    if ( v5 )
      v7 = (const char *)a2[18];
    else
      v7 = &byte_F154B;
    sub_8D3F8((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v7, 10000);
    if ( a2[19] )
      v10 = (const char *)a2[18];
    else
      v10 = &byte_F154B;
    sub_8D3F8((__int64)a2, "Closing connection from %s...\n", v10);
    return sub_A45F4(a1, (__int64)a2);
  }
  if ( v5 )
    v6 = (const char *)a2[18];
  else
    v6 = &byte_F154B;
  sub_8D3F8((__int64)a2, "Accepting connection from %s...\n", v6);
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  if ( a2[19] )
    v9 = (const char *)a2[18];
  else
    v9 = &byte_F154B;
  result = sub_8D3F8((__int64)a2, "Closing connection from %s...\n", v9);
  if ( (v8 & 1) != 0 )
    return sub_A45F4(a1, (__int64)a2);
  return result;
}
// F154B: using guessed type char byte_F154B;
