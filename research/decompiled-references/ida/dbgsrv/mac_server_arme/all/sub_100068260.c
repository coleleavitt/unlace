/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068260
// Address: 0x0000000100068260

//----- (0000000100068260) ----------------------------------------------------
bool __fastcall sub_100068260(__int64 a1, int a2)
{
  __int64 v3; // x20
  int v4; // w0
  const char *v5; // x8

  *(_DWORD *)(a1 + 76) = a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A5AD8 + 184))(*(_QWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 76) = -1;
  if ( (_DWORD)v3 != 1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1000A5AD8 + 232))(*(_QWORD *)(a1 + 88), v3);
    v5 = "openssl";
    if ( v4 == 5 )
      v5 = "irs";
    *(_QWORD *)(a1 + 64) = v5;
  }
  return (_DWORD)v3 == 1;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
