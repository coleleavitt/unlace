/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000664FC
// Address: 0x00000001000664FC

//----- (00000001000664FC) ----------------------------------------------------
__int64 __fastcall sub_1000664FC(__int64 a1)
{
  __int64 *v1; // x19
  __int64 result; // x0

  v1 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1000A5AD8 + 184LL))(
                    qword_1000A5AD8,
                    a1);
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*v1 + 152))(v1) & 1) != 0 || (int)sub_1000624B0(v1[4]) < 1 )
  {
    result = -1;
  }
  else
  {
    result = sub_100062444(v1[4]);
    if ( result > 0 )
      return result;
  }
  v1[8] = (__int64)"irs";
  return result;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
