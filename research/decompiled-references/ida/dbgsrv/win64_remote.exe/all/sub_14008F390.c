/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008F390
// Address: 0x000000014008F390

//----- (000000014008F390) ----------------------------------------------------
void __fastcall sub_14008F390(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    sub_14000B060((void **)(a2 + 48));
  }
}
