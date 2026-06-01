/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68A7C
// Address: 0x0000000000068A7C

//----- (0000000000068A7C) ----------------------------------------------------
__int64 __fastcall sub_68A7C(unsigned __int8 *a1, __int64 a2, unsigned __int8 *a3, int a4, pthread_mutex_t *a5)
{
  __int64 v10; // x8
  _QWORD v12[3]; // [xsp+8h] [xbp-58h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  callui(11, v12, a3);
  v10 = v12[0];
  v12[0] = &off_15D6D0;
  v12[1] = v10;
  return call_idc_func(a1, a2, a3, a4, a5, (__int64)v12) & 1;
}
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
