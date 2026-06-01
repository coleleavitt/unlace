/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x0000000000074568

//----- (0000000000074568) ----------------------------------------------------
__int64 __fastcall call_idc_func(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        pthread_mutex_t *a5,
        __int64 a6)
{
  _QWORD v12[20]; // [xsp+0h] [xbp-E0h] BYREF

  v12[19] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_7461C(v12, a6, 0);
  LOBYTE(a5) = sub_724C8((__int64)v12, a2, 0, a4, a3, a1, a5);
  sub_74848((__int64)v12);
  return (unsigned __int8)a5 & 1;
}
// 7461C: using guessed type __int64 __fastcall sub_7461C(_QWORD, _QWORD, _QWORD);
