/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477AB8
// Address: 0x0000000000477AB8

//----- (0000000000477AB8) ----------------------------------------------------
__int64 __fastcall sub_477AB8(unsigned int a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  __int64 v7; // x9
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x4
  _QWORD v12[4]; // [xsp+10h] [xbp-20h] BYREF

  v5 = a1;
  v6 = a2;
  v7 = a4[1];
  v8 = a4[2];
  v9 = a4[3];
  v10 = *a2;
  v12[0] = *a4;
  v12[1] = v7;
  v12[2] = v8;
  v12[3] = v9;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *))(v10 + 32))(v6, v5, a3, v12);
}
