/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001499C
// Address: 0x000000010001499C

//----- (000000010001499C) ----------------------------------------------------
__int64 __fastcall sub_10001499C(
        __int64 result,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        off_t a5,
        __int64 a6)
{
  __int64 v6; // x22
  off_t v7; // x23
  __int64 v10; // x24

  v6 = a6;
  v7 = a5;
  if ( a5 != -1 )
  {
    if ( a6 != -1 )
      goto LABEL_3;
LABEL_6:
    result = qlsize(result);
    v6 = result;
    if ( v7 < 0 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v10 = result;
  v7 = qlseek(result, 0, 1);
  result = v10;
  if ( v6 == -1 )
    goto LABEL_6;
LABEL_3:
  if ( v7 < 0 )
    goto LABEL_10;
LABEL_7:
  if ( v6 - v7 < 0 || !is_mul_ok(a2, a3) || v6 - v7 < a3 * a2 )
LABEL_10:
    sub_10001BFD4((__int64)"%s is incorrect, maximum possible value is %u%s");
  return result;
}
