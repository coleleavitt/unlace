/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000636D4
// Address: 0x00000001000636D4

//----- (00000001000636D4) ----------------------------------------------------
bool __fastcall sub_1000636D4(__int64 a1, int a2)
{
  __int64 v3; // x20
  int v4; // w0
  const char *v5; // x8

  *(_DWORD *)(a1 + 76) = a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(qword_10009DAD8 + 184))(*(_QWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 76) = -1;
  if ( (_DWORD)v3 != 1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_10009DAD8 + 232))(*(_QWORD *)(a1 + 88), v3);
    v5 = "openssl";
    if ( v4 == 5 )
      v5 = "irs";
    *(_QWORD *)(a1 + 64) = v5;
  }
  return (_DWORD)v3 == 1;
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
