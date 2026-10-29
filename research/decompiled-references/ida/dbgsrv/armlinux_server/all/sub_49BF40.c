/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BF40
// Address: 0x000000000049BF40

//----- (000000000049BF40) ----------------------------------------------------
__int64 __fastcall sub_49BF40(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int16 *v3; // x3

  v3 = *(unsigned __int16 **)(a1 + 24);
  if ( !v3 )
    return 0;
  if ( *v3 == a2 )
    return sub_49BEF0(a1, a3);
  return 0;
}
