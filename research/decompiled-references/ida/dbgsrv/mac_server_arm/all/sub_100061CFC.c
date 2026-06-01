/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061CFC
// Address: 0x0000000100061CFC

//----- (0000000100061CFC) ----------------------------------------------------
__int64 __fastcall sub_100061CFC(__int64 a1)
{
  __int64 *v1; // x19
  __int64 result; // x0

  v1 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_10009DAD8 + 184LL))(
                    qword_10009DAD8,
                    a1);
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*v1 + 152))(v1) & 1) != 0 )
  {
    result = -1;
  }
  else
  {
    result = sub_10005E2D8(v1[4]);
    if ( result > 0 )
      return result;
  }
  v1[8] = (__int64)"irs";
  return result;
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
