/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E62C
// Address: 0x000000000009E62C

//----- (000000000009E62C) ----------------------------------------------------
__int64 __fastcall sub_9E62C(__int64 a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned int v6; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_9DBD8();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         &v6,
         4,
         0) != 4 )
    return throw_idc_exception(a2, "read error");
  a2[1] = v6;
  return 0;
}
