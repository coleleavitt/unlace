/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000500C8
// Address: 0x00000001000500C8

//----- (00000001000500C8) ----------------------------------------------------
__int64 __fastcall sub_1000500C8(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // x19
  __int64 v7; // x21
  __int64 v8; // x23
  __int64 v9; // x22

  v6 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  v8 = unpack_dd(a3, a3[1]);
  if ( (sub_10004F3D0(a1, v6) & 1) != 0 )
    v9 = 1;
  else
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
           *(_QWORD *)(a1 + 440),
           v6,
           v7,
           v8,
           a2);
  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000B44();
  return v9;
}
