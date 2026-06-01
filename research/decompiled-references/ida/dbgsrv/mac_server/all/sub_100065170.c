/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065170
// Address: 0x0000000100065170

//----- (0000000100065170) ----------------------------------------------------
bool __fastcall sub_100065170(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_100064B70();
  return v1 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v1 + 488LL))(v1, a1, 0) >= 0;
}
