/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49CEA8
// Address: 0x000000000049CEA8

//----- (000000000049CEA8) ----------------------------------------------------
unsigned __int64 __fastcall sub_49CEA8(unsigned __int64 *a1)
{
  unsigned __int64 v2; // x20
  unsigned __int64 result; // x0

  v2 = sub_48CD50(a1[1]);
  result = sub_48CD50(*a1);
  *a1 = v2;
  a1[1] = result;
  return result;
}
