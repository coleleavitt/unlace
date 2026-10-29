/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000124A4
// Address: 0x00000001000124A4

//----- (00000001000124A4) ----------------------------------------------------
__int64 __fastcall sub_1000124A4(
        __int64 result,
        unsigned int a2,
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
  if ( v6 - v7 < 0 || !is_mul_ok(a2, a3) || v6 - v7 < a2 * a3 )
LABEL_10:
    sub_10001A4B8((__int64)"%s is incorrect, maximum possible value is %u%s");
  return result;
}
