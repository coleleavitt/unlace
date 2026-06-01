/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_502E4
// Address: 0x00000000000502E4

//----- (00000000000502E4) ----------------------------------------------------
__int64 __fastcall sub_502E4(__int64 *a1, __int64 a2, unsigned int *a3)
{
  if ( a3 && a1[22] >= 1 && a1[24] )
    return sub_55D60(a1[20], a2, a1 + 22, *a3);
  else
    return 0;
}
