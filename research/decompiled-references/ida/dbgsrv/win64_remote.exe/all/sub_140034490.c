/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034490
// Address: 0x0000000140034490

//----- (0000000140034490) ----------------------------------------------------
__int64 __fastcall sub_140034490(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  sub_1400343E0(a1, a2);
  sub_1400343E0(a1, WORD1(v2));
  v2 >>= 32;
  sub_1400343E0(a1, v2);
  return sub_1400343E0(a1, WORD1(v2));
}
