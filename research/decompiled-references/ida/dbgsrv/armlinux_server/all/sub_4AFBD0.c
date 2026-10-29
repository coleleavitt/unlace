/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFBD0
// Address: 0x00000000004AFBD0

//----- (00000000004AFBD0) ----------------------------------------------------
__int64 __fastcall sub_4AFBD0(__int64 a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 v4; // x4
  __int64 result; // x0

  v4 = *(_QWORD *)(a1 + 8);
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 + 0x7FFFFFFFFFFFFFFFLL - v4 < a3 )
    sub_4A04D0(a4);
  return result;
}
