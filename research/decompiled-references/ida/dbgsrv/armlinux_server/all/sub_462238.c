/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462238
// Address: 0x0000000000462238

//----- (0000000000462238) ----------------------------------------------------
__int64 __fastcall sub_462238(__int64 a1, __int64 a2)
{
  __int64 v3; // x22
  __int64 v4; // x0
  char v6; // [xsp+37h] [xbp-9h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 40);
  v4 = sub_461B70();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v4 + 296LL))(
                          v4,
                          v3,
                          &v6,
                          1,
                          0);
  return 0;
}
