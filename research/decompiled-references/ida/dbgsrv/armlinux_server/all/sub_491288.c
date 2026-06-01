/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491288
// Address: 0x0000000000491288

//----- (0000000000491288) ----------------------------------------------------
void *__fastcall sub_491288(__int64 a1, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // x1
  unsigned __int64 v7; // x20
  bool v8; // zf
  void *result; // x0

  if ( !a1 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(2676);
  }
  v6 = 2LL * *(_QWORD *)(a1 + 16);
  if ( v6 < a3 )
    v7 = a3;
  else
    v7 = 2LL * *(_QWORD *)(a1 + 16);
  if ( v7 )
    v8 = a4 == 0;
  else
    v8 = 1;
  if ( v8 || is_mul_ok(v7, a4) )
  {
    result = sub_491260(a2, a4 * v7);
    *(_QWORD *)(a1 + 16) = v7;
  }
  else
  {
    if ( v6 <= a3 || a3 && !is_mul_ok(a3, a4) )
      sub_4A0308();
    result = sub_491260(a2, a4 * a3);
    *(_QWORD *)(a1 + 16) = a3;
  }
  return result;
}
// 52451C: using guessed type char under_debugger;
