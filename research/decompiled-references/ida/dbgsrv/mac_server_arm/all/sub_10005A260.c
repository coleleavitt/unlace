/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A260
// Address: 0x000000010005A260

//----- (000000010005A260) ----------------------------------------------------
__int64 __fastcall sub_10005A260(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  char v6; // [xsp+7h] [xbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_10005991C();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v4 + 296LL))(
                          v4,
                          v3,
                          &v6,
                          1,
                          0);
  return 0;
}
