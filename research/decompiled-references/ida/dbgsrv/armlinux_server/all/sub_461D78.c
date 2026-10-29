/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461D78
// Address: 0x0000000000461D78

//----- (0000000000461D78) ----------------------------------------------------
bool __fastcall sub_461D78(__int64 a1)
{
  __int64 v2; // x0

  v2 = sub_461B70();
  return v2 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 488LL))(v2, a1, 0) >= 0;
}
