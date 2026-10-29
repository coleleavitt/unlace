/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461D38
// Address: 0x0000000000461D38

//----- (0000000000461D38) ----------------------------------------------------
__int64 __fastcall sub_461D38(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0

  v6 = sub_461B70();
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 288LL))(
           v6,
           a1,
           a2,
           a3,
           0);
}
