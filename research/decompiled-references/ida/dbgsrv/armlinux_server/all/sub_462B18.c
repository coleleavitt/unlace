/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462B18
// Address: 0x0000000000462B18

//----- (0000000000462B18) ----------------------------------------------------
__int64 __fastcall sub_462B18(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  _QWORD *v7; // x0
  __int64 v8; // x8
  __int64 result; // x0
  __int64 (*v10)(); // x7
  _QWORD v11[2]; // [xsp+18h] [xbp-18h] BYREF

  v6 = a1 == 0;
  v7 = (_QWORD *)(a1 - 192);
  v11[0] = a3;
  v11[1] = a3 + a4;
  if ( v6 )
    v7 = nullptr;
  if ( (int)a2 > 0xFFFFFF )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD *))(*v7 + 32LL))(v7, a2, a5, a6, v11);
  v8 = v7[55];
  result = 0;
  v10 = *(__int64 (**)())(*(_QWORD *)v8 + 400LL);
  if ( v10 != sub_407168 )
    return ((__int64 (__fastcall *)(__int64))v10)(v8);
  return result;
}
