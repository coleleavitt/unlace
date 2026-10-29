/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95250
// Address: 0x0000000000095250

//----- (0000000000095250) ----------------------------------------------------
__int64 __fastcall sub_95250(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  unsigned int v7; // ebp

  v4 = unpack_dd(a3, a3[1]);
  v5 = unpack_dd(a3, a3[1]);
  v6 = unpack_dd(a3, a3[1]);
  v7 = 1;
  if ( !(unsigned __int8)sub_94460(a1, v4) )
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
           *(_QWORD *)(a1 + 440),
           v4,
           v5,
           v6,
           a2);
  if ( *(_BYTE *)(a1 + 184) )
    sub_390A0((int)"attach_process(pid=%d, evid=%d) => %d\n", v4, v5, v7);
  return v7;
}
