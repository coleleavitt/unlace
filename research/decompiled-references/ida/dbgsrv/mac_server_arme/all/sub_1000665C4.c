/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000665C4
// Address: 0x00000001000665C4

//----- (00000001000665C4) ----------------------------------------------------
__int64 __fastcall sub_1000665C4(__int64 a1)
{
  __int64 *v1; // x19
  __int64 result; // x0

  v1 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1000A5AD8 + 184LL))(
                    qword_1000A5AD8,
                    a1);
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*v1 + 152))(v1) & 1) != 0 )
  {
    result = -1;
  }
  else
  {
    result = sub_100062420(v1[4]);
    if ( result > 0 )
      return result;
  }
  v1[8] = (__int64)"irs";
  return result;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
