/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A2E4
// Address: 0x000000010005A2E4

//----- (000000010005A2E4) ----------------------------------------------------
__int64 __fastcall sub_10005A2E4(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned __int8 v6; // [xsp+7h] [xbp-19h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_10005991C();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         &v6,
         1,
         0) != 1 )
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
