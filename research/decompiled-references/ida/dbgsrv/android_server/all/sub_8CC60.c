/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CC60
// Address: 0x000000000008CC60

//----- (000000000008CC60) ----------------------------------------------------
__int64 __fastcall sub_8CC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 StatusReg; // x19
  _QWORD **v7; // x0
  _QWORD v9[3]; // [xsp+8h] [xbp-28h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a1 )
    v7 = (_QWORD **)(a1 - 192);
  else
    v7 = nullptr;
  v9[2] = *(_QWORD *)(StatusReg + 40);
  v9[0] = a3;
  v9[1] = a3 + a4;
  if ( (int)a2 < 0x1000000 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v7[55] + 400LL))(v7[55]);
  else
    return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, _QWORD *))(*v7)[4])(v7, a2, a5, a6, v9);
}
