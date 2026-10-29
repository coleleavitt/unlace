__int64 __fastcall eval_idc_expr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  v7[3] = __readfsqword(0x28u);
  if ( a1 )
  {
    free_idcv(a1);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  v7[0] = &off_2B39F68;
  v7[1] = a2;
  return eval_idc_snippet(a1, a3, a4, v7);
}
