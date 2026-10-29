/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EFF8
// Address: 0x000000000044EFF8

//----- (000000000044EFF8) ----------------------------------------------------
__int64 __fastcall sub_44EFF8(_QWORD *a1, __int64 a2, const char **a3, __int64 **a4)
{
  _QWORD *v8; // x1
  __int64 *v9; // x19

  v8 = sub_444D08(a2, a3);
  if ( v8 == (_QWORD *)(a2 + 8) )
    return sub_44D888(a1, a2, a3, a4);
  v9 = v8 + 7;
  sub_4488B8(*a4, v8 + 7);
  *a4 = v9;
  return 1;
}
