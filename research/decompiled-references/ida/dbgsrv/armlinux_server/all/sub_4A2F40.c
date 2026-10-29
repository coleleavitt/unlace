/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2F40
// Address: 0x00000000004A2F40

//----- (00000000004A2F40) ----------------------------------------------------
__int64 *__fastcall sub_4A2F40(__int64 *result, size_t a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // x5

  v3 = *(_QWORD *)(*result - 24);
  if ( a2 > 0x3FFFFFFFFFFFFFF9LL )
    sub_4A04D0("basic_string::resize");
  if ( a2 > v3 )
    return sub_4A2E50(result, a2 - v3, a3);
  if ( a2 < v3 )
    return (__int64 *)sub_4A1BB8((unsigned int **)result, a2, v3 - a2, 0);
  return result;
}
