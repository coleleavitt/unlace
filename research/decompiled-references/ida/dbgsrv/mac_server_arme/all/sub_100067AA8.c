/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067AA8
// Address: 0x0000000100067AA8

//----- (0000000100067AA8) ----------------------------------------------------
__int64 __fastcall sub_100067AA8(__int64 a1)
{
  __int64 v2; // x0
  int v3; // w20
  const char *v4; // x8
  int v5; // w0

  v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A5AD8 + 280))(*(_QWORD *)(a1 + 88));
  v3 = v2;
  if ( (v2 & 0x80000000) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1000A5AD8 + 232))(*(_QWORD *)(a1 + 88), v2);
    v4 = "openssl";
    if ( v5 == 5 )
      v4 = "irs";
    goto LABEL_6;
  }
  if ( !(_DWORD)v2 )
  {
    v4 = "connection_closed_by_peer";
LABEL_6:
    *(_QWORD *)(a1 + 64) = v4;
  }
  return v3;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
