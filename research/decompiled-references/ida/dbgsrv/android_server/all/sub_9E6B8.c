/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E6B8
// Address: 0x000000000009E6B8

//----- (000000000009E6B8) ----------------------------------------------------
__int64 __fastcall sub_9E6B8(__int64 a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x20
  _QWORD v7[2]; // [xsp+0h] [xbp-30h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_9DBD8();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
         v4,
         v3,
         v7,
         8,
         0) != 8 )
    return throw_idc_exception(a2, "read error");
  v5 = v7[0];
  free_idcv(a2);
  *(_BYTE *)a2 = 9;
  a2[1] = v5;
  return 0;
}
