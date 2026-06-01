/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF0E8
// Address: 0x00000000000EF0E8

//----- (00000000000EF0E8) ----------------------------------------------------
__int64 __fastcall sub_EF0E8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x1
  __int64 result; // x0

  sub_EEE00(a1, a2);
  v4 = a2[205];
  result = LODWORD(a2[2 * v4 + 1]);
  if ( (_DWORD)result == 6 )
  {
    a1[99] = 0;
  }
  else
  {
    result = Unwind_GetGR((__int64)a1, v4);
    a1[99] = result;
  }
  return result;
}
