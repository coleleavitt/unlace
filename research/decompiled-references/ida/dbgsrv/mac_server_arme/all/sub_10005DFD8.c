/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DFD8
// Address: 0x000000010005DFD8

//----- (000000010005DFD8) ----------------------------------------------------
__int64 __fastcall sub_10005DFD8(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 *v4; // x22
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v4 = (__int64 *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( !v3 )
    return 0;
  sub_1000122F4((_QWORD **)(a2 + 8), v3);
  v6 = *v4;
  v7 = sub_10005D1A8();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 288LL))(
         v7,
         v2,
         v6,
         v3,
         0) == v3 )
    return 0;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return throw_idc_exception((unsigned __int8 *)a2, "read error");
}
// 10005E098: variable '_28' is possibly undefined
