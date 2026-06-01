/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000682EC
// Address: 0x00000001000682EC

//----- (00000001000682EC) ----------------------------------------------------
__int64 __fastcall sub_1000682EC(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x1
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // x4
  __int64 v10; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  sub_1000625D0(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  v8 = 78;
  if ( (a2 & 0x80000000) == 0 && a3 )
  {
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = a4;
    v8 = 33;
    *(_DWORD *)(a1 + 24) = a2;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(qword_1000A5AD8 + 216);
  v10 = *(_QWORD *)(a1 + 88);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v9(v10, v8, 1, 0);
}
// 100068364: variable '_28' is possibly undefined
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
