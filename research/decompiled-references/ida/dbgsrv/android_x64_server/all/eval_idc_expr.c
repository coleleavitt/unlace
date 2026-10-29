/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x000000000006AA30

//----- (000000000006AA30) ----------------------------------------------------
__int64 __fastcall eval_idc_expr(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, double a5, __m128 a6)
{
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[2] = __readfsqword(0x28u);
  if ( a1 )
  {
    free_idcv((char *)a1, a5, a6);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  v9[0] = &off_14DE60;
  v9[1] = a2;
  return eval_idc_snippet((char *)a1, a3, a4, (__int64)v9, a5, a6);
}
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
