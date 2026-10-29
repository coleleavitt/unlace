/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EEDC
// Address: 0x000000000008EEDC

//----- (000000000008EEDC) ----------------------------------------------------
__int64 __fastcall sub_8EEDC(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v6; // w20
  unsigned int v7; // w21
  unsigned int v8; // w23
  unsigned int v9; // w22

  v6 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  v8 = unpack_dd(a3, a3[1]);
  if ( (sub_8E2F0(a1, v6) & 1) != 0 )
  {
    v9 = 1;
    if ( !*(_BYTE *)(a1 + 184) )
      return v9;
    goto LABEL_5;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
         *(_QWORD *)(a1 + 440),
         v6,
         v7,
         v8,
         a2);
  if ( *(_BYTE *)(a1 + 184) )
LABEL_5:
    sub_39FA0((__int64)"attach_process(pid=%d, evid=%d) => %d\n", v6, v7, v9);
  return v9;
}
