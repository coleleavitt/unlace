/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008DC30
// Address: 0x000000014008DC30

//----- (000000014008DC30) ----------------------------------------------------
void __fastcall sub_14008DC30(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 152) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    sub_140001640(a2 + 56);
  }
}
