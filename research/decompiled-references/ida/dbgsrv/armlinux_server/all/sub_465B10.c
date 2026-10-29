/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465B10
// Address: 0x0000000000465B10

//----- (0000000000465B10) ----------------------------------------------------
__int64 __fastcall sub_465B10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // w21
  unsigned int v7; // w22
  unsigned int v8; // w23
  unsigned int v9; // w19

  v5 = 1;
  v7 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
  v8 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
  v9 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
  if ( !(unsigned __int8)sub_465850(a1, v7) )
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
           *(_QWORD *)(a1 + 440),
           v7,
           v8,
           v9,
           a2);
  if ( *(_BYTE *)(a1 + 184) )
    sub_40A690((int)"attach_process(pid=%d, evid=%d) => %d\n", v7, v8, v5);
  return v5;
}
