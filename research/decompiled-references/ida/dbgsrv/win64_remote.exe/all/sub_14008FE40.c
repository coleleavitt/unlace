/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008FE40
// Address: 0x000000014008FE40

//----- (000000014008FE40) ----------------------------------------------------
void __fastcall sub_14008FE40(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 256) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 256) &= ~1u;
    sub_140001640(a2 + 80);
  }
}
