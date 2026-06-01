/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr_long
// Address: 0x000000000006AAB0

//----- (000000000006AAB0) ----------------------------------------------------
__int64 __fastcall eval_expr_long(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v6; // ebx
  char v8[8]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v6 = (unsigned int)a1;
  v11 = __readfsqword(0x28u);
  v8[0] = 2;
  v9 = 0;
  v10 = 0;
  if ( (unsigned __int8)eval_expr((__int64)v8, a2, a3, a4, 0.0, a6) )
  {
    idcv_long((__int64)v8, 0.0, a6);
    *a1 = v9;
    LOBYTE(v6) = 1;
  }
  else
  {
    v6 = 0;
  }
  free_idcv(v8, 0.0, a6);
  return v6;
}
