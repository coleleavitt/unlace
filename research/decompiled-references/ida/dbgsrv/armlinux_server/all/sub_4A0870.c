/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0870
// Address: 0x00000000004A0870

//----- (00000000004A0870) ----------------------------------------------------
__int64 __fastcall sub_4A0870(_QWORD *a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 result; // x0

  result = *(_QWORD *)(*a1 - 24LL);
  if ( a2 + 0x3FFFFFFFFFFFFFF9LL - result < a3 )
    sub_4A04D0(a4);
  return result;
}
