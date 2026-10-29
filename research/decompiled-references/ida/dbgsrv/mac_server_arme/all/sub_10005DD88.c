/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DD88
// Address: 0x000000010005DD88

//----- (000000010005DD88) ----------------------------------------------------
__int64 __fastcall sub_10005DD88(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned __int16 v6; // [xsp+6h] [xbp-1Ah] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_10005D1A8();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         &v6,
         2,
         0) != 2 )
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
