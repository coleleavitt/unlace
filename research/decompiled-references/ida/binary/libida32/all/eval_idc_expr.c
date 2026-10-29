__int64 __fastcall eval_idc_expr(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a1 )
  {
    free_idcv(a1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v7 = &off_2B0FFC8;
  v8 = a2;
  return eval_idc_snippet(a1, a3, a4, &v7);
}

