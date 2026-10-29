/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000544E0
// Address: 0x00000001000544E0

//----- (00000001000544E0) ----------------------------------------------------
__int64 __fastcall sub_1000544E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v7; // rdi
  _QWORD v9[2]; // [rsp+8h] [rbp-18h] BYREF

  v7 = (_QWORD **)(a1 - 192);
  if ( !a1 )
    v7 = nullptr;
  v9[0] = a3;
  v9[1] = a3 + a4;
  if ( (int)a2 < 0x1000000 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v7[55] + 400LL))(v7[55]);
  else
    return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, _QWORD *))(*v7)[4])(v7, a2, a5, a6, v9);
}
