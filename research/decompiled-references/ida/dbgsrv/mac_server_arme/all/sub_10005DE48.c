/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DE48
// Address: 0x000000010005DE48

//----- (000000010005DE48) ----------------------------------------------------
__int64 __fastcall sub_10005DE48(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned int v6; // [xsp+4h] [xbp-1Ch] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_10005D1A8();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         &v6,
         4,
         0) != 4 )
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
