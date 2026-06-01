/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: print_idcv
// Address: 0x000000000006E398

//----- (000000000006E398) ----------------------------------------------------
__int64 __fastcall print_idcv(pthread_mutex_t *a1, unsigned __int8 *a2, const char *a3, int a4)
{
  __int64 *v5; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = *(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6[0] = nullptr;
  v6[1] = nullptr;
  v5 = (__int64 *)v6;
  sub_6E40C(a1, a2, a3, a4, &v5);
  sub_7BA1C((__int64)&v5, v6[0]);
  return 1;
}
