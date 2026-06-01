/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008E690
// Address: 0x000000014008E690

//----- (000000014008E690) ----------------------------------------------------
void __fastcall sub_14008E690(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 360) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 360) &= ~1u;
    sub_140001640(a2 + 96);
  }
}
