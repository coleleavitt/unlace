/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005B10
// Address: 0x0000000140005B10

//----- (0000000140005B10) ----------------------------------------------------
__int64 __fastcall sub_140005B10(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v5[0] = off_1400920A8;
  v5[2] = a1;
  v6 = a3;
  v7 = a4;
  v5[1] = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, 2, v5);
}
// 1400920A8: using guessed type __int64 (__fastcall *off_1400920A8[2])();
