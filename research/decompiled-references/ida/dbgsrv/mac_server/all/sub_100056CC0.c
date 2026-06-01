/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056CC0
// Address: 0x0000000100056CC0

//----- (0000000100056CC0) ----------------------------------------------------
__int64 __fastcall sub_100056CC0(__int64 a1, void **a2, signed int a3, __int64 a4)
{
  __int64 v7; // [rsp+0h] [rbp-50h] BYREF
  __int128 v8; // [rsp+8h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-38h]
  int v10; // [rsp+20h] [rbp-30h]

  sub_100032FE0(a2, a3);
  if ( a3 <= 0 )
    return sub_100055750((__int64)a2, a4);
  v7 = 0x800000028LL;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 552LL))(*(_QWORD *)(a1 + 440), &v7);
  sub_100067040(a2, (__int64)&v7);
  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000AE0((int)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(a1 + 440) + 552LL));
  sub_100067150(a2, (__int64 *)(*(_QWORD *)(a1 + 440) + 544LL));
  if ( (_QWORD)v8 )
  {
    *((_QWORD *)&v8 + 1) = 0;
    qfree((void *)v8);
  }
  return __stack_chk_guard;
}
