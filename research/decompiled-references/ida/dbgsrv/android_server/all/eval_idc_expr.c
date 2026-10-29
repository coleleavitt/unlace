/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x0000000000067A20

//----- (0000000000067A20) ----------------------------------------------------
__int64 __fastcall eval_idc_expr(__int64 *a1, __int64 a2, const char *a3, pthread_mutex_t *a4)
{
  _QWORD v9[3]; // [xsp+8h] [xbp-48h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    free_idcv(a1);
    *(_BYTE *)a1 = 2;
    a1[1] = 0;
  }
  v9[0] = &off_15D6D0;
  v9[1] = a2;
  return eval_idc_snippet((unsigned __int8 *)a1, a3, a4, (__int64)v9) & 1;
}
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
