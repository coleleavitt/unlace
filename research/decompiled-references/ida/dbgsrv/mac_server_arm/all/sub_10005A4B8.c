/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A4B8
// Address: 0x000000010005A4B8

//----- (000000010005A4B8) ----------------------------------------------------
__int64 __fastcall sub_10005A4B8(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x20
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_10005991C();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         &v7,
         8,
         0) != 8 )
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  v5 = v7;
  free_idcv((unsigned __int8 *)a2);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
