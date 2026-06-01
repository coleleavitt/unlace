/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476068
// Address: 0x0000000000476068

//----- (0000000000476068) ----------------------------------------------------
__int64 __fastcall sub_476068(__int64 a1, __int64 *a2)
{
  char v4; // w0
  __int64 v5; // x1
  const char *v6; // x2
  int v7; // w20
  __int64 result; // x0
  const char *v9; // x2

  v4 = sub_477088(a2[17]);
  v5 = a2[19];
  if ( v4 )
  {
    if ( v5 )
      v6 = (const char *)a2[18];
    else
      v6 = (const char *)&qword_4B2D48;
    sub_463500((__int64)a2, "Accepting connection from %s...\n", v6);
    v7 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
    if ( !a2[19] )
      goto LABEL_5;
LABEL_10:
    result = sub_463500((__int64)a2, "Closing connection from %s...\n", (const char *)a2[18]);
    if ( v7 )
      return sub_475F60(a1, (__int64)a2);
    return result;
  }
  if ( v5 )
    v9 = (const char *)a2[18];
  else
    v9 = (const char *)&qword_4B2D48;
  sub_463500((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v9, 10000);
  v7 = 1;
  if ( a2[19] )
    goto LABEL_10;
LABEL_5:
  result = sub_463500((__int64)a2, "Closing connection from %s...\n", (const char *)&qword_4B2D48);
  if ( v7 )
    return sub_475F60(a1, (__int64)a2);
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
