/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x0000000100031F20

//----- (0000000100031F20) ----------------------------------------------------
__int64 __fastcall eval_idc_expr(__int64 a1, __int64 a2, const char *a3, void **a4)
{
  _QWORD v7[2]; // [rsp+8h] [rbp-38h] BYREF

  if ( a1 )
  {
    free_idcv((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  v7[0] = &off_1000A8CF0;
  v7[1] = a2;
  return eval_idc_snippet((unsigned __int8 *)a1, a3, a4, (__int64)v7);
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
