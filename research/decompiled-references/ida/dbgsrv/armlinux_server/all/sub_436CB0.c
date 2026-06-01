/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436CB0
// Address: 0x0000000000436CB0

//----- (0000000000436CB0) ----------------------------------------------------
__int64 __fastcall sub_436CB0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  unsigned int v4; // w1

  v2 = a2;
  sub_436010(a1, a2);
  v4 = WORD1(v2);
  v2 >>= 32;
  sub_436010(a1, v4);
  sub_436010(a1, v2);
  return sub_436010(a1, WORD1(v2));
}
