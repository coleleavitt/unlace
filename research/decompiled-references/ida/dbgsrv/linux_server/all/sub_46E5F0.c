/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E5F0
// Address: 0x000000000046E5F0

//----- (000000000046E5F0) ----------------------------------------------------
__int64 __fastcall sub_46E5F0(__int64 a1, __int64 *a2)
{
  char v2; // dl
  __int64 v3; // rax
  bool v4; // zf
  const char *v5; // rdx
  char v6; // r12
  const char *v7; // rdx
  __int64 result; // rax

  v2 = sub_46F050(a2[17]);
  v3 = a2[19];
  v4 = v2 == 0;
  v5 = s1;
  if ( v4 )
  {
    if ( v3 )
      v5 = (const char *)a2[18];
    sub_45C330((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v5, 10000);
    if ( !a2[19] )
    {
      sub_45C330((__int64)a2, "Closing connection from %s...\n", s1);
      return sub_46E530(a1, (__int64)a2);
    }
    sub_45C330((__int64)a2, "Closing connection from %s...\n", (const char *)a2[18]);
    return sub_46E530(a1, (__int64)a2);
  }
  if ( v3 )
    v5 = (const char *)a2[18];
  sub_45C330((__int64)a2, "Accepting connection from %s...\n", v5);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  v7 = s1;
  if ( a2[19] )
    v7 = (const char *)a2[18];
  result = sub_45C330((__int64)a2, "Closing connection from %s...\n", v7);
  if ( v6 )
    return sub_46E530(a1, (__int64)a2);
  return result;
}
